
// Generated from ./prep.g4 by ANTLR 4.11.1


#include "prepLexer.h"


using namespace antlr4;

using namespace ant;


using namespace antlr4;

namespace {

struct PrepLexerStaticData final {
  PrepLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PrepLexerStaticData(const PrepLexerStaticData&) = delete;
  PrepLexerStaticData(PrepLexerStaticData&&) = delete;
  PrepLexerStaticData& operator=(const PrepLexerStaticData&) = delete;
  PrepLexerStaticData& operator=(PrepLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag preplexerLexerOnceFlag;
PrepLexerStaticData *preplexerLexerStaticData = nullptr;

void preplexerLexerInitialize() {
  assert(preplexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<PrepLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "Number", "Ellipses", "Identifier", 
      "WS", "Eof", "CommentBlock", "CommentLine", "Define", "Recurse", "Separator", 
      "Header", "Footer", "Body", "String", "StringFuncKeyword"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "','", "')'", "'@'", "", "'...'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "Number", "Ellipses", "Identifier", "WS", "Eof", 
      "CommentBlock", "CommentLine", "Define", "Recurse", "Separator", "Header", 
      "Footer", "Body", "String", "StringFuncKeyword"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,19,196,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,5,4,50,8,4,10,4,12,4,53,9,4,1,5,1,5,1,5,1,5,1,6,1,6,5,
  	6,61,8,6,10,6,12,6,64,9,6,1,7,4,7,67,8,7,11,7,12,7,68,1,7,1,7,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,9,1,9,5,9,81,8,9,10,9,12,9,84,9,9,1,9,1,9,1,9,1,9,1,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,5,10,97,8,10,10,10,12,10,100,9,10,1,10,
  	1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	3,11,117,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,
  	129,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,147,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,3,14,158,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	3,15,169,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,178,8,16,1,17,1,
  	17,1,17,1,17,5,17,184,8,17,10,17,12,17,187,9,17,1,17,1,17,1,18,1,18,1,
  	18,1,18,3,18,195,8,18,1,82,0,19,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,1,0,6,1,
  	0,48,57,4,0,48,57,65,90,95,95,97,122,3,0,65,90,95,95,97,122,5,0,9,10,
  	13,13,32,32,69,70,79,79,2,0,10,10,13,13,1,0,34,34,214,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,
  	1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,1,39,1,0,0,0,3,41,1,0,0,0,5,43,1,0,0,0,7,45,1,0,0,0,
  	9,47,1,0,0,0,11,54,1,0,0,0,13,58,1,0,0,0,15,66,1,0,0,0,17,72,1,0,0,0,
  	19,76,1,0,0,0,21,90,1,0,0,0,23,116,1,0,0,0,25,128,1,0,0,0,27,146,1,0,
  	0,0,29,157,1,0,0,0,31,168,1,0,0,0,33,177,1,0,0,0,35,179,1,0,0,0,37,194,
  	1,0,0,0,39,40,5,40,0,0,40,2,1,0,0,0,41,42,5,44,0,0,42,4,1,0,0,0,43,44,
  	5,41,0,0,44,6,1,0,0,0,45,46,5,64,0,0,46,8,1,0,0,0,47,51,7,0,0,0,48,50,
  	7,1,0,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,10,
  	1,0,0,0,53,51,1,0,0,0,54,55,5,46,0,0,55,56,5,46,0,0,56,57,5,46,0,0,57,
  	12,1,0,0,0,58,62,7,2,0,0,59,61,7,1,0,0,60,59,1,0,0,0,61,64,1,0,0,0,62,
  	60,1,0,0,0,62,63,1,0,0,0,63,14,1,0,0,0,64,62,1,0,0,0,65,67,7,3,0,0,66,
  	65,1,0,0,0,67,68,1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,70,1,0,0,0,70,
  	71,6,7,0,0,71,16,1,0,0,0,72,73,5,0,0,1,73,74,1,0,0,0,74,75,6,8,0,0,75,
  	18,1,0,0,0,76,77,5,47,0,0,77,78,5,42,0,0,78,82,1,0,0,0,79,81,9,0,0,0,
  	80,79,1,0,0,0,81,84,1,0,0,0,82,83,1,0,0,0,82,80,1,0,0,0,83,85,1,0,0,0,
  	84,82,1,0,0,0,85,86,5,42,0,0,86,87,5,47,0,0,87,88,1,0,0,0,88,89,6,9,0,
  	0,89,20,1,0,0,0,90,91,5,47,0,0,91,92,5,47,0,0,92,98,1,0,0,0,93,97,8,4,
  	0,0,94,95,5,92,0,0,95,97,5,10,0,0,96,93,1,0,0,0,96,94,1,0,0,0,97,100,
  	1,0,0,0,98,96,1,0,0,0,98,99,1,0,0,0,99,101,1,0,0,0,100,98,1,0,0,0,101,
  	102,6,10,0,0,102,22,1,0,0,0,103,104,5,64,0,0,104,105,5,100,0,0,105,106,
  	5,101,0,0,106,117,5,102,0,0,107,108,5,64,0,0,108,117,5,100,0,0,109,110,
  	5,64,0,0,110,111,5,100,0,0,111,112,5,101,0,0,112,113,5,102,0,0,113,114,
  	5,105,0,0,114,115,5,110,0,0,115,117,5,101,0,0,116,103,1,0,0,0,116,107,
  	1,0,0,0,116,109,1,0,0,0,117,24,1,0,0,0,118,119,5,64,0,0,119,120,5,114,
  	0,0,120,121,5,101,0,0,121,122,5,99,0,0,122,123,5,117,0,0,123,124,5,114,
  	0,0,124,125,5,115,0,0,125,129,5,101,0,0,126,127,5,64,0,0,127,129,5,114,
  	0,0,128,118,1,0,0,0,128,126,1,0,0,0,129,26,1,0,0,0,130,131,5,64,0,0,131,
  	132,5,115,0,0,132,133,5,101,0,0,133,147,5,112,0,0,134,135,5,64,0,0,135,
  	136,5,115,0,0,136,137,5,101,0,0,137,138,5,112,0,0,138,139,5,97,0,0,139,
  	140,5,114,0,0,140,141,5,97,0,0,141,142,5,116,0,0,142,143,5,111,0,0,143,
  	147,5,114,0,0,144,145,5,64,0,0,145,147,5,115,0,0,146,130,1,0,0,0,146,
  	134,1,0,0,0,146,144,1,0,0,0,147,28,1,0,0,0,148,149,5,64,0,0,149,150,5,
  	104,0,0,150,151,5,101,0,0,151,152,5,97,0,0,152,153,5,100,0,0,153,154,
  	5,101,0,0,154,158,5,114,0,0,155,156,5,64,0,0,156,158,5,104,0,0,157,148,
  	1,0,0,0,157,155,1,0,0,0,158,30,1,0,0,0,159,160,5,64,0,0,160,161,5,102,
  	0,0,161,162,5,111,0,0,162,163,5,111,0,0,163,164,5,116,0,0,164,165,5,101,
  	0,0,165,169,5,114,0,0,166,167,5,64,0,0,167,169,5,102,0,0,168,159,1,0,
  	0,0,168,166,1,0,0,0,169,32,1,0,0,0,170,171,5,64,0,0,171,172,5,98,0,0,
  	172,173,5,111,0,0,173,174,5,100,0,0,174,178,5,121,0,0,175,176,5,64,0,
  	0,176,178,5,98,0,0,177,170,1,0,0,0,177,175,1,0,0,0,178,34,1,0,0,0,179,
  	185,5,34,0,0,180,184,8,5,0,0,181,182,5,92,0,0,182,184,5,34,0,0,183,180,
  	1,0,0,0,183,181,1,0,0,0,184,187,1,0,0,0,185,183,1,0,0,0,185,186,1,0,0,
  	0,186,188,1,0,0,0,187,185,1,0,0,0,188,189,5,34,0,0,189,36,1,0,0,0,190,
  	195,3,27,13,0,191,195,3,29,14,0,192,195,3,31,15,0,193,195,3,33,16,0,194,
  	190,1,0,0,0,194,191,1,0,0,0,194,192,1,0,0,0,194,193,1,0,0,0,195,38,1,
  	0,0,0,16,0,51,62,68,82,96,98,116,128,146,157,168,177,183,185,194,1,6,
  	0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  preplexerLexerStaticData = staticData.release();
}

}

prepLexer::prepLexer(CharStream *input) : Lexer(input) {
  prepLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *preplexerLexerStaticData->atn, preplexerLexerStaticData->decisionToDFA, preplexerLexerStaticData->sharedContextCache);
}

prepLexer::~prepLexer() {
  delete _interpreter;
}

std::string prepLexer::getGrammarFileName() const {
  return "prep.g4";
}

const std::vector<std::string>& prepLexer::getRuleNames() const {
  return preplexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& prepLexer::getChannelNames() const {
  return preplexerLexerStaticData->channelNames;
}

const std::vector<std::string>& prepLexer::getModeNames() const {
  return preplexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& prepLexer::getVocabulary() const {
  return preplexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView prepLexer::getSerializedATN() const {
  return preplexerLexerStaticData->serializedATN;
}

const atn::ATN& prepLexer::getATN() const {
  return *preplexerLexerStaticData->atn;
}




void prepLexer::initialize() {
  ::antlr4::internal::call_once(preplexerLexerOnceFlag, preplexerLexerInitialize);
}
