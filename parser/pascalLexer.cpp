
// Generated from pascal.g4 by ANTLR 4.13.0


#include "pascalLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PascalLexerStaticData final {
  PascalLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalLexerStaticData(const PascalLexerStaticData&) = delete;
  PascalLexerStaticData(PascalLexerStaticData&&) = delete;
  PascalLexerStaticData& operator=(const PascalLexerStaticData&) = delete;
  PascalLexerStaticData& operator=(PascalLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PascalLexerStaticData *pascallexerLexerStaticData = nullptr;

void pascallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pascallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "E", "NE", "L", "LE", "G", "GE", "MUL", "DIV", "MOD", "ADD", "SUB", 
      "NUM", "SEP", "NEWLINE", "STRING_CONSTANT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,34,208,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,
  	15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,20,1,
  	20,1,20,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,
  	25,1,25,1,25,1,26,1,26,1,27,1,27,1,28,4,28,173,8,28,11,28,12,28,174,1,
  	29,1,29,1,30,3,30,180,8,30,1,30,1,30,1,30,1,30,1,31,1,31,5,31,188,8,31,
  	10,31,12,31,191,9,31,1,31,1,31,1,32,1,32,5,32,197,8,32,10,32,12,32,200,
  	9,32,1,33,4,33,203,8,33,11,33,12,33,204,1,33,1,33,1,189,0,34,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,65,33,67,34,1,0,4,1,0,48,57,2,0,65,90,97,
  	122,3,0,48,57,65,90,97,122,2,0,9,9,32,32,212,0,1,1,0,0,0,0,3,1,0,0,0,
  	0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,
  	0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,
  	0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,
  	37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,
  	0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,
  	0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,1,
  	69,1,0,0,0,3,75,1,0,0,0,5,79,1,0,0,0,7,81,1,0,0,0,9,83,1,0,0,0,11,85,
  	1,0,0,0,13,93,1,0,0,0,15,99,1,0,0,0,17,103,1,0,0,0,19,106,1,0,0,0,21,
  	112,1,0,0,0,23,114,1,0,0,0,25,116,1,0,0,0,27,124,1,0,0,0,29,129,1,0,0,
  	0,31,132,1,0,0,0,33,137,1,0,0,0,35,142,1,0,0,0,37,144,1,0,0,0,39,147,
  	1,0,0,0,41,149,1,0,0,0,43,152,1,0,0,0,45,154,1,0,0,0,47,157,1,0,0,0,49,
  	159,1,0,0,0,51,163,1,0,0,0,53,167,1,0,0,0,55,169,1,0,0,0,57,172,1,0,0,
  	0,59,176,1,0,0,0,61,179,1,0,0,0,63,185,1,0,0,0,65,194,1,0,0,0,67,202,
  	1,0,0,0,69,70,5,99,0,0,70,71,5,111,0,0,71,72,5,110,0,0,72,73,5,115,0,
  	0,73,74,5,116,0,0,74,2,1,0,0,0,75,76,5,118,0,0,76,77,5,97,0,0,77,78,5,
  	114,0,0,78,4,1,0,0,0,79,80,5,46,0,0,80,6,1,0,0,0,81,82,5,58,0,0,82,8,
  	1,0,0,0,83,84,5,44,0,0,84,10,1,0,0,0,85,86,5,105,0,0,86,87,5,110,0,0,
  	87,88,5,116,0,0,88,89,5,101,0,0,89,90,5,103,0,0,90,91,5,101,0,0,91,92,
  	5,114,0,0,92,12,1,0,0,0,93,94,5,98,0,0,94,95,5,101,0,0,95,96,5,103,0,
  	0,96,97,5,105,0,0,97,98,5,110,0,0,98,14,1,0,0,0,99,100,5,101,0,0,100,
  	101,5,110,0,0,101,102,5,100,0,0,102,16,1,0,0,0,103,104,5,58,0,0,104,105,
  	5,61,0,0,105,18,1,0,0,0,106,107,5,119,0,0,107,108,5,114,0,0,108,109,5,
  	105,0,0,109,110,5,116,0,0,110,111,5,101,0,0,111,20,1,0,0,0,112,113,5,
  	40,0,0,113,22,1,0,0,0,114,115,5,41,0,0,115,24,1,0,0,0,116,117,5,119,0,
  	0,117,118,5,114,0,0,118,119,5,105,0,0,119,120,5,116,0,0,120,121,5,101,
  	0,0,121,122,5,108,0,0,122,123,5,110,0,0,123,26,1,0,0,0,124,125,5,114,
  	0,0,125,126,5,101,0,0,126,127,5,97,0,0,127,128,5,100,0,0,128,28,1,0,0,
  	0,129,130,5,105,0,0,130,131,5,102,0,0,131,30,1,0,0,0,132,133,5,116,0,
  	0,133,134,5,104,0,0,134,135,5,101,0,0,135,136,5,110,0,0,136,32,1,0,0,
  	0,137,138,5,101,0,0,138,139,5,108,0,0,139,140,5,115,0,0,140,141,5,101,
  	0,0,141,34,1,0,0,0,142,143,5,61,0,0,143,36,1,0,0,0,144,145,5,60,0,0,145,
  	146,5,62,0,0,146,38,1,0,0,0,147,148,5,60,0,0,148,40,1,0,0,0,149,150,5,
  	60,0,0,150,151,5,61,0,0,151,42,1,0,0,0,152,153,5,62,0,0,153,44,1,0,0,
  	0,154,155,5,62,0,0,155,156,5,61,0,0,156,46,1,0,0,0,157,158,5,42,0,0,158,
  	48,1,0,0,0,159,160,5,100,0,0,160,161,5,105,0,0,161,162,5,118,0,0,162,
  	50,1,0,0,0,163,164,5,109,0,0,164,165,5,111,0,0,165,166,5,100,0,0,166,
  	52,1,0,0,0,167,168,5,43,0,0,168,54,1,0,0,0,169,170,5,45,0,0,170,56,1,
  	0,0,0,171,173,7,0,0,0,172,171,1,0,0,0,173,174,1,0,0,0,174,172,1,0,0,0,
  	174,175,1,0,0,0,175,58,1,0,0,0,176,177,5,59,0,0,177,60,1,0,0,0,178,180,
  	5,13,0,0,179,178,1,0,0,0,179,180,1,0,0,0,180,181,1,0,0,0,181,182,5,10,
  	0,0,182,183,1,0,0,0,183,184,6,30,0,0,184,62,1,0,0,0,185,189,5,39,0,0,
  	186,188,9,0,0,0,187,186,1,0,0,0,188,191,1,0,0,0,189,190,1,0,0,0,189,187,
  	1,0,0,0,190,192,1,0,0,0,191,189,1,0,0,0,192,193,5,39,0,0,193,64,1,0,0,
  	0,194,198,7,1,0,0,195,197,7,2,0,0,196,195,1,0,0,0,197,200,1,0,0,0,198,
  	196,1,0,0,0,198,199,1,0,0,0,199,66,1,0,0,0,200,198,1,0,0,0,201,203,7,
  	3,0,0,202,201,1,0,0,0,203,204,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,
  	205,206,1,0,0,0,206,207,6,33,0,0,207,68,1,0,0,0,6,0,174,179,189,198,204,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascallexerLexerStaticData = staticData.release();
}

}

pascalLexer::pascalLexer(CharStream *input) : Lexer(input) {
  pascalLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pascallexerLexerStaticData->atn, pascallexerLexerStaticData->decisionToDFA, pascallexerLexerStaticData->sharedContextCache);
}

pascalLexer::~pascalLexer() {
  delete _interpreter;
}

std::string pascalLexer::getGrammarFileName() const {
  return "pascal.g4";
}

const std::vector<std::string>& pascalLexer::getRuleNames() const {
  return pascallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& pascalLexer::getChannelNames() const {
  return pascallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& pascalLexer::getModeNames() const {
  return pascallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& pascalLexer::getVocabulary() const {
  return pascallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView pascalLexer::getSerializedATN() const {
  return pascallexerLexerStaticData->serializedATN;
}

const atn::ATN& pascalLexer::getATN() const {
  return *pascallexerLexerStaticData->atn;
}




void pascalLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pascallexerLexerOnceFlag, pascallexerLexerInitialize);
#endif
}
