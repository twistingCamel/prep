
// Generated from prep.g4 by ANTLR 4.11.1


#include "prepListener.h"
#include "prepVisitor.h"

#include "prepParser.h"


using namespace antlrcpp;
using namespace ant;

using namespace antlr4;

namespace {

struct PrepParserStaticData final {
  PrepParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PrepParserStaticData(const PrepParserStaticData&) = delete;
  PrepParserStaticData(PrepParserStaticData&&) = delete;
  PrepParserStaticData& operator=(const PrepParserStaticData&) = delete;
  PrepParserStaticData& operator=(PrepParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag prepParserOnceFlag;
PrepParserStaticData *prepParserStaticData = nullptr;

void prepParserInitialize() {
  assert(prepParserStaticData == nullptr);
  auto staticData = std::make_unique<PrepParserStaticData>(
    std::vector<std::string>{
      "blockItem", "block", "blockItemNoRecurse", "blockNoRecurse", "parameterPackWithEllipses", 
      "parameterPack", "parameterSingle", "string", "bodyStringImplicit", 
      "recurse", "separator", "header", "footer", "body", "funcKeyword", 
      "funcKeywordNoRecurse", "funcDef", "declDef", "prog"
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
  	4,1,19,156,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,3,0,41,8,0,1,1,5,1,
  	44,8,1,10,1,12,1,47,9,1,1,2,1,2,3,2,51,8,2,1,3,5,3,54,8,3,10,3,12,3,57,
  	9,3,1,4,1,4,1,4,1,4,5,4,63,8,4,10,4,12,4,66,9,4,1,4,1,4,3,4,70,8,4,1,
  	4,3,4,73,8,4,1,4,1,4,1,5,1,5,1,5,1,5,5,5,81,8,5,10,5,12,5,84,9,5,3,5,
  	86,8,5,1,5,1,5,1,6,1,6,5,6,92,8,6,10,6,12,6,95,9,6,1,6,1,6,1,7,1,7,1,
  	8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,
  	12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,3,14,128,8,
  	14,1,15,1,15,1,15,1,15,3,15,134,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,
  	17,1,17,1,17,1,17,1,17,1,18,1,18,5,18,149,8,18,10,18,12,18,152,9,18,1,
  	18,1,18,1,18,0,0,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,0,1,1,0,3,3,156,0,40,1,0,0,0,2,45,1,0,0,0,4,50,1,0,0,0,6,55,1,0,0,
  	0,8,58,1,0,0,0,10,76,1,0,0,0,12,89,1,0,0,0,14,98,1,0,0,0,16,100,1,0,0,
  	0,18,102,1,0,0,0,20,106,1,0,0,0,22,110,1,0,0,0,24,114,1,0,0,0,26,118,
  	1,0,0,0,28,127,1,0,0,0,30,133,1,0,0,0,32,135,1,0,0,0,34,141,1,0,0,0,36,
  	150,1,0,0,0,38,41,3,28,14,0,39,41,3,16,8,0,40,38,1,0,0,0,40,39,1,0,0,
  	0,41,1,1,0,0,0,42,44,3,0,0,0,43,42,1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,
  	0,45,46,1,0,0,0,46,3,1,0,0,0,47,45,1,0,0,0,48,51,3,30,15,0,49,51,3,16,
  	8,0,50,48,1,0,0,0,50,49,1,0,0,0,51,5,1,0,0,0,52,54,3,4,2,0,53,52,1,0,
  	0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,7,1,0,0,0,57,55,1,0,
  	0,0,58,72,5,1,0,0,59,64,5,7,0,0,60,61,5,2,0,0,61,63,5,7,0,0,62,60,1,0,
  	0,0,63,66,1,0,0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,69,1,0,0,0,66,64,1,0,
  	0,0,67,68,5,2,0,0,68,70,5,6,0,0,69,67,1,0,0,0,69,70,1,0,0,0,70,73,1,0,
  	0,0,71,73,5,6,0,0,72,59,1,0,0,0,72,71,1,0,0,0,72,73,1,0,0,0,73,74,1,0,
  	0,0,74,75,5,3,0,0,75,9,1,0,0,0,76,85,5,1,0,0,77,82,5,7,0,0,78,79,5,2,
  	0,0,79,81,5,7,0,0,80,78,1,0,0,0,81,84,1,0,0,0,82,80,1,0,0,0,82,83,1,0,
  	0,0,83,86,1,0,0,0,84,82,1,0,0,0,85,77,1,0,0,0,85,86,1,0,0,0,86,87,1,0,
  	0,0,87,88,5,3,0,0,88,11,1,0,0,0,89,93,5,1,0,0,90,92,8,0,0,0,91,90,1,0,
  	0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,
  	0,0,96,97,5,3,0,0,97,13,1,0,0,0,98,99,5,18,0,0,99,15,1,0,0,0,100,101,
  	3,14,7,0,101,17,1,0,0,0,102,103,5,13,0,0,103,104,3,8,4,0,104,105,5,4,
  	0,0,105,19,1,0,0,0,106,107,5,14,0,0,107,108,3,14,7,0,108,109,5,4,0,0,
  	109,21,1,0,0,0,110,111,5,15,0,0,111,112,3,14,7,0,112,113,5,4,0,0,113,
  	23,1,0,0,0,114,115,5,16,0,0,115,116,3,14,7,0,116,117,5,4,0,0,117,25,1,
  	0,0,0,118,119,5,17,0,0,119,120,3,14,7,0,120,121,5,4,0,0,121,27,1,0,0,
  	0,122,128,3,18,9,0,123,128,3,20,10,0,124,128,3,22,11,0,125,128,3,24,12,
  	0,126,128,3,26,13,0,127,122,1,0,0,0,127,123,1,0,0,0,127,124,1,0,0,0,127,
  	125,1,0,0,0,127,126,1,0,0,0,128,29,1,0,0,0,129,134,3,20,10,0,130,134,
  	3,22,11,0,131,134,3,24,12,0,132,134,3,26,13,0,133,129,1,0,0,0,133,130,
  	1,0,0,0,133,131,1,0,0,0,133,132,1,0,0,0,134,31,1,0,0,0,135,136,5,12,0,
  	0,136,137,5,7,0,0,137,138,3,8,4,0,138,139,3,2,1,0,139,140,5,4,0,0,140,
  	33,1,0,0,0,141,142,5,12,0,0,142,143,5,7,0,0,143,144,3,6,3,0,144,145,5,
  	4,0,0,145,35,1,0,0,0,146,149,3,32,16,0,147,149,3,34,17,0,148,146,1,0,
  	0,0,148,147,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,
  	153,1,0,0,0,152,150,1,0,0,0,153,154,5,0,0,1,154,37,1,0,0,0,14,40,45,50,
  	55,64,69,72,82,85,93,127,133,148,150
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  prepParserStaticData = staticData.release();
}

}

prepParser::prepParser(TokenStream *input) : prepParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

prepParser::prepParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  prepParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *prepParserStaticData->atn, prepParserStaticData->decisionToDFA, prepParserStaticData->sharedContextCache, options);
}

prepParser::~prepParser() {
  delete _interpreter;
}

const atn::ATN& prepParser::getATN() const {
  return *prepParserStaticData->atn;
}

std::string prepParser::getGrammarFileName() const {
  return "prep.g4";
}

const std::vector<std::string>& prepParser::getRuleNames() const {
  return prepParserStaticData->ruleNames;
}

const dfa::Vocabulary& prepParser::getVocabulary() const {
  return prepParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView prepParser::getSerializedATN() const {
  return prepParserStaticData->serializedATN;
}


//----------------- BlockItemContext ------------------------------------------------------------------

prepParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

prepParser::FuncKeywordContext* prepParser::BlockItemContext::funcKeyword() {
  return getRuleContext<prepParser::FuncKeywordContext>(0);
}

prepParser::BodyStringImplicitContext* prepParser::BlockItemContext::bodyStringImplicit() {
  return getRuleContext<prepParser::BodyStringImplicitContext>(0);
}


size_t prepParser::BlockItemContext::getRuleIndex() const {
  return prepParser::RuleBlockItem;
}

void prepParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void prepParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


std::any prepParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BlockItemContext* prepParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 0, prepParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case prepParser::Recurse:
      case prepParser::Separator:
      case prepParser::Header:
      case prepParser::Footer:
      case prepParser::Body: {
        enterOuterAlt(_localctx, 1);
        setState(38);
        funcKeyword();
        break;
      }

      case prepParser::String: {
        enterOuterAlt(_localctx, 2);
        setState(39);
        bodyStringImplicit();
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

//----------------- BlockContext ------------------------------------------------------------------

prepParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<prepParser::BlockItemContext *> prepParser::BlockContext::blockItem() {
  return getRuleContexts<prepParser::BlockItemContext>();
}

prepParser::BlockItemContext* prepParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<prepParser::BlockItemContext>(i);
}


size_t prepParser::BlockContext::getRuleIndex() const {
  return prepParser::RuleBlock;
}

void prepParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void prepParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any prepParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BlockContext* prepParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 2, prepParser::RuleBlock);
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
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 516096) != 0) {
      setState(42);
      blockItem();
      setState(47);
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

//----------------- BlockItemNoRecurseContext ------------------------------------------------------------------

prepParser::BlockItemNoRecurseContext::BlockItemNoRecurseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

prepParser::FuncKeywordNoRecurseContext* prepParser::BlockItemNoRecurseContext::funcKeywordNoRecurse() {
  return getRuleContext<prepParser::FuncKeywordNoRecurseContext>(0);
}

prepParser::BodyStringImplicitContext* prepParser::BlockItemNoRecurseContext::bodyStringImplicit() {
  return getRuleContext<prepParser::BodyStringImplicitContext>(0);
}


size_t prepParser::BlockItemNoRecurseContext::getRuleIndex() const {
  return prepParser::RuleBlockItemNoRecurse;
}

void prepParser::BlockItemNoRecurseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemNoRecurse(this);
}

