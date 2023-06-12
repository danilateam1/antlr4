#include <map>
#include <vector>

#include "pascalBaseVisitor.h"

class  pascalUserVisitor : public pascalBaseVisitor {
public:
  std::map<std::string, int> intval;
  std::map<std::string, const int> const_intval;
  void const_break(std::string var_name) {
      if (const_intval.find(var_name) != const_intval.end()) {
          exit(-1);
      }
  }
  void var_find_break(std::string var_name) {
      if (const_intval.find(var_name) == const_intval.end()) {
          if (intval.find(var_name) == intval.end()) {
              exit(-1);
          }
      }
  }
  int get_value(std::string var_name) {
      if (const_intval.find(var_name) != const_intval.end()) {
          return const_intval[var_name];
      }
      return intval[var_name];
  }

  virtual std::any visitProgram(pascalParser::ProgramContext *ctx) override {
    int result = 0;
    if(ctx->const_variable_declaration_list() != nullptr) {
      auto cdeclaration_return = std::any_cast<int>(visit(ctx->const_variable_declaration_list()));
      result |= cdeclaration_return;
    }
    if(ctx->variable_declaration_list() != nullptr) {
      auto declaration_return =  std::any_cast<int>(visit(ctx->variable_declaration_list()));
      result |= declaration_return;
    }
    auto body_return = std::any_cast<int>(visit(ctx->compound_statement()));
    return result | body_return;
  }

  virtual std::any visitConst_variable_declaration_list(pascalParser::Const_variable_declaration_listContext* ctx) override {
      for (auto p : ctx->const_variable_declaration()) {
          visit(p);
      }
      return 0;
  }

  virtual std::any visitConst_variable_declaration(pascalParser::Const_variable_declarationContext* ctx) override {
      const_intval.insert(
          std::make_pair(
              ctx->ID()->getText(),
              stoi(ctx->NUM()->getText())
          )
      );
      return 0;
  }

  virtual std::any visitVariable_declaration_list(pascalParser::Variable_declaration_listContext* ctx) override {
      for (auto p : ctx->variable_declaration_sublist()) {
          visit(p);
      }
      return 0;
  }

  virtual std::any visitVariable_declaration_sublist(pascalParser::Variable_declaration_sublistContext* ctx) override {
      intval[ctx->ID(0)->getText()] = 0;
      for (auto x : ctx->ID()) {
          intval[x->getText()] = 0;
      }
      return 0;
  }

  virtual std::any visitType_identifier(pascalParser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_statement(pascalParser::Compound_statementContext *ctx) override {
    return visit(ctx->statement_list());
  }

  virtual std::any visitSimpleStatement(pascalParser::SimpleStatementContext *ctx) override {
    return visit(ctx->statement());
  }

  virtual std::any visitStatement(pascalParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexStatement(pascalParser::ComplexStatementContext *ctx) override {
    auto left_st_ret  = std::any_cast<int>(visit(ctx->statement_list(0)));
    auto right_st_ret = std::any_cast<int>(visit(ctx->statement_list(1)));
    return left_st_ret | right_st_ret;
  }

  virtual std::any visitAssignment_statement(pascalParser::Assignment_statementContext *ctx) override {
    auto val = std::any_cast<int>(visit(ctx->expr()));
    std::string var_name = ctx->ID()->getText();
    const_break(var_name);
    var_find_break(var_name);
    intval[var_name] = val;
    return 0;
  }

  virtual std::any visitWrite_statement(pascalParser::Write_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrite(pascalParser::WriteContext *ctx) override {
    visit(ctx->writeable());
    return 0;
  }

  virtual std::any visitWriteln(pascalParser::WritelnContext *ctx) override {
    visit(ctx->writeable());
    std::cout << std::endl;
    return 0;
  }

  virtual std::any visitWriteExpr(pascalParser::WriteExprContext* ctx) override {
      std::cout << std::any_cast<int>(visit(ctx->expr()));
      return 0;
  }

  virtual std::any visitWriteStrConst(pascalParser::WriteStrConstContext* ctx) override {
      std::string text = ctx->STRING_CONSTANT()->getText();
      text.erase(std::remove(text.begin(), text.end(), '\''), text.end());
      std::cout << text;
      return 0;
  }

  virtual std::any visitIf_statement(pascalParser::If_statementContext* ctx) override {
      bool condition = std::any_cast<bool>(visit(ctx->compared_expression()));
      if (condition) {
          return visit(ctx->statement(0));
      }
      else {
          return visit(ctx->statement(1));
      }
  }

  virtual std::any visitExpressionToBool(pascalParser::ExpressionToBoolContext* ctx) override {
      return std::any_cast<bool>(visit(ctx->expr()));
  }

  virtual std::any visitCompareExpressions(pascalParser::CompareExpressionsContext* ctx) override {
      int lv = std::any_cast<int>(visit(ctx->expr(0)));
      int rv = std::any_cast<int>(visit(ctx->expr(1)));
      switch (ctx->comp->getType()) {
      case pascalParser::E:
          return lv == rv;
      case pascalParser::NE:
          return lv != rv;
      case pascalParser::L:
          return lv < rv;
      case pascalParser::LE:
          return lv <= rv;
      case pascalParser::G:
          return lv > rv;
      case pascalParser::GE:
          return lv >= rv;
      default:
          return 0;
      }
  }

  virtual std::any visitRead_statement(pascalParser::Read_statementContext *ctx) override {
    int val;
    std::cin >> val;
    std::string var_name = ctx->ID()->getText();
    const_break(var_name);
    var_find_break(var_name);
    intval[var_name] = val;
    return 0;
  }

  virtual std::any visitExpr(pascalParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(pascalParser::ParensContext *ctx) override {
    return visit(ctx->sexpr());
  }

  virtual std::any visitMulDiv(pascalParser::MulDivContext *ctx) override {
    int left  = std::any_cast<int>(visit(ctx->sexpr(0)));
    int right = std::any_cast<int>(visit(ctx->sexpr(1)));
    if(ctx->op->getType() == pascalParser::MUL) {
        return left * right;
    }
    else if (ctx->op->getType() == pascalParser::DIV) {
        return left / right;
    }
    else {
        return left % right;
    }
  }

  virtual std::any visitAddSub(pascalParser::AddSubContext *ctx) override {
    int left  = std::any_cast<int>(visit(ctx->sexpr(0)));
    int right = std::any_cast<int>(visit(ctx->sexpr(1)));
    if(ctx->op->getType() == pascalParser::ADD) {
        return left + right;
    }
    else {
        return left - right;
    }
  }

  virtual std::any visitNum(pascalParser::NumContext *ctx) override {
    return std::stoi(ctx->NUM()->getText());
  }

  virtual std::any visitVariabl(pascalParser::VariablContext *ctx) override {
    return visit(ctx->variable());
  }

  virtual std::any visitVariable(pascalParser::VariableContext *ctx) override {
    std::string var_name = ctx->ID()->getText();
    var_find_break(var_name);
    return get_value(var_name);
  }

};