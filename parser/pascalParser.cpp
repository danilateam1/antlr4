
// Generated from pascal.g4 by ANTLR 4.13.0


#include "pascalVisitor.h"

#include "pascalParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PascalParserStaticData final {
  PascalParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalParserStaticData(const PascalParserStaticData&) = delete;
  PascalParserStaticData(PascalParserStaticData&&) = delete;
  PascalParserStaticData& operator=(const PascalParserStaticData&) = delete;
  PascalParserStaticData& operator=(PascalParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascalParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PascalParserStaticData *pascalParserStaticData = nullptr;

void pascalParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascalParserStaticData != nullptr) {
    return;
  }
#else
  assert(pascalParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalParserStaticData>(
    std::vector<std::string>{
      "variable", "program", "const_variable_declaration_list", "const_variable_declaration", 
      "variable_declaration_list", "variable_declaration_sublist", "type_identifier", 
      "compound_statement", "statement_list", "statement", "assignment_statement", 
      "write_statement", "write", "writeln", "writeable", "read_statement", 
      "if_statement", "expr", "sexpr", "compared_expression"
    },
    std::vector<std::string>{
      "", "'const'", "'var'", "'.'", "':'", "','", "'integer'", "'begin'", 
      "'end'", "':='", "'write'", "'('", "')'", "'writeln'", "'read'", "'if'", 
      "'then'", "'else'", "'='", "'<>'", "'<'", "'<='", "'>'", "'>='", "'*'", 
      "'div'", "'mod'", "'+'", "'-'", "", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "E", "NE", "L", "LE", "G", "GE", "MUL", "DIV", "MOD", "ADD", "SUB", 
      "NUM", "SEP", "NEWLINE", "STRING_CONSTANT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,175,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,1,1,1,
  	3,1,45,8,1,1,1,1,1,3,1,49,8,1,1,1,1,1,1,1,1,2,1,2,5,2,56,8,2,10,2,12,
  	2,59,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,5,4,70,8,4,10,4,12,4,73,
  	9,4,1,5,1,5,1,5,5,5,78,8,5,10,5,12,5,81,9,5,1,5,1,5,1,5,1,5,1,6,1,6,1,
  	7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,5,8,99,8,8,10,8,12,8,102,9,8,1,
  	9,1,9,1,9,1,9,1,9,3,9,109,8,9,1,10,1,10,1,10,1,10,1,11,1,11,3,11,117,
  	8,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,3,14,
  	131,8,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,3,16,
  	144,8,16,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,155,8,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,5,18,163,8,18,10,18,12,18,166,9,18,1,19,1,
  	19,1,19,1,19,1,19,3,19,173,8,19,1,19,0,2,16,36,20,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,0,3,1,0,24,26,1,0,27,28,1,0,18,23,
  	172,0,40,1,0,0,0,2,44,1,0,0,0,4,53,1,0,0,0,6,60,1,0,0,0,8,67,1,0,0,0,
  	10,74,1,0,0,0,12,86,1,0,0,0,14,88,1,0,0,0,16,92,1,0,0,0,18,108,1,0,0,
  	0,20,110,1,0,0,0,22,116,1,0,0,0,24,118,1,0,0,0,26,123,1,0,0,0,28,130,
  	1,0,0,0,30,132,1,0,0,0,32,137,1,0,0,0,34,145,1,0,0,0,36,154,1,0,0,0,38,
  	172,1,0,0,0,40,41,5,33,0,0,41,1,1,0,0,0,42,43,5,1,0,0,43,45,3,4,2,0,44,
  	42,1,0,0,0,44,45,1,0,0,0,45,48,1,0,0,0,46,47,5,2,0,0,47,49,3,8,4,0,48,
  	46,1,0,0,0,48,49,1,0,0,0,49,50,1,0,0,0,50,51,3,14,7,0,51,52,5,3,0,0,52,
  	3,1,0,0,0,53,57,3,6,3,0,54,56,3,6,3,0,55,54,1,0,0,0,56,59,1,0,0,0,57,
  	55,1,0,0,0,57,58,1,0,0,0,58,5,1,0,0,0,59,57,1,0,0,0,60,61,5,33,0,0,61,
  	62,5,4,0,0,62,63,3,12,6,0,63,64,5,18,0,0,64,65,5,29,0,0,65,66,5,30,0,
  	0,66,7,1,0,0,0,67,71,3,10,5,0,68,70,3,10,5,0,69,68,1,0,0,0,70,73,1,0,
  	0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,9,1,0,0,0,73,71,1,0,0,0,74,79,5,33,
  	0,0,75,76,5,5,0,0,76,78,5,33,0,0,77,75,1,0,0,0,78,81,1,0,0,0,79,77,1,
  	0,0,0,79,80,1,0,0,0,80,82,1,0,0,0,81,79,1,0,0,0,82,83,5,4,0,0,83,84,3,
  	12,6,0,84,85,5,30,0,0,85,11,1,0,0,0,86,87,5,6,0,0,87,13,1,0,0,0,88,89,
  	5,7,0,0,89,90,3,16,8,0,90,91,5,8,0,0,91,15,1,0,0,0,92,93,6,8,-1,0,93,
  	94,3,18,9,0,94,95,5,30,0,0,95,100,1,0,0,0,96,97,10,1,0,0,97,99,3,16,8,
  	2,98,96,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,1,0,0,0,101,17,
  	1,0,0,0,102,100,1,0,0,0,103,109,3,14,7,0,104,109,3,20,10,0,105,109,3,
  	22,11,0,106,109,3,30,15,0,107,109,3,32,16,0,108,103,1,0,0,0,108,104,1,
  	0,0,0,108,105,1,0,0,0,108,106,1,0,0,0,108,107,1,0,0,0,109,19,1,0,0,0,
  	110,111,5,33,0,0,111,112,5,9,0,0,112,113,3,34,17,0,113,21,1,0,0,0,114,
  	117,3,24,12,0,115,117,3,26,13,0,116,114,1,0,0,0,116,115,1,0,0,0,117,23,
  	1,0,0,0,118,119,5,10,0,0,119,120,5,11,0,0,120,121,3,28,14,0,121,122,5,
  	12,0,0,122,25,1,0,0,0,123,124,5,13,0,0,124,125,5,11,0,0,125,126,3,28,
  	14,0,126,127,5,12,0,0,127,27,1,0,0,0,128,131,3,34,17,0,129,131,5,32,0,
  	0,130,128,1,0,0,0,130,129,1,0,0,0,131,29,1,0,0,0,132,133,5,14,0,0,133,
  	134,5,11,0,0,134,135,5,33,0,0,135,136,5,12,0,0,136,31,1,0,0,0,137,138,
  	5,15,0,0,138,139,3,38,19,0,139,140,5,16,0,0,140,143,3,18,9,0,141,142,
  	5,17,0,0,142,144,3,18,9,0,143,141,1,0,0,0,143,144,1,0,0,0,144,33,1,0,
  	0,0,145,146,3,36,18,0,146,35,1,0,0,0,147,148,6,18,-1,0,148,149,5,11,0,
  	0,149,150,3,36,18,0,150,151,5,12,0,0,151,155,1,0,0,0,152,155,3,0,0,0,
  	153,155,5,29,0,0,154,147,1,0,0,0,154,152,1,0,0,0,154,153,1,0,0,0,155,
  	164,1,0,0,0,156,157,10,4,0,0,157,158,7,0,0,0,158,163,3,36,18,5,159,160,
  	10,3,0,0,160,161,7,1,0,0,161,163,3,36,18,4,162,156,1,0,0,0,162,159,1,
  	0,0,0,163,166,1,0,0,0,164,162,1,0,0,0,164,165,1,0,0,0,165,37,1,0,0,0,
  	166,164,1,0,0,0,167,173,3,34,17,0,168,169,3,34,17,0,169,170,7,2,0,0,170,
  	171,3,34,17,0,171,173,1,0,0,0,172,167,1,0,0,0,172,168,1,0,0,0,173,39,
  	1,0,0,0,14,44,48,57,71,79,100,108,116,130,143,154,162,164,172
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascalParserStaticData = staticData.release();
}

}

pascalParser::pascalParser(TokenStream *input) : pascalParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

pascalParser::pascalParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  pascalParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pascalParserStaticData->atn, pascalParserStaticData->decisionToDFA, pascalParserStaticData->sharedContextCache, options);
}