void prepParser::BlockItemNoRecurseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemNoRecurse(this);
}


std::any prepParser::BlockItemNoRecurseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBlockItemNoRecurse(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BlockItemNoRecurseContext* prepParser::blockItemNoRecurse() {
  BlockItemNoRecurseContext *_localctx = _tracker.createInstance<BlockItemNoRecurseContext>(_ctx, getState());
  enterRule(_localctx, 4, prepParser::RuleBlockItemNoRecurse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case prepParser::Separator:
      case prepParser::Header:
      case prepParser::Footer:
      case prepParser::Body: {
        enterOuterAlt(_localctx, 1);
        setState(48);
        funcKeywordNoRecurse();
        break;
      }

      case prepParser::String: {
        enterOuterAlt(_localctx, 2);
        setState(49);
        bodyStringImplicit();
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

//----------------- BlockNoRecurseContext ------------------------------------------------------------------

prepParser::BlockNoRecurseContext::BlockNoRecurseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<prepParser::BlockItemNoRecurseContext *> prepParser::BlockNoRecurseContext::blockItemNoRecurse() {
  return getRuleContexts<prepParser::BlockItemNoRecurseContext>();
}

prepParser::BlockItemNoRecurseContext* prepParser::BlockNoRecurseContext::blockItemNoRecurse(size_t i) {
  return getRuleContext<prepParser::BlockItemNoRecurseContext>(i);
}


size_t prepParser::BlockNoRecurseContext::getRuleIndex() const {
  return prepParser::RuleBlockNoRecurse;
}

void prepParser::BlockNoRecurseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockNoRecurse(this);
}

void prepParser::BlockNoRecurseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockNoRecurse(this);
}


std::any prepParser::BlockNoRecurseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBlockNoRecurse(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BlockNoRecurseContext* prepParser::blockNoRecurse() {
  BlockNoRecurseContext *_localctx = _tracker.createInstance<BlockNoRecurseContext>(_ctx, getState());
  enterRule(_localctx, 6, prepParser::RuleBlockNoRecurse);
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 507904) != 0) {
      setState(52);
      blockItemNoRecurse();
      setState(57);
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

//----------------- ParameterPackWithEllipsesContext ------------------------------------------------------------------

prepParser::ParameterPackWithEllipsesContext::ParameterPackWithEllipsesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::ParameterPackWithEllipsesContext::Ellipses() {
  return getToken(prepParser::Ellipses, 0);
}

std::vector<tree::TerminalNode *> prepParser::ParameterPackWithEllipsesContext::Identifier() {
  return getTokens(prepParser::Identifier);
}

tree::TerminalNode* prepParser::ParameterPackWithEllipsesContext::Identifier(size_t i) {
  return getToken(prepParser::Identifier, i);
}


size_t prepParser::ParameterPackWithEllipsesContext::getRuleIndex() const {
  return prepParser::RuleParameterPackWithEllipses;
}

void prepParser::ParameterPackWithEllipsesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterPackWithEllipses(this);
}

void prepParser::ParameterPackWithEllipsesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterPackWithEllipses(this);
}


std::any prepParser::ParameterPackWithEllipsesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitParameterPackWithEllipses(this);
  else
    return visitor->visitChildren(this);
}

