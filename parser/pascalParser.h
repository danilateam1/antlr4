
// Generated from pascal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  pascalParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, E = 18, NE = 19, L = 20, LE = 21, 
    G = 22, GE = 23, MUL = 24, DIV = 25, MOD = 26, ADD = 27, SUB = 28, NUM = 29, 
    SEP = 30, NEWLINE = 31, STRING_CONSTANT = 32, ID = 33, WS = 34
  };

  enum {
    RuleVariable = 0, RuleProgram = 1, RuleConst_variable_declaration_list = 2, 
    RuleConst_variable_declaration = 3, RuleVariable_declaration_list = 4, 
    RuleVariable_declaration_sublist = 5, RuleType_identifier = 6, RuleCompound_statement = 7, 
    RuleStatement_list = 8, RuleStatement = 9, RuleAssignment_statement = 10, 
    RuleWrite_statement = 11, RuleWrite = 12, RuleWriteln = 13, RuleWriteable = 14, 
    RuleRead_statement = 15, RuleIf_statement = 16, RuleExpr = 17, RuleSexpr = 18, 
    RuleCompared_expression = 19
  };

  explicit pascalParser(antlr4::TokenStream *input);

  pascalParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~pascalParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class VariableContext;
  class ProgramContext;
  class Const_variable_declaration_listContext;
  class Const_variable_declarationContext;
  class Variable_declaration_listContext;
  class Variable_declaration_sublistContext;
  class Type_identifierContext;
  class Compound_statementContext;
  class Statement_listContext;
  class StatementContext;
  class Assignment_statementContext;
  class Write_statementContext;
  class WriteContext;
  class WritelnContext;
  class WriteableContext;
  class Read_statementContext;
  class If_statementContext;
  class ExprContext;
  class SexprContext;
  class Compared_expressionContext; 

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compound_statementContext *compound_statement();
    Const_variable_declaration_listContext *const_variable_declaration_list();
    Variable_declaration_listContext *variable_declaration_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Const_variable_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Const_variable_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Const_variable_declarationContext *> const_variable_declaration();
    Const_variable_declarationContext* const_variable_declaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_variable_declaration_listContext* const_variable_declaration_list();

  class  Const_variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    Const_variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *SEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Const_variable_declarationContext* const_variable_declaration();

  class  Variable_declaration_listContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaration_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declaration_sublistContext *> variable_declaration_sublist();
    Variable_declaration_sublistContext* variable_declaration_sublist(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declaration_listContext* variable_declaration_list();

  class  Variable_declaration_sublistContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaration_sublistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    Type_identifierContext *type_identifier();
    antlr4::tree::TerminalNode *SEP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declaration_sublistContext* variable_declaration_sublist();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Compound_statementContext : public antlr4::ParserRuleContext {
  public:
    Compound_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_listContext *statement_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Compound_statementContext* compound_statement();

  class  Statement_listContext : public antlr4::ParserRuleContext {
  public:
    Statement_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Statement_listContext() = default;
    void copyFrom(Statement_listContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SimpleStatementContext : public Statement_listContext {
  public:
    SimpleStatementContext(Statement_listContext *ctx);

    StatementContext *statement();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComplexStatementContext : public Statement_listContext {
  public:
    ComplexStatementContext(Statement_listContext *ctx);

    std::vector<Statement_listContext *> statement_list();
    Statement_listContext* statement_list(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Statement_listContext* statement_list();
  Statement_listContext* statement_list(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compound_statementContext *compound_statement();
    Assignment_statementContext *assignment_statement();
    Write_statementContext *write_statement();
    Read_statementContext *read_statement();
    If_statementContext *if_statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  Assignment_statementContext : public antlr4::ParserRuleContext {
  public:
    Assignment_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_statementContext* assignment_statement();

  class  Write_statementContext : public antlr4::ParserRuleContext {
  public:
    Write_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WriteContext *write();
    WritelnContext *writeln();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Write_statementContext* write_statement();

  class  WriteContext : public antlr4::ParserRuleContext {
  public:
    WriteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WriteableContext *writeable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteContext* write();

  class  WritelnContext : public antlr4::ParserRuleContext {
  public:
    WritelnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WriteableContext *writeable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnContext* writeln();

  class  WriteableContext : public antlr4::ParserRuleContext {
  public:
    WriteableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WriteableContext() = default;
    void copyFrom(WriteableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WriteStrConstContext : public WriteableContext {
  public:
    WriteStrConstContext(WriteableContext *ctx);

    antlr4::tree::TerminalNode *STRING_CONSTANT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WriteExprContext : public WriteableContext {
  public:
    WriteExprContext(WriteableContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WriteableContext* writeable();

  class  Read_statementContext : public antlr4::ParserRuleContext {
  public:
    Read_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Read_statementContext* read_statement();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Compared_expressionContext *compared_expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SexprContext *sexpr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  SexprContext : public antlr4::ParserRuleContext {
  public:
    SexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SexprContext() = default;
    void copyFrom(SexprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParensContext : public SexprContext {
  public:
    ParensContext(SexprContext *ctx);

    SexprContext *sexpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivContext : public SexprContext {
  public:
    MulDivContext(SexprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<SexprContext *> sexpr();
    SexprContext* sexpr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubContext : public SexprContext {
  public:
    AddSubContext(SexprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<SexprContext *> sexpr();
    SexprContext* sexpr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumContext : public SexprContext {
  public:
    NumContext(SexprContext *ctx);

    antlr4::tree::TerminalNode *NUM();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariablContext : public SexprContext {
  public:
    VariablContext(SexprContext *ctx);

    VariableContext *variable();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SexprContext* sexpr();
  SexprContext* sexpr(int precedence);
  class  Compared_expressionContext : public antlr4::ParserRuleContext {
  public:
    Compared_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Compared_expressionContext() = default;
    void copyFrom(Compared_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpressionToBoolContext : public Compared_expressionContext {
  public:
    ExpressionToBoolContext(Compared_expressionContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CompareExpressionsContext : public Compared_expressionContext {
  public:
    CompareExpressionsContext(Compared_expressionContext *ctx);

    antlr4::Token *comp = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *E();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *L();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *G();
    antlr4::tree::TerminalNode *GE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Compared_expressionContext* compared_expression();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex);
  bool sexprSempred(SexprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

