
// Generated from pascal.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "pascalParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by pascalParser.
 */
class  pascalVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by pascalParser.
   */
    virtual std::any visitVariable(pascalParser::VariableContext *context) = 0;

    virtual std::any visitProgram(pascalParser::ProgramContext *context) = 0;

    virtual std::any visitConst_variable_declaration_list(pascalParser::Const_variable_declaration_listContext *context) = 0;

    virtual std::any visitConst_variable_declaration(pascalParser::Const_variable_declarationContext *context) = 0;

    virtual std::any visitVariable_declaration_list(pascalParser::Variable_declaration_listContext *context) = 0;

    virtual std::any visitVariable_declaration_sublist(pascalParser::Variable_declaration_sublistContext *context) = 0;

    virtual std::any visitType_identifier(pascalParser::Type_identifierContext *context) = 0;

    virtual std::any visitCompound_statement(pascalParser::Compound_statementContext *context) = 0;

    virtual std::any visitSimpleStatement(pascalParser::SimpleStatementContext *context) = 0;

    virtual std::any visitComplexStatement(pascalParser::ComplexStatementContext *context) = 0;

    virtual std::any visitStatement(pascalParser::StatementContext *context) = 0;

    virtual std::any visitAssignment_statement(pascalParser::Assignment_statementContext *context) = 0;

    virtual std::any visitWrite_statement(pascalParser::Write_statementContext *context) = 0;

    virtual std::any visitWrite(pascalParser::WriteContext *context) = 0;

    virtual std::any visitWriteln(pascalParser::WritelnContext *context) = 0;

    virtual std::any visitWriteExpr(pascalParser::WriteExprContext *context) = 0;

    virtual std::any visitWriteStrConst(pascalParser::WriteStrConstContext *context) = 0;

    virtual std::any visitRead_statement(pascalParser::Read_statementContext *context) = 0;

    virtual std::any visitIf_statement(pascalParser::If_statementContext *context) = 0;

    virtual std::any visitExpr(pascalParser::ExprContext *context) = 0;

    virtual std::any visitParens(pascalParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(pascalParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(pascalParser::AddSubContext *context) = 0;

    virtual std::any visitNum(pascalParser::NumContext *context) = 0;

    virtual std::any visitVariabl(pascalParser::VariablContext *context) = 0;

    virtual std::any visitExpressionToBool(pascalParser::ExpressionToBoolContext *context) = 0;

    virtual std::any visitCompareExpressions(pascalParser::CompareExpressionsContext *context) = 0;


};