prepParser::ParameterPackWithEllipsesContext* prepParser::parameterPackWithEllipses() {
  ParameterPackWithEllipsesContext *_localctx = _tracker.createInstance<ParameterPackWithEllipsesContext>(_ctx, getState());
  enterRule(_localctx, 8, prepParser::RuleParameterPackWithEllipses);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(prepParser::T__0);
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case prepParser::Identifier: {
        setState(59);
        match(prepParser::Identifier);
        setState(64);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(60);
            match(prepParser::T__1);
            setState(61);
            match(prepParser::Identifier); 
          }
          setState(66);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
        }
        setState(69);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == prepParser::T__1) {
          setState(67);
          match(prepParser::T__1);
          setState(68);
          match(prepParser::Ellipses);
        }
        break;
      }

      case prepParser::Ellipses: {
        setState(71);
        match(prepParser::Ellipses);
        break;
      }

      case prepParser::T__2: {
        break;
      }

    default:
      break;
    }
    setState(74);
    match(prepParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterPackContext ------------------------------------------------------------------

prepParser::ParameterPackContext::ParameterPackContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> prepParser::ParameterPackContext::Identifier() {
  return getTokens(prepParser::Identifier);
}

tree::TerminalNode* prepParser::ParameterPackContext::Identifier(size_t i) {
  return getToken(prepParser::Identifier, i);
}


size_t prepParser::ParameterPackContext::getRuleIndex() const {
  return prepParser::RuleParameterPack;
}

void prepParser::ParameterPackContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterPack(this);
}

