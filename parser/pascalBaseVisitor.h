
// Generated from pascal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalVisitor.h"


/**
 * This class provides an empty implementation of pascalVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  pascalBaseVisitor : public pascalVisitor {
public:

  virtual std::any visitVariable(pascalParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(pascalParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_variable_declaration_list(pascalParser::Const_variable_declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConst_variable_declaration(pascalParser::Const_variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration_list(pascalParser::Variable_declaration_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration_sublist(pascalParser::Variable_declaration_sublistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_identifier(pascalParser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompound_statement(pascalParser::Compound_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStatement(pascalParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComplexStatement(pascalParser::ComplexStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(pascalParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_statement(pascalParser::Assignment_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrite_statement(pascalParser::Write_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWrite(pascalParser::WriteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteln(pascalParser::WritelnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteExpr(pascalParser::WriteExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWriteStrConst(pascalParser::WriteStrConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRead_statement(pascalParser::Read_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(pascalParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(pascalParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(pascalParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(pascalParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(pascalParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNum(pascalParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariabl(pascalParser::VariablContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionToBool(pascalParser::ExpressionToBoolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompareExpressions(pascalParser::CompareExpressionsContext *ctx) override {
    return visitChildren(ctx);
  }


};