pascalParser::~pascalParser() {
  delete _interpreter;
}

const atn::ATN& pascalParser::getATN() const {
  return *pascalParserStaticData->atn;
}

std::string pascalParser::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalParser::getRuleNames() const {
  return pascalParserStaticData->ruleNames;
}

const dfa::Vocabulary& pascalParser::getVocabulary() const {
  return pascalParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView pascalParser::getSerializedATN() const {
  return pascalParserStaticData->serializedATN;
}


//----------------- VariableContext ------------------------------------------------------------------

pascalParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::VariableContext::ID() {
  return getToken(pascalParser::ID, 0);
}


size_t pascalParser::VariableContext::getRuleIndex() const {
  return pascalParser::RuleVariable;
}


std::any pascalParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::VariableContext* pascalParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 0, pascalParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(pascalParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

pascalParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Compound_statementContext* pascalParser::ProgramContext::compound_statement() {
  return getRuleContext<pascalParser::Compound_statementContext>(0);
}

pascalParser::Const_variable_declaration_listContext* pascalParser::ProgramContext::const_variable_declaration_list() {
  return getRuleContext<pascalParser::Const_variable_declaration_listContext>(0);
}

pascalParser::Variable_declaration_listContext* pascalParser::ProgramContext::variable_declaration_list() {
  return getRuleContext<pascalParser::Variable_declaration_listContext>(0);
}


size_t pascalParser::ProgramContext::getRuleIndex() const {
  return pascalParser::RuleProgram;
}


std::any pascalParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ProgramContext* pascalParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, pascalParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::T__0) {
      setState(42);
      match(pascalParser::T__0);
      setState(43);
      const_variable_declaration_list();
    }
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == pascalParser::T__1) {
      setState(46);
      match(pascalParser::T__1);
      setState(47);
      variable_declaration_list();
    }
    setState(50);
    compound_statement();
    setState(51);
    match(pascalParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_variable_declaration_listContext ------------------------------------------------------------------

pascalParser::Const_variable_declaration_listContext::Const_variable_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::Const_variable_declarationContext *> pascalParser::Const_variable_declaration_listContext::const_variable_declaration() {
  return getRuleContexts<pascalParser::Const_variable_declarationContext>();
}

pascalParser::Const_variable_declarationContext* pascalParser::Const_variable_declaration_listContext::const_variable_declaration(size_t i) {
  return getRuleContext<pascalParser::Const_variable_declarationContext>(i);
}


size_t pascalParser::Const_variable_declaration_listContext::getRuleIndex() const {
  return pascalParser::RuleConst_variable_declaration_list;
}


std::any pascalParser::Const_variable_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConst_variable_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Const_variable_declaration_listContext* pascalParser::const_variable_declaration_list() {
  Const_variable_declaration_listContext *_localctx = _tracker.createInstance<Const_variable_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 4, pascalParser::RuleConst_variable_declaration_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    const_variable_declaration();
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::ID) {
      setState(54);
      const_variable_declaration();
      setState(59);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Const_variable_declarationContext ------------------------------------------------------------------

pascalParser::Const_variable_declarationContext::Const_variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Const_variable_declarationContext::ID() {
  return getToken(pascalParser::ID, 0);
}

pascalParser::Type_identifierContext* pascalParser::Const_variable_declarationContext::type_identifier() {
  return getRuleContext<pascalParser::Type_identifierContext>(0);
}

tree::TerminalNode* pascalParser::Const_variable_declarationContext::E() {
  return getToken(pascalParser::E, 0);
}

tree::TerminalNode* pascalParser::Const_variable_declarationContext::NUM() {
  return getToken(pascalParser::NUM, 0);
}

tree::TerminalNode* pascalParser::Const_variable_declarationContext::SEP() {
  return getToken(pascalParser::SEP, 0);
}


size_t pascalParser::Const_variable_declarationContext::getRuleIndex() const {
  return pascalParser::RuleConst_variable_declaration;
}


std::any pascalParser::Const_variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitConst_variable_declaration(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Const_variable_declarationContext* pascalParser::const_variable_declaration() {
  Const_variable_declarationContext *_localctx = _tracker.createInstance<Const_variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, pascalParser::RuleConst_variable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(pascalParser::ID);
    setState(61);
    match(pascalParser::T__3);
    setState(62);
    type_identifier();
    setState(63);
    match(pascalParser::E);
    setState(64);
    match(pascalParser::NUM);
    setState(65);
    match(pascalParser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaration_listContext ------------------------------------------------------------------

pascalParser::Variable_declaration_listContext::Variable_declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<pascalParser::Variable_declaration_sublistContext *> pascalParser::Variable_declaration_listContext::variable_declaration_sublist() {
  return getRuleContexts<pascalParser::Variable_declaration_sublistContext>();
}

pascalParser::Variable_declaration_sublistContext* pascalParser::Variable_declaration_listContext::variable_declaration_sublist(size_t i) {
  return getRuleContext<pascalParser::Variable_declaration_sublistContext>(i);
}


size_t pascalParser::Variable_declaration_listContext::getRuleIndex() const {
  return pascalParser::RuleVariable_declaration_list;
}


std::any pascalParser::Variable_declaration_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration_list(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Variable_declaration_listContext* pascalParser::variable_declaration_list() {
  Variable_declaration_listContext *_localctx = _tracker.createInstance<Variable_declaration_listContext>(_ctx, getState());
  enterRule(_localctx, 8, pascalParser::RuleVariable_declaration_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    variable_declaration_sublist();
    setState(71);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::ID) {
      setState(68);
      variable_declaration_sublist();
      setState(73);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaration_sublistContext ------------------------------------------------------------------

pascalParser::Variable_declaration_sublistContext::Variable_declaration_sublistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> pascalParser::Variable_declaration_sublistContext::ID() {
  return getTokens(pascalParser::ID);
}

tree::TerminalNode* pascalParser::Variable_declaration_sublistContext::ID(size_t i) {
  return getToken(pascalParser::ID, i);
}

pascalParser::Type_identifierContext* pascalParser::Variable_declaration_sublistContext::type_identifier() {
  return getRuleContext<pascalParser::Type_identifierContext>(0);
}

tree::TerminalNode* pascalParser::Variable_declaration_sublistContext::SEP() {
  return getToken(pascalParser::SEP, 0);
}


size_t pascalParser::Variable_declaration_sublistContext::getRuleIndex() const {
  return pascalParser::RuleVariable_declaration_sublist;
}


std::any pascalParser::Variable_declaration_sublistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration_sublist(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Variable_declaration_sublistContext* pascalParser::variable_declaration_sublist() {
  Variable_declaration_sublistContext *_localctx = _tracker.createInstance<Variable_declaration_sublistContext>(_ctx, getState());
  enterRule(_localctx, 10, pascalParser::RuleVariable_declaration_sublist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(pascalParser::ID);
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == pascalParser::T__4) {
      setState(75);
      match(pascalParser::T__4);
      setState(76);
      match(pascalParser::ID);
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(82);
    match(pascalParser::T__3);
    setState(83);
    type_identifier();
    setState(84);
    match(pascalParser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_identifierContext ------------------------------------------------------------------

pascalParser::Type_identifierContext::Type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::Type_identifierContext::getRuleIndex() const {
  return pascalParser::RuleType_identifier;
}


std::any pascalParser::Type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitType_identifier(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Type_identifierContext* pascalParser::type_identifier() {
  Type_identifierContext *_localctx = _tracker.createInstance<Type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 12, pascalParser::RuleType_identifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(pascalParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

pascalParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Statement_listContext* pascalParser::Compound_statementContext::statement_list() {
  return getRuleContext<pascalParser::Statement_listContext>(0);
}


size_t pascalParser::Compound_statementContext::getRuleIndex() const {
  return pascalParser::RuleCompound_statement;
}


std::any pascalParser::Compound_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCompound_statement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Compound_statementContext* pascalParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, pascalParser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(pascalParser::T__6);
    setState(89);
    statement_list(0);
    setState(90);
    match(pascalParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

pascalParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::Statement_listContext::getRuleIndex() const {
  return pascalParser::RuleStatement_list;
}

void pascalParser::Statement_listContext::copyFrom(Statement_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleStatementContext ------------------------------------------------------------------

pascalParser::StatementContext* pascalParser::SimpleStatementContext::statement() {
  return getRuleContext<pascalParser::StatementContext>(0);
}

tree::TerminalNode* pascalParser::SimpleStatementContext::SEP() {
  return getToken(pascalParser::SEP, 0);
}

pascalParser::SimpleStatementContext::SimpleStatementContext(Statement_listContext *ctx) { copyFrom(ctx); }


std::any pascalParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComplexStatementContext ------------------------------------------------------------------

std::vector<pascalParser::Statement_listContext *> pascalParser::ComplexStatementContext::statement_list() {
  return getRuleContexts<pascalParser::Statement_listContext>();
}

pascalParser::Statement_listContext* pascalParser::ComplexStatementContext::statement_list(size_t i) {
  return getRuleContext<pascalParser::Statement_listContext>(i);
}

pascalParser::ComplexStatementContext::ComplexStatementContext(Statement_listContext *ctx) { copyFrom(ctx); }


std::any pascalParser::ComplexStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitComplexStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Statement_listContext* pascalParser::statement_list() {
   return statement_list(0);
}

pascalParser::Statement_listContext* pascalParser::statement_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, parentState);
  pascalParser::Statement_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, pascalParser::RuleStatement_list, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<SimpleStatementContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(93);
    statement();
    setState(94);
    match(pascalParser::SEP);
    _ctx->stop = _input->LT(-1);
    setState(100);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ComplexStatementContext>(_tracker.createInstance<Statement_listContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleStatement_list);
        setState(96);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(97);
        statement_list(2); 
      }
      setState(102);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

pascalParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Compound_statementContext* pascalParser::StatementContext::compound_statement() {
  return getRuleContext<pascalParser::Compound_statementContext>(0);
}

pascalParser::Assignment_statementContext* pascalParser::StatementContext::assignment_statement() {
  return getRuleContext<pascalParser::Assignment_statementContext>(0);
}

pascalParser::Write_statementContext* pascalParser::StatementContext::write_statement() {
  return getRuleContext<pascalParser::Write_statementContext>(0);
}

pascalParser::Read_statementContext* pascalParser::StatementContext::read_statement() {
  return getRuleContext<pascalParser::Read_statementContext>(0);
}

pascalParser::If_statementContext* pascalParser::StatementContext::if_statement() {
  return getRuleContext<pascalParser::If_statementContext>(0);
}


size_t pascalParser::StatementContext::getRuleIndex() const {
  return pascalParser::RuleStatement;
}


std::any pascalParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::StatementContext* pascalParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, pascalParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(103);
        compound_statement();
        break;
      }

      case pascalParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(104);
        assignment_statement();
        break;
      }

      case pascalParser::T__9:
      case pascalParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(105);
        write_statement();
        break;
      }

      case pascalParser::T__13: {
        enterOuterAlt(_localctx, 4);
        setState(106);
        read_statement();
        break;
      }

      case pascalParser::T__14: {
        enterOuterAlt(_localctx, 5);
        setState(107);
        if_statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_statementContext ------------------------------------------------------------------

pascalParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Assignment_statementContext::ID() {
  return getToken(pascalParser::ID, 0);
}

pascalParser::ExprContext* pascalParser::Assignment_statementContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}


size_t pascalParser::Assignment_statementContext::getRuleIndex() const {
  return pascalParser::RuleAssignment_statement;
}


std::any pascalParser::Assignment_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitAssignment_statement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Assignment_statementContext* pascalParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, pascalParser::RuleAssignment_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(pascalParser::ID);
    setState(111);
    match(pascalParser::T__8);
    setState(112);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Write_statementContext ------------------------------------------------------------------

pascalParser::Write_statementContext::Write_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::WriteContext* pascalParser::Write_statementContext::write() {
  return getRuleContext<pascalParser::WriteContext>(0);
}

pascalParser::WritelnContext* pascalParser::Write_statementContext::writeln() {
  return getRuleContext<pascalParser::WritelnContext>(0);
}


size_t pascalParser::Write_statementContext::getRuleIndex() const {
  return pascalParser::RuleWrite_statement;
}


std::any pascalParser::Write_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWrite_statement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Write_statementContext* pascalParser::write_statement() {
  Write_statementContext *_localctx = _tracker.createInstance<Write_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, pascalParser::RuleWrite_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(114);
        write();
        break;
      }

      case pascalParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(115);
        writeln();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteContext ------------------------------------------------------------------

pascalParser::WriteContext::WriteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::WriteableContext* pascalParser::WriteContext::writeable() {
  return getRuleContext<pascalParser::WriteableContext>(0);
}


size_t pascalParser::WriteContext::getRuleIndex() const {
  return pascalParser::RuleWrite;
}


std::any pascalParser::WriteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWrite(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::WriteContext* pascalParser::write() {
  WriteContext *_localctx = _tracker.createInstance<WriteContext>(_ctx, getState());
  enterRule(_localctx, 24, pascalParser::RuleWrite);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(pascalParser::T__9);
    setState(119);
    match(pascalParser::T__10);
    setState(120);
    writeable();
    setState(121);
    match(pascalParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnContext ------------------------------------------------------------------

pascalParser::WritelnContext::WritelnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::WriteableContext* pascalParser::WritelnContext::writeable() {
  return getRuleContext<pascalParser::WriteableContext>(0);
}


size_t pascalParser::WritelnContext::getRuleIndex() const {
  return pascalParser::RuleWriteln;
}


std::any pascalParser::WritelnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWriteln(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::WritelnContext* pascalParser::writeln() {
  WritelnContext *_localctx = _tracker.createInstance<WritelnContext>(_ctx, getState());
  enterRule(_localctx, 26, pascalParser::RuleWriteln);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(pascalParser::T__12);
    setState(124);
    match(pascalParser::T__10);
    setState(125);
    writeable();
    setState(126);
    match(pascalParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteableContext ------------------------------------------------------------------

pascalParser::WriteableContext::WriteableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::WriteableContext::getRuleIndex() const {
  return pascalParser::RuleWriteable;
}

void pascalParser::WriteableContext::copyFrom(WriteableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WriteStrConstContext ------------------------------------------------------------------

tree::TerminalNode* pascalParser::WriteStrConstContext::STRING_CONSTANT() {
  return getToken(pascalParser::STRING_CONSTANT, 0);
}

pascalParser::WriteStrConstContext::WriteStrConstContext(WriteableContext *ctx) { copyFrom(ctx); }


std::any pascalParser::WriteStrConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWriteStrConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteExprContext ------------------------------------------------------------------

pascalParser::ExprContext* pascalParser::WriteExprContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

pascalParser::WriteExprContext::WriteExprContext(WriteableContext *ctx) { copyFrom(ctx); }


std::any pascalParser::WriteExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitWriteExpr(this);
  else
    return visitor->visitChildren(this);
}
pascalParser::WriteableContext* pascalParser::writeable() {
  WriteableContext *_localctx = _tracker.createInstance<WriteableContext>(_ctx, getState());
  enterRule(_localctx, 28, pascalParser::RuleWriteable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10:
      case pascalParser::NUM:
      case pascalParser::ID: {
        _localctx = _tracker.createInstance<pascalParser::WriteExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(128);
        expr();
        break;
      }

      case pascalParser::STRING_CONSTANT: {
        _localctx = _tracker.createInstance<pascalParser::WriteStrConstContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(pascalParser::STRING_CONSTANT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Read_statementContext ------------------------------------------------------------------

pascalParser::Read_statementContext::Read_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* pascalParser::Read_statementContext::ID() {
  return getToken(pascalParser::ID, 0);
}


size_t pascalParser::Read_statementContext::getRuleIndex() const {
  return pascalParser::RuleRead_statement;
}


std::any pascalParser::Read_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitRead_statement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::Read_statementContext* pascalParser::read_statement() {
  Read_statementContext *_localctx = _tracker.createInstance<Read_statementContext>(_ctx, getState());
  enterRule(_localctx, 30, pascalParser::RuleRead_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(pascalParser::T__13);
    setState(133);
    match(pascalParser::T__10);
    setState(134);
    match(pascalParser::ID);
    setState(135);
    match(pascalParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

pascalParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::Compared_expressionContext* pascalParser::If_statementContext::compared_expression() {
  return getRuleContext<pascalParser::Compared_expressionContext>(0);
}

std::vector<pascalParser::StatementContext *> pascalParser::If_statementContext::statement() {
  return getRuleContexts<pascalParser::StatementContext>();
}

pascalParser::StatementContext* pascalParser::If_statementContext::statement(size_t i) {
  return getRuleContext<pascalParser::StatementContext>(i);
}


size_t pascalParser::If_statementContext::getRuleIndex() const {
  return pascalParser::RuleIf_statement;
}


std::any pascalParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::If_statementContext* pascalParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 32, pascalParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(pascalParser::T__14);
    setState(138);
    compared_expression();
    setState(139);
    match(pascalParser::T__15);
    setState(140);
    statement();
    setState(143);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(141);
      match(pascalParser::T__16);
      setState(142);
      statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

pascalParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

pascalParser::SexprContext* pascalParser::ExprContext::sexpr() {
  return getRuleContext<pascalParser::SexprContext>(0);
}


size_t pascalParser::ExprContext::getRuleIndex() const {
  return pascalParser::RuleExpr;
}


std::any pascalParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::ExprContext* pascalParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 34, pascalParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    sexpr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SexprContext ------------------------------------------------------------------

pascalParser::SexprContext::SexprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::SexprContext::getRuleIndex() const {
  return pascalParser::RuleSexpr;
}

void pascalParser::SexprContext::copyFrom(SexprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

pascalParser::SexprContext* pascalParser::ParensContext::sexpr() {
  return getRuleContext<pascalParser::SexprContext>(0);
}

pascalParser::ParensContext::ParensContext(SexprContext *ctx) { copyFrom(ctx); }


std::any pascalParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<pascalParser::SexprContext *> pascalParser::MulDivContext::sexpr() {
  return getRuleContexts<pascalParser::SexprContext>();
}

pascalParser::SexprContext* pascalParser::MulDivContext::sexpr(size_t i) {
  return getRuleContext<pascalParser::SexprContext>(i);
}

tree::TerminalNode* pascalParser::MulDivContext::MUL() {
  return getToken(pascalParser::MUL, 0);
}

tree::TerminalNode* pascalParser::MulDivContext::DIV() {
  return getToken(pascalParser::DIV, 0);
}

tree::TerminalNode* pascalParser::MulDivContext::MOD() {
  return getToken(pascalParser::MOD, 0);
}

pascalParser::MulDivContext::MulDivContext(SexprContext *ctx) { copyFrom(ctx); }


std::any pascalParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<pascalParser::SexprContext *> pascalParser::AddSubContext::sexpr() {
  return getRuleContexts<pascalParser::SexprContext>();
}

pascalParser::SexprContext* pascalParser::AddSubContext::sexpr(size_t i) {
  return getRuleContext<pascalParser::SexprContext>(i);
}

tree::TerminalNode* pascalParser::AddSubContext::ADD() {
  return getToken(pascalParser::ADD, 0);
}

tree::TerminalNode* pascalParser::AddSubContext::SUB() {
  return getToken(pascalParser::SUB, 0);
}

pascalParser::AddSubContext::AddSubContext(SexprContext *ctx) { copyFrom(ctx); }


std::any pascalParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumContext ------------------------------------------------------------------

tree::TerminalNode* pascalParser::NumContext::NUM() {
  return getToken(pascalParser::NUM, 0);
}

pascalParser::NumContext::NumContext(SexprContext *ctx) { copyFrom(ctx); }


std::any pascalParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VariablContext ------------------------------------------------------------------

pascalParser::VariableContext* pascalParser::VariablContext::variable() {
  return getRuleContext<pascalParser::VariableContext>(0);
}

pascalParser::VariablContext::VariablContext(SexprContext *ctx) { copyFrom(ctx); }


std::any pascalParser::VariablContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitVariabl(this);
  else
    return visitor->visitChildren(this);
}

pascalParser::SexprContext* pascalParser::sexpr() {
   return sexpr(0);
}

pascalParser::SexprContext* pascalParser::sexpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  pascalParser::SexprContext *_localctx = _tracker.createInstance<SexprContext>(_ctx, parentState);
  pascalParser::SexprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, pascalParser::RuleSexpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case pascalParser::T__10: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(148);
        match(pascalParser::T__10);
        setState(149);
        sexpr(0);
        setState(150);
        match(pascalParser::T__11);
        break;
      }

      case pascalParser::ID: {
        _localctx = _tracker.createInstance<VariablContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(152);
        variable();
        break;
      }

      case pascalParser::NUM: {
        _localctx = _tracker.createInstance<NumContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(153);
        match(pascalParser::NUM);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(164);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(162);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<SexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSexpr);
          setState(156);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(157);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 117440512) != 0))) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(158);
          sexpr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<SexprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSexpr);
          setState(159);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(160);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == pascalParser::ADD

          || _la == pascalParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(161);
          sexpr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(166);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Compared_expressionContext ------------------------------------------------------------------

pascalParser::Compared_expressionContext::Compared_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t pascalParser::Compared_expressionContext::getRuleIndex() const {
  return pascalParser::RuleCompared_expression;
}

void pascalParser::Compared_expressionContext::copyFrom(Compared_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionToBoolContext ------------------------------------------------------------------

pascalParser::ExprContext* pascalParser::ExpressionToBoolContext::expr() {
  return getRuleContext<pascalParser::ExprContext>(0);
}

pascalParser::ExpressionToBoolContext::ExpressionToBoolContext(Compared_expressionContext *ctx) { copyFrom(ctx); }


std::any pascalParser::ExpressionToBoolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitExpressionToBool(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompareExpressionsContext ------------------------------------------------------------------

std::vector<pascalParser::ExprContext *> pascalParser::CompareExpressionsContext::expr() {
  return getRuleContexts<pascalParser::ExprContext>();
}

pascalParser::ExprContext* pascalParser::CompareExpressionsContext::expr(size_t i) {
  return getRuleContext<pascalParser::ExprContext>(i);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::E() {
  return getToken(pascalParser::E, 0);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::NE() {
  return getToken(pascalParser::NE, 0);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::L() {
  return getToken(pascalParser::L, 0);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::LE() {
  return getToken(pascalParser::LE, 0);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::G() {
  return getToken(pascalParser::G, 0);
}

tree::TerminalNode* pascalParser::CompareExpressionsContext::GE() {
  return getToken(pascalParser::GE, 0);
}

pascalParser::CompareExpressionsContext::CompareExpressionsContext(Compared_expressionContext *ctx) { copyFrom(ctx); }


std::any pascalParser::CompareExpressionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<pascalVisitor*>(visitor))
    return parserVisitor->visitCompareExpressions(this);
  else
    return visitor->visitChildren(this);
}
pascalParser::Compared_expressionContext* pascalParser::compared_expression() {
  Compared_expressionContext *_localctx = _tracker.createInstance<Compared_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, pascalParser::RuleCompared_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<pascalParser::ExpressionToBoolContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(167);
      expr();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<pascalParser::CompareExpressionsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(168);
      expr();
      setState(169);
      antlrcpp::downCast<CompareExpressionsContext *>(_localctx)->comp = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 16515072) != 0))) {
        antlrcpp::downCast<CompareExpressionsContext *>(_localctx)->comp = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(170);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool pascalParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return statement_listSempred(antlrcpp::downCast<Statement_listContext *>(context), predicateIndex);
    case 18: return sexprSempred(antlrcpp::downCast<SexprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool pascalParser::statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool pascalParser::sexprSempred(SexprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void pascalParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascalParserInitialize();
#else
  ::antlr4::internal::call_once(pascalParserOnceFlag, pascalParserInitialize);
#endif
}