void prepParser::ParameterPackContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterPack(this);
}


std::any prepParser::ParameterPackContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitParameterPack(this);
  else
    return visitor->visitChildren(this);
}

prepParser::ParameterPackContext* prepParser::parameterPack() {
  ParameterPackContext *_localctx = _tracker.createInstance<ParameterPackContext>(_ctx, getState());
  enterRule(_localctx, 10, prepParser::RuleParameterPack);
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
    setState(76);
    match(prepParser::T__0);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == prepParser::Identifier) {
      setState(77);
      match(prepParser::Identifier);
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == prepParser::T__1) {
        setState(78);
        match(prepParser::T__1);
        setState(79);
        match(prepParser::Identifier);
        setState(84);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(87);
    match(prepParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterSingleContext ------------------------------------------------------------------

prepParser::ParameterSingleContext::ParameterSingleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t prepParser::ParameterSingleContext::getRuleIndex() const {
  return prepParser::RuleParameterSingle;
}

void prepParser::ParameterSingleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterSingle(this);
}

void prepParser::ParameterSingleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterSingle(this);
}


std::any prepParser::ParameterSingleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitParameterSingle(this);
  else
    return visitor->visitChildren(this);
}

prepParser::ParameterSingleContext* prepParser::parameterSingle() {
  ParameterSingleContext *_localctx = _tracker.createInstance<ParameterSingleContext>(_ctx, getState());
  enterRule(_localctx, 12, prepParser::RuleParameterSingle);
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
    setState(89);
    match(prepParser::T__0);
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1048566) != 0) {
      setState(90);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == prepParser::T__2)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
    match(prepParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

prepParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::StringContext::String() {
  return getToken(prepParser::String, 0);
}


size_t prepParser::StringContext::getRuleIndex() const {
  return prepParser::RuleString;
}

void prepParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void prepParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


std::any prepParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

prepParser::StringContext* prepParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 14, prepParser::RuleString);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(prepParser::String);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyStringImplicitContext ------------------------------------------------------------------

prepParser::BodyStringImplicitContext::BodyStringImplicitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

prepParser::StringContext* prepParser::BodyStringImplicitContext::string() {
  return getRuleContext<prepParser::StringContext>(0);
}


size_t prepParser::BodyStringImplicitContext::getRuleIndex() const {
  return prepParser::RuleBodyStringImplicit;
}

void prepParser::BodyStringImplicitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBodyStringImplicit(this);
}

void prepParser::BodyStringImplicitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBodyStringImplicit(this);
}


std::any prepParser::BodyStringImplicitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBodyStringImplicit(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BodyStringImplicitContext* prepParser::bodyStringImplicit() {
  BodyStringImplicitContext *_localctx = _tracker.createInstance<BodyStringImplicitContext>(_ctx, getState());
  enterRule(_localctx, 16, prepParser::RuleBodyStringImplicit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    string();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RecurseContext ------------------------------------------------------------------

prepParser::RecurseContext::RecurseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::RecurseContext::Recurse() {
  return getToken(prepParser::Recurse, 0);
}

prepParser::ParameterPackWithEllipsesContext* prepParser::RecurseContext::parameterPackWithEllipses() {
  return getRuleContext<prepParser::ParameterPackWithEllipsesContext>(0);
}


size_t prepParser::RecurseContext::getRuleIndex() const {
  return prepParser::RuleRecurse;
}

void prepParser::RecurseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRecurse(this);
}

void prepParser::RecurseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRecurse(this);
}


std::any prepParser::RecurseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitRecurse(this);
  else
    return visitor->visitChildren(this);
}

prepParser::RecurseContext* prepParser::recurse() {
  RecurseContext *_localctx = _tracker.createInstance<RecurseContext>(_ctx, getState());
  enterRule(_localctx, 18, prepParser::RuleRecurse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(prepParser::Recurse);
    setState(103);
    parameterPackWithEllipses();
    setState(104);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeparatorContext ------------------------------------------------------------------

prepParser::SeparatorContext::SeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::SeparatorContext::Separator() {
  return getToken(prepParser::Separator, 0);
}

prepParser::StringContext* prepParser::SeparatorContext::string() {
  return getRuleContext<prepParser::StringContext>(0);
}


size_t prepParser::SeparatorContext::getRuleIndex() const {
  return prepParser::RuleSeparator;
}

void prepParser::SeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeparator(this);
}

void prepParser::SeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeparator(this);
}


std::any prepParser::SeparatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitSeparator(this);
  else
    return visitor->visitChildren(this);
}

prepParser::SeparatorContext* prepParser::separator() {
  SeparatorContext *_localctx = _tracker.createInstance<SeparatorContext>(_ctx, getState());
  enterRule(_localctx, 20, prepParser::RuleSeparator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(prepParser::Separator);
    setState(107);
    string();
    setState(108);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

prepParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::HeaderContext::Header() {
  return getToken(prepParser::Header, 0);
}

prepParser::StringContext* prepParser::HeaderContext::string() {
  return getRuleContext<prepParser::StringContext>(0);
}


size_t prepParser::HeaderContext::getRuleIndex() const {
  return prepParser::RuleHeader;
}

void prepParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void prepParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}


std::any prepParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

prepParser::HeaderContext* prepParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 22, prepParser::RuleHeader);

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
    match(prepParser::Header);
    setState(111);
    string();
    setState(112);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FooterContext ------------------------------------------------------------------

prepParser::FooterContext::FooterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::FooterContext::Footer() {
  return getToken(prepParser::Footer, 0);
}

prepParser::StringContext* prepParser::FooterContext::string() {
  return getRuleContext<prepParser::StringContext>(0);
}


size_t prepParser::FooterContext::getRuleIndex() const {
  return prepParser::RuleFooter;
}

void prepParser::FooterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFooter(this);
}

void prepParser::FooterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFooter(this);
}


std::any prepParser::FooterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitFooter(this);
  else
    return visitor->visitChildren(this);
}

prepParser::FooterContext* prepParser::footer() {
  FooterContext *_localctx = _tracker.createInstance<FooterContext>(_ctx, getState());
  enterRule(_localctx, 24, prepParser::RuleFooter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(prepParser::Footer);
    setState(115);
    string();
    setState(116);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

prepParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::BodyContext::Body() {
  return getToken(prepParser::Body, 0);
}

prepParser::StringContext* prepParser::BodyContext::string() {
  return getRuleContext<prepParser::StringContext>(0);
}


size_t prepParser::BodyContext::getRuleIndex() const {
  return prepParser::RuleBody;
}

void prepParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void prepParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any prepParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

prepParser::BodyContext* prepParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 26, prepParser::RuleBody);

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
    match(prepParser::Body);
    setState(119);
    string();
    setState(120);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncKeywordContext ------------------------------------------------------------------

prepParser::FuncKeywordContext::FuncKeywordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

prepParser::RecurseContext* prepParser::FuncKeywordContext::recurse() {
  return getRuleContext<prepParser::RecurseContext>(0);
}

prepParser::SeparatorContext* prepParser::FuncKeywordContext::separator() {
  return getRuleContext<prepParser::SeparatorContext>(0);
}

prepParser::HeaderContext* prepParser::FuncKeywordContext::header() {
  return getRuleContext<prepParser::HeaderContext>(0);
}

prepParser::FooterContext* prepParser::FuncKeywordContext::footer() {
  return getRuleContext<prepParser::FooterContext>(0);
}

prepParser::BodyContext* prepParser::FuncKeywordContext::body() {
  return getRuleContext<prepParser::BodyContext>(0);
}


size_t prepParser::FuncKeywordContext::getRuleIndex() const {
  return prepParser::RuleFuncKeyword;
}

void prepParser::FuncKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncKeyword(this);
}

void prepParser::FuncKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncKeyword(this);
}


std::any prepParser::FuncKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitFuncKeyword(this);
  else
    return visitor->visitChildren(this);
}

prepParser::FuncKeywordContext* prepParser::funcKeyword() {
  FuncKeywordContext *_localctx = _tracker.createInstance<FuncKeywordContext>(_ctx, getState());
  enterRule(_localctx, 28, prepParser::RuleFuncKeyword);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case prepParser::Recurse: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        recurse();
        break;
      }

      case prepParser::Separator: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        separator();
        break;
      }

      case prepParser::Header: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        header();
        break;
      }

      case prepParser::Footer: {
        enterOuterAlt(_localctx, 4);
        setState(125);
        footer();
        break;
      }

      case prepParser::Body: {
        enterOuterAlt(_localctx, 5);
        setState(126);
        body();
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

//----------------- FuncKeywordNoRecurseContext ------------------------------------------------------------------

prepParser::FuncKeywordNoRecurseContext::FuncKeywordNoRecurseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

prepParser::SeparatorContext* prepParser::FuncKeywordNoRecurseContext::separator() {
  return getRuleContext<prepParser::SeparatorContext>(0);
}

prepParser::HeaderContext* prepParser::FuncKeywordNoRecurseContext::header() {
  return getRuleContext<prepParser::HeaderContext>(0);
}

prepParser::FooterContext* prepParser::FuncKeywordNoRecurseContext::footer() {
  return getRuleContext<prepParser::FooterContext>(0);
}

prepParser::BodyContext* prepParser::FuncKeywordNoRecurseContext::body() {
  return getRuleContext<prepParser::BodyContext>(0);
}


size_t prepParser::FuncKeywordNoRecurseContext::getRuleIndex() const {
  return prepParser::RuleFuncKeywordNoRecurse;
}

void prepParser::FuncKeywordNoRecurseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncKeywordNoRecurse(this);
}

void prepParser::FuncKeywordNoRecurseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncKeywordNoRecurse(this);
}


std::any prepParser::FuncKeywordNoRecurseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitFuncKeywordNoRecurse(this);
  else
    return visitor->visitChildren(this);
}

prepParser::FuncKeywordNoRecurseContext* prepParser::funcKeywordNoRecurse() {
  FuncKeywordNoRecurseContext *_localctx = _tracker.createInstance<FuncKeywordNoRecurseContext>(_ctx, getState());
  enterRule(_localctx, 30, prepParser::RuleFuncKeywordNoRecurse);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case prepParser::Separator: {
        enterOuterAlt(_localctx, 1);
        setState(129);
        separator();
        break;
      }

      case prepParser::Header: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        header();
        break;
      }

      case prepParser::Footer: {
        enterOuterAlt(_localctx, 3);
        setState(131);
        footer();
        break;
      }

      case prepParser::Body: {
        enterOuterAlt(_localctx, 4);
        setState(132);
        body();
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

//----------------- FuncDefContext ------------------------------------------------------------------

prepParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::FuncDefContext::Define() {
  return getToken(prepParser::Define, 0);
}

tree::TerminalNode* prepParser::FuncDefContext::Identifier() {
  return getToken(prepParser::Identifier, 0);
}

prepParser::ParameterPackWithEllipsesContext* prepParser::FuncDefContext::parameterPackWithEllipses() {
  return getRuleContext<prepParser::ParameterPackWithEllipsesContext>(0);
}

prepParser::BlockContext* prepParser::FuncDefContext::block() {
  return getRuleContext<prepParser::BlockContext>(0);
}


size_t prepParser::FuncDefContext::getRuleIndex() const {
  return prepParser::RuleFuncDef;
}

void prepParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void prepParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}


std::any prepParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

prepParser::FuncDefContext* prepParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 32, prepParser::RuleFuncDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(prepParser::Define);
    setState(136);
    match(prepParser::Identifier);
    setState(137);
    parameterPackWithEllipses();
    setState(138);
    block();
    setState(139);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclDefContext ------------------------------------------------------------------

prepParser::DeclDefContext::DeclDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::DeclDefContext::Define() {
  return getToken(prepParser::Define, 0);
}

tree::TerminalNode* prepParser::DeclDefContext::Identifier() {
  return getToken(prepParser::Identifier, 0);
}

prepParser::BlockNoRecurseContext* prepParser::DeclDefContext::blockNoRecurse() {
  return getRuleContext<prepParser::BlockNoRecurseContext>(0);
}


size_t prepParser::DeclDefContext::getRuleIndex() const {
  return prepParser::RuleDeclDef;
}

void prepParser::DeclDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclDef(this);
}

void prepParser::DeclDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclDef(this);
}


std::any prepParser::DeclDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitDeclDef(this);
  else
    return visitor->visitChildren(this);
}

prepParser::DeclDefContext* prepParser::declDef() {
  DeclDefContext *_localctx = _tracker.createInstance<DeclDefContext>(_ctx, getState());
  enterRule(_localctx, 34, prepParser::RuleDeclDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(prepParser::Define);
    setState(142);
    match(prepParser::Identifier);
    setState(143);
    blockNoRecurse();
    setState(144);
    match(prepParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

prepParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* prepParser::ProgContext::EOF() {
  return getToken(prepParser::EOF, 0);
}

std::vector<prepParser::FuncDefContext *> prepParser::ProgContext::funcDef() {
  return getRuleContexts<prepParser::FuncDefContext>();
}

prepParser::FuncDefContext* prepParser::ProgContext::funcDef(size_t i) {
  return getRuleContext<prepParser::FuncDefContext>(i);
}

std::vector<prepParser::DeclDefContext *> prepParser::ProgContext::declDef() {
  return getRuleContexts<prepParser::DeclDefContext>();
}

prepParser::DeclDefContext* prepParser::ProgContext::declDef(size_t i) {
  return getRuleContext<prepParser::DeclDefContext>(i);
}


size_t prepParser::ProgContext::getRuleIndex() const {
  return prepParser::RuleProg;
}

void prepParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void prepParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<prepListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any prepParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<prepVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

prepParser::ProgContext* prepParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 36, prepParser::RuleProg);
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
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == prepParser::Define) {
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(146);
        funcDef();
        break;
      }

      case 2: {
        setState(147);
        declDef();
        break;
      }

      default:
        break;
      }
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(153);
    match(prepParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void prepParser::initialize() {
  ::antlr4::internal::call_once(prepParserOnceFlag, prepParserInitialize);
}
