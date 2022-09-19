
// Generated from BabyCobol.g4 by ANTLR 4.7.2


#include "include/antlr/BabyCobolListener.h"

#include "include/antlr/BabyCobolParser.h"


using namespace antlrcpp;
using namespace antlr4;

BabyCobolParser::BabyCobolParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BabyCobolParser::~BabyCobolParser() {
  delete _interpreter;
}

std::string BabyCobolParser::getGrammarFileName() const {
  return "BabyCobol.g4";
}

const std::vector<std::string>& BabyCobolParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BabyCobolParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

BabyCobolParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::IdentificationContext* BabyCobolParser::ProgramContext::identification() {
  return getRuleContext<BabyCobolParser::IdentificationContext>(0);
}

BabyCobolParser::ProcedureContext* BabyCobolParser::ProgramContext::procedure() {
  return getRuleContext<BabyCobolParser::ProcedureContext>(0);
}

tree::TerminalNode* BabyCobolParser::ProgramContext::EOF() {
  return getToken(BabyCobolParser::EOF, 0);
}

BabyCobolParser::DataContext* BabyCobolParser::ProgramContext::data() {
  return getRuleContext<BabyCobolParser::DataContext>(0);
}


size_t BabyCobolParser::ProgramContext::getRuleIndex() const {
  return BabyCobolParser::RuleProgram;
}

void BabyCobolParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void BabyCobolParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

BabyCobolParser::ProgramContext* BabyCobolParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BabyCobolParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    identification();
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::DATA) {
      setState(83);
      data();
    }
    setState(86);
    procedure();
    setState(87);
    match(BabyCobolParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentificationContext ------------------------------------------------------------------

BabyCobolParser::IdentificationContext::IdentificationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::IDENTIFICATION() {
  return getToken(BabyCobolParser::IDENTIFICATION, 0);
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentificationContext::DOT() {
  return getTokens(BabyCobolParser::DOT);
}

tree::TerminalNode* BabyCobolParser::IdentificationContext::DOT(size_t i) {
  return getToken(BabyCobolParser::DOT, i);
}

std::vector<BabyCobolParser::NameContext *> BabyCobolParser::IdentificationContext::name() {
  return getRuleContexts<BabyCobolParser::NameContext>();
}

BabyCobolParser::NameContext* BabyCobolParser::IdentificationContext::name(size_t i) {
  return getRuleContext<BabyCobolParser::NameContext>(i);
}

std::vector<BabyCobolParser::ValueContext *> BabyCobolParser::IdentificationContext::value() {
  return getRuleContexts<BabyCobolParser::ValueContext>();
}

BabyCobolParser::ValueContext* BabyCobolParser::IdentificationContext::value(size_t i) {
  return getRuleContext<BabyCobolParser::ValueContext>(i);
}


size_t BabyCobolParser::IdentificationContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentification;
}

void BabyCobolParser::IdentificationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentification(this);
}

void BabyCobolParser::IdentificationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentification(this);
}

BabyCobolParser::IdentificationContext* BabyCobolParser::identification() {
  IdentificationContext *_localctx = _tracker.createInstance<IdentificationContext>(_ctx, getState());
  enterRule(_localctx, 2, BabyCobolParser::RuleIdentification);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(BabyCobolParser::IDENTIFICATION);
    setState(90);
    match(BabyCobolParser::DIVISION);
    setState(91);
    match(BabyCobolParser::DOT);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::IDENTIFIER) {
      setState(92);
      name();
      setState(93);
      match(BabyCobolParser::DOT);
      setState(94);
      value();
      setState(95);
      match(BabyCobolParser::DOT);
      setState(101);
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

//----------------- NameContext ------------------------------------------------------------------

BabyCobolParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::NameContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}


size_t BabyCobolParser::NameContext::getRuleIndex() const {
  return BabyCobolParser::RuleName;
}

void BabyCobolParser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void BabyCobolParser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

BabyCobolParser::NameContext* BabyCobolParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 4, BabyCobolParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

BabyCobolParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::ValueContext::LITERAL() {
  return getToken(BabyCobolParser::LITERAL, 0);
}


size_t BabyCobolParser::ValueContext::getRuleIndex() const {
  return BabyCobolParser::RuleValue;
}

void BabyCobolParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void BabyCobolParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

BabyCobolParser::ValueContext* BabyCobolParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 6, BabyCobolParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(BabyCobolParser::LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataContext ------------------------------------------------------------------

BabyCobolParser::DataContext::DataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DataContext::DATA() {
  return getToken(BabyCobolParser::DATA, 0);
}

tree::TerminalNode* BabyCobolParser::DataContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

std::vector<BabyCobolParser::VariableContext *> BabyCobolParser::DataContext::variable() {
  return getRuleContexts<BabyCobolParser::VariableContext>();
}

BabyCobolParser::VariableContext* BabyCobolParser::DataContext::variable(size_t i) {
  return getRuleContext<BabyCobolParser::VariableContext>(i);
}


size_t BabyCobolParser::DataContext::getRuleIndex() const {
  return BabyCobolParser::RuleData;
}

void BabyCobolParser::DataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData(this);
}

void BabyCobolParser::DataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData(this);
}

BabyCobolParser::DataContext* BabyCobolParser::data() {
  DataContext *_localctx = _tracker.createInstance<DataContext>(_ctx, getState());
  enterRule(_localctx, 8, BabyCobolParser::RuleData);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(BabyCobolParser::DATA);
    setState(107);
    match(BabyCobolParser::DIVISION);
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::INT) {
      setState(108);
      variable();
      setState(113);
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

//----------------- VariableContext ------------------------------------------------------------------

BabyCobolParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LevelContext* BabyCobolParser::VariableContext::level() {
  return getRuleContext<BabyCobolParser::LevelContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::PICTURE() {
  return getToken(BabyCobolParser::PICTURE, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::IS() {
  return getToken(BabyCobolParser::IS, 0);
}

BabyCobolParser::RepresentationContext* BabyCobolParser::VariableContext::representation() {
  return getRuleContext<BabyCobolParser::RepresentationContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::LIKE() {
  return getToken(BabyCobolParser::LIKE, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::VariableContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::OCCURS() {
  return getToken(BabyCobolParser::OCCURS, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}

tree::TerminalNode* BabyCobolParser::VariableContext::TIMES() {
  return getToken(BabyCobolParser::TIMES, 0);
}


size_t BabyCobolParser::VariableContext::getRuleIndex() const {
  return BabyCobolParser::RuleVariable;
}

void BabyCobolParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void BabyCobolParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

BabyCobolParser::VariableContext* BabyCobolParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 10, BabyCobolParser::RuleVariable);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    level();
    setState(115);
    match(BabyCobolParser::IDENTIFIER);
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::PICTURE: {
        setState(116);
        match(BabyCobolParser::PICTURE);
        setState(117);
        match(BabyCobolParser::IS);
        setState(118);
        representation();
        break;
      }

      case BabyCobolParser::LIKE: {
        setState(119);
        match(BabyCobolParser::LIKE);
        setState(120);
        identifiers();
        break;
      }

      case BabyCobolParser::OCCURS:
      case BabyCobolParser::DOT: {
        break;
      }

    default:
      break;
    }
    setState(126);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::OCCURS) {
      setState(123);
      match(BabyCobolParser::OCCURS);
      setState(124);
      match(BabyCobolParser::INT);
      setState(125);
      match(BabyCobolParser::TIMES);
    }
    setState(128);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LevelContext ------------------------------------------------------------------

BabyCobolParser::LevelContext::LevelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LevelContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::LevelContext::getRuleIndex() const {
  return BabyCobolParser::RuleLevel;
}

void BabyCobolParser::LevelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLevel(this);
}

void BabyCobolParser::LevelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLevel(this);
}

BabyCobolParser::LevelContext* BabyCobolParser::level() {
  LevelContext *_localctx = _tracker.createInstance<LevelContext>(_ctx, getState());
  enterRule(_localctx, 12, BabyCobolParser::RuleLevel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(BabyCobolParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepresentationContext ------------------------------------------------------------------

BabyCobolParser::RepresentationContext::RepresentationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::NINE() {
  return getToken(BabyCobolParser::NINE, 0);
}

tree::TerminalNode* BabyCobolParser::RepresentationContext::X() {
  return getToken(BabyCobolParser::X, 0);
}


size_t BabyCobolParser::RepresentationContext::getRuleIndex() const {
  return BabyCobolParser::RuleRepresentation;
}

void BabyCobolParser::RepresentationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepresentation(this);
}

void BabyCobolParser::RepresentationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepresentation(this);
}

BabyCobolParser::RepresentationContext* BabyCobolParser::representation() {
  RepresentationContext *_localctx = _tracker.createInstance<RepresentationContext>(_ctx, getState());
  enterRule(_localctx, 14, BabyCobolParser::RuleRepresentation);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::NINE

    || _la == BabyCobolParser::X)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcedureContext ------------------------------------------------------------------

BabyCobolParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::PROCEDURE() {
  return getToken(BabyCobolParser::PROCEDURE, 0);
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::DIVISION() {
  return getToken(BabyCobolParser::DIVISION, 0);
}

tree::TerminalNode* BabyCobolParser::ProcedureContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::SentenceContext *> BabyCobolParser::ProcedureContext::sentence() {
  return getRuleContexts<BabyCobolParser::SentenceContext>();
}

BabyCobolParser::SentenceContext* BabyCobolParser::ProcedureContext::sentence(size_t i) {
  return getRuleContext<BabyCobolParser::SentenceContext>(i);
}

std::vector<BabyCobolParser::ParagraphContext *> BabyCobolParser::ProcedureContext::paragraph() {
  return getRuleContexts<BabyCobolParser::ParagraphContext>();
}

BabyCobolParser::ParagraphContext* BabyCobolParser::ProcedureContext::paragraph(size_t i) {
  return getRuleContext<BabyCobolParser::ParagraphContext>(i);
}


size_t BabyCobolParser::ProcedureContext::getRuleIndex() const {
  return BabyCobolParser::RuleProcedure;
}

void BabyCobolParser::ProcedureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure(this);
}

void BabyCobolParser::ProcedureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure(this);
}

BabyCobolParser::ProcedureContext* BabyCobolParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 16, BabyCobolParser::RuleProcedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(BabyCobolParser::PROCEDURE);
    setState(135);
    match(BabyCobolParser::DIVISION);
    setState(136);
    match(BabyCobolParser::DOT);
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER) {
      setState(137);
      sentence();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(143);
      paragraph();
      setState(146); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParagraphContext ------------------------------------------------------------------

BabyCobolParser::ParagraphContext::ParagraphContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::LabelContext* BabyCobolParser::ParagraphContext::label() {
  return getRuleContext<BabyCobolParser::LabelContext>(0);
}

tree::TerminalNode* BabyCobolParser::ParagraphContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::SentenceContext *> BabyCobolParser::ParagraphContext::sentence() {
  return getRuleContexts<BabyCobolParser::SentenceContext>();
}

BabyCobolParser::SentenceContext* BabyCobolParser::ParagraphContext::sentence(size_t i) {
  return getRuleContext<BabyCobolParser::SentenceContext>(i);
}


size_t BabyCobolParser::ParagraphContext::getRuleIndex() const {
  return BabyCobolParser::RuleParagraph;
}

void BabyCobolParser::ParagraphContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParagraph(this);
}

void BabyCobolParser::ParagraphContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParagraph(this);
}

BabyCobolParser::ParagraphContext* BabyCobolParser::paragraph() {
  ParagraphContext *_localctx = _tracker.createInstance<ParagraphContext>(_ctx, getState());
  enterRule(_localctx, 18, BabyCobolParser::RuleParagraph);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    label();
    setState(149);
    match(BabyCobolParser::DOT);
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      sentence();
      setState(153); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SentenceContext ------------------------------------------------------------------

BabyCobolParser::SentenceContext::SentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SentenceContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::SentenceContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::SentenceContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}


size_t BabyCobolParser::SentenceContext::getRuleIndex() const {
  return BabyCobolParser::RuleSentence;
}

void BabyCobolParser::SentenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSentence(this);
}

void BabyCobolParser::SentenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSentence(this);
}

BabyCobolParser::SentenceContext* BabyCobolParser::sentence() {
  SentenceContext *_localctx = _tracker.createInstance<SentenceContext>(_ctx, getState());
  enterRule(_localctx, 20, BabyCobolParser::RuleSentence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(155);
      statement();
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
    setState(160);
    match(BabyCobolParser::DOT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BabyCobolParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::DisplayContext* BabyCobolParser::StatementContext::display() {
  return getRuleContext<BabyCobolParser::DisplayContext>(0);
}

BabyCobolParser::StopContext* BabyCobolParser::StatementContext::stop() {
  return getRuleContext<BabyCobolParser::StopContext>(0);
}

BabyCobolParser::MoveContext* BabyCobolParser::StatementContext::move() {
  return getRuleContext<BabyCobolParser::MoveContext>(0);
}

BabyCobolParser::SubtractContext* BabyCobolParser::StatementContext::subtract() {
  return getRuleContext<BabyCobolParser::SubtractContext>(0);
}

BabyCobolParser::MultiplyContext* BabyCobolParser::StatementContext::multiply() {
  return getRuleContext<BabyCobolParser::MultiplyContext>(0);
}

BabyCobolParser::PerformContext* BabyCobolParser::StatementContext::perform() {
  return getRuleContext<BabyCobolParser::PerformContext>(0);
}

BabyCobolParser::IfStatementContext* BabyCobolParser::StatementContext::ifStatement() {
  return getRuleContext<BabyCobolParser::IfStatementContext>(0);
}

BabyCobolParser::AcceptContext* BabyCobolParser::StatementContext::accept() {
  return getRuleContext<BabyCobolParser::AcceptContext>(0);
}

BabyCobolParser::AddContext* BabyCobolParser::StatementContext::add() {
  return getRuleContext<BabyCobolParser::AddContext>(0);
}

BabyCobolParser::DivideContext* BabyCobolParser::StatementContext::divide() {
  return getRuleContext<BabyCobolParser::DivideContext>(0);
}

BabyCobolParser::EvaluateContext* BabyCobolParser::StatementContext::evaluate() {
  return getRuleContext<BabyCobolParser::EvaluateContext>(0);
}

BabyCobolParser::NextSentenceContext* BabyCobolParser::StatementContext::nextSentence() {
  return getRuleContext<BabyCobolParser::NextSentenceContext>(0);
}

BabyCobolParser::LoopContext* BabyCobolParser::StatementContext::loop() {
  return getRuleContext<BabyCobolParser::LoopContext>(0);
}

BabyCobolParser::GotoStatementContext* BabyCobolParser::StatementContext::gotoStatement() {
  return getRuleContext<BabyCobolParser::GotoStatementContext>(0);
}

BabyCobolParser::SignalContext* BabyCobolParser::StatementContext::signal() {
  return getRuleContext<BabyCobolParser::SignalContext>(0);
}

BabyCobolParser::AlterContext* BabyCobolParser::StatementContext::alter() {
  return getRuleContext<BabyCobolParser::AlterContext>(0);
}


size_t BabyCobolParser::StatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleStatement;
}

void BabyCobolParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BabyCobolParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

BabyCobolParser::StatementContext* BabyCobolParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, BabyCobolParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::T__0

    || _la == BabyCobolParser::T__1) {
      setState(162);
      _la = _input->LA(1);
      if (!(_la == BabyCobolParser::T__0

      || _la == BabyCobolParser::T__1)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::DISPLAY: {
        setState(165);
        display();
        break;
      }

      case BabyCobolParser::STOP: {
        setState(166);
        stop();
        break;
      }

      case BabyCobolParser::MOVE: {
        setState(167);
        move();
        break;
      }

      case BabyCobolParser::SUBTRACT: {
        setState(168);
        subtract();
        break;
      }

      case BabyCobolParser::MULTIPLY: {
        setState(169);
        multiply();
        break;
      }

      case BabyCobolParser::PERFORM: {
        setState(170);
        perform();
        break;
      }

      case BabyCobolParser::IF: {
        setState(171);
        ifStatement();
        break;
      }

      case BabyCobolParser::ACCEPT: {
        setState(172);
        accept();
        break;
      }

      case BabyCobolParser::ADD: {
        setState(173);
        add();
        break;
      }

      case BabyCobolParser::DIVIDE: {
        setState(174);
        divide();
        break;
      }

      case BabyCobolParser::EVALUATE: {
        setState(175);
        evaluate();
        break;
      }

      case BabyCobolParser::NEXT: {
        setState(176);
        nextSentence();
        break;
      }

      case BabyCobolParser::LOOP: {
        setState(177);
        loop();
        break;
      }

      case BabyCobolParser::GO: {
        setState(178);
        gotoStatement();
        break;
      }

      case BabyCobolParser::SIGNAL: {
        setState(179);
        signal();
        break;
      }

      case BabyCobolParser::ALTER: {
        setState(180);
        alter();
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

//----------------- LabelContext ------------------------------------------------------------------

BabyCobolParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LabelContext::IDENTIFIER() {
  return getToken(BabyCobolParser::IDENTIFIER, 0);
}


size_t BabyCobolParser::LabelContext::getRuleIndex() const {
  return BabyCobolParser::RuleLabel;
}

void BabyCobolParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void BabyCobolParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

BabyCobolParser::LabelContext* BabyCobolParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 24, BabyCobolParser::RuleLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisplayContext ------------------------------------------------------------------

BabyCobolParser::DisplayContext::DisplayContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DisplayContext::DISPLAY() {
  return getToken(BabyCobolParser::DISPLAY, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::DisplayContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::DisplayContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::WITH() {
  return getToken(BabyCobolParser::WITH, 0);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::NO() {
  return getToken(BabyCobolParser::NO, 0);
}

tree::TerminalNode* BabyCobolParser::DisplayContext::ADVANCING() {
  return getToken(BabyCobolParser::ADVANCING, 0);
}


size_t BabyCobolParser::DisplayContext::getRuleIndex() const {
  return BabyCobolParser::RuleDisplay;
}

void BabyCobolParser::DisplayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisplay(this);
}

void BabyCobolParser::DisplayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisplay(this);
}

BabyCobolParser::DisplayContext* BabyCobolParser::display() {
  DisplayContext *_localctx = _tracker.createInstance<DisplayContext>(_ctx, getState());
  enterRule(_localctx, 26, BabyCobolParser::RuleDisplay);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(BabyCobolParser::DISPLAY);
    setState(187); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(186);
      atomic();
      setState(189); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(194);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::WITH) {
      setState(191);
      match(BabyCobolParser::WITH);
      setState(192);
      match(BabyCobolParser::NO);
      setState(193);
      match(BabyCobolParser::ADVANCING);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StopContext ------------------------------------------------------------------

BabyCobolParser::StopContext::StopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::StopContext::STOP() {
  return getToken(BabyCobolParser::STOP, 0);
}


size_t BabyCobolParser::StopContext::getRuleIndex() const {
  return BabyCobolParser::RuleStop;
}

void BabyCobolParser::StopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStop(this);
}

void BabyCobolParser::StopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStop(this);
}

BabyCobolParser::StopContext* BabyCobolParser::stop() {
  StopContext *_localctx = _tracker.createInstance<StopContext>(_ctx, getState());
  enterRule(_localctx, 28, BabyCobolParser::RuleStop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196);
    match(BabyCobolParser::STOP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveContext ------------------------------------------------------------------

BabyCobolParser::MoveContext::MoveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::MoveContext::MOVE() {
  return getToken(BabyCobolParser::MOVE, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::SPACES() {
  return getToken(BabyCobolParser::SPACES, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::HIGH() {
  return getToken(BabyCobolParser::HIGH, 0);
}

tree::TerminalNode* BabyCobolParser::MoveContext::LOW() {
  return getToken(BabyCobolParser::LOW, 0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::MoveContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::MoveContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::MoveContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::MoveContext::getRuleIndex() const {
  return BabyCobolParser::RuleMove;
}

void BabyCobolParser::MoveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMove(this);
}

void BabyCobolParser::MoveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMove(this);
}

BabyCobolParser::MoveContext* BabyCobolParser::move() {
  MoveContext *_localctx = _tracker.createInstance<MoveContext>(_ctx, getState());
  enterRule(_localctx, 30, BabyCobolParser::RuleMove);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(BabyCobolParser::MOVE);
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::SPACES: {
        setState(199);
        match(BabyCobolParser::SPACES);
        break;
      }

      case BabyCobolParser::HIGH: {
        setState(200);
        match(BabyCobolParser::HIGH);
        break;
      }

      case BabyCobolParser::LOW: {
        setState(201);
        match(BabyCobolParser::LOW);
        break;
      }

      case BabyCobolParser::IDENTIFIER:
      case BabyCobolParser::INT:
      case BabyCobolParser::LITERAL: {
        setState(202);
        atomic();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(205);
    match(BabyCobolParser::TO);
    setState(207); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(206);
      identifiers();
      setState(209); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractContext ------------------------------------------------------------------

BabyCobolParser::SubtractContext::SubtractContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SubtractContext::SUBTRACT() {
  return getToken(BabyCobolParser::SUBTRACT, 0);
}

tree::TerminalNode* BabyCobolParser::SubtractContext::FROM() {
  return getToken(BabyCobolParser::FROM, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::SubtractContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::SubtractContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::SubtractContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::SubtractContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::SubtractContext::getRuleIndex() const {
  return BabyCobolParser::RuleSubtract;
}

void BabyCobolParser::SubtractContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtract(this);
}

void BabyCobolParser::SubtractContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtract(this);
}

BabyCobolParser::SubtractContext* BabyCobolParser::subtract() {
  SubtractContext *_localctx = _tracker.createInstance<SubtractContext>(_ctx, getState());
  enterRule(_localctx, 32, BabyCobolParser::RuleSubtract);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(BabyCobolParser::SUBTRACT);
    setState(213); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(212);
      dynamic_cast<SubtractContext *>(_localctx)->atomicContext = atomic();
      dynamic_cast<SubtractContext *>(_localctx)->as.push_back(dynamic_cast<SubtractContext *>(_localctx)->atomicContext);
      setState(215); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(217);
    match(BabyCobolParser::FROM);
    setState(218);
    dynamic_cast<SubtractContext *>(_localctx)->from = atomic();
    setState(221);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(219);
      match(BabyCobolParser::GIVING);
      setState(220);
      dynamic_cast<SubtractContext *>(_localctx)->giving = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplyContext ------------------------------------------------------------------

BabyCobolParser::MultiplyContext::MultiplyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::MULTIPLY() {
  return getToken(BabyCobolParser::MULTIPLY, 0);
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::BY() {
  return getToken(BabyCobolParser::BY, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::MultiplyContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::MultiplyContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::MultiplyContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::MultiplyContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::MultiplyContext::getRuleIndex() const {
  return BabyCobolParser::RuleMultiply;
}

void BabyCobolParser::MultiplyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiply(this);
}

void BabyCobolParser::MultiplyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiply(this);
}

BabyCobolParser::MultiplyContext* BabyCobolParser::multiply() {
  MultiplyContext *_localctx = _tracker.createInstance<MultiplyContext>(_ctx, getState());
  enterRule(_localctx, 34, BabyCobolParser::RuleMultiply);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    match(BabyCobolParser::MULTIPLY);
    setState(224);
    dynamic_cast<MultiplyContext *>(_localctx)->a = atomic();
    setState(225);
    match(BabyCobolParser::BY);
    setState(227); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(226);
      dynamic_cast<MultiplyContext *>(_localctx)->atomicContext = atomic();
      dynamic_cast<MultiplyContext *>(_localctx)->as.push_back(dynamic_cast<MultiplyContext *>(_localctx)->atomicContext);
      setState(229); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(233);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(231);
      match(BabyCobolParser::GIVING);
      setState(232);
      dynamic_cast<MultiplyContext *>(_localctx)->giving = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PerformContext ------------------------------------------------------------------

BabyCobolParser::PerformContext::PerformContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::PerformContext::PERFORM() {
  return getToken(BabyCobolParser::PERFORM, 0);
}

std::vector<BabyCobolParser::LabelContext *> BabyCobolParser::PerformContext::label() {
  return getRuleContexts<BabyCobolParser::LabelContext>();
}

BabyCobolParser::LabelContext* BabyCobolParser::PerformContext::label(size_t i) {
  return getRuleContext<BabyCobolParser::LabelContext>(i);
}

tree::TerminalNode* BabyCobolParser::PerformContext::THROUGH() {
  return getToken(BabyCobolParser::THROUGH, 0);
}

tree::TerminalNode* BabyCobolParser::PerformContext::TIMES() {
  return getToken(BabyCobolParser::TIMES, 0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::PerformContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}


size_t BabyCobolParser::PerformContext::getRuleIndex() const {
  return BabyCobolParser::RulePerform;
}

void BabyCobolParser::PerformContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPerform(this);
}

void BabyCobolParser::PerformContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPerform(this);
}

BabyCobolParser::PerformContext* BabyCobolParser::perform() {
  PerformContext *_localctx = _tracker.createInstance<PerformContext>(_ctx, getState());
  enterRule(_localctx, 36, BabyCobolParser::RulePerform);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(BabyCobolParser::PERFORM);
    setState(236);
    dynamic_cast<PerformContext *>(_localctx)->procedureName = label();
    setState(239);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::THROUGH) {
      setState(237);
      match(BabyCobolParser::THROUGH);
      setState(238);
      dynamic_cast<PerformContext *>(_localctx)->through = label();
    }
    setState(244);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0)) {
      setState(241);
      dynamic_cast<PerformContext *>(_localctx)->times = atomic();
      setState(242);
      match(BabyCobolParser::TIMES);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BabyCobolParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::IF() {
  return getToken(BabyCobolParser::IF, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::IfStatementContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::THEN() {
  return getToken(BabyCobolParser::THEN, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::DOT() {
  return getToken(BabyCobolParser::DOT, 0);
}

tree::TerminalNode* BabyCobolParser::IfStatementContext::ELSE() {
  return getToken(BabyCobolParser::ELSE, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::IfStatementContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}


size_t BabyCobolParser::IfStatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleIfStatement;
}

void BabyCobolParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BabyCobolParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

BabyCobolParser::IfStatementContext* BabyCobolParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, BabyCobolParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    match(BabyCobolParser::IF);
    setState(247);
    booleanExpression(0);
    setState(248);
    match(BabyCobolParser::THEN);
    setState(250); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(249);
      dynamic_cast<IfStatementContext *>(_localctx)->statementContext = statement();
      dynamic_cast<IfStatementContext *>(_localctx)->t.push_back(dynamic_cast<IfStatementContext *>(_localctx)->statementContext);
      setState(252); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER);
    setState(260);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::ELSE) {
      setState(254);
      match(BabyCobolParser::ELSE);
      setState(256); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(255);
        dynamic_cast<IfStatementContext *>(_localctx)->statementContext = statement();
        dynamic_cast<IfStatementContext *>(_localctx)->f.push_back(dynamic_cast<IfStatementContext *>(_localctx)->statementContext);
        setState(258); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
    }
    setState(262);
    _la = _input->LA(1);
    if (!(_la == BabyCobolParser::END

    || _la == BabyCobolParser::DOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AcceptContext ------------------------------------------------------------------

BabyCobolParser::AcceptContext::AcceptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AcceptContext::ACCEPT() {
  return getToken(BabyCobolParser::ACCEPT, 0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::AcceptContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::AcceptContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::AcceptContext::getRuleIndex() const {
  return BabyCobolParser::RuleAccept;
}

void BabyCobolParser::AcceptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccept(this);
}

void BabyCobolParser::AcceptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccept(this);
}

BabyCobolParser::AcceptContext* BabyCobolParser::accept() {
  AcceptContext *_localctx = _tracker.createInstance<AcceptContext>(_ctx, getState());
  enterRule(_localctx, 40, BabyCobolParser::RuleAccept);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(264);
    match(BabyCobolParser::ACCEPT);
    setState(266); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(265);
      dynamic_cast<AcceptContext *>(_localctx)->identifiersContext = identifiers();
      dynamic_cast<AcceptContext *>(_localctx)->id.push_back(dynamic_cast<AcceptContext *>(_localctx)->identifiersContext);
      setState(268); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == BabyCobolParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

BabyCobolParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AddContext::ADD() {
  return getToken(BabyCobolParser::ADD, 0);
}

tree::TerminalNode* BabyCobolParser::AddContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::AddContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::AddContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::AddContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::AddContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}


size_t BabyCobolParser::AddContext::getRuleIndex() const {
  return BabyCobolParser::RuleAdd;
}

void BabyCobolParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}

void BabyCobolParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

BabyCobolParser::AddContext* BabyCobolParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 42, BabyCobolParser::RuleAdd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(BabyCobolParser::ADD);
    setState(272); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(271);
      atomic();
      setState(274); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(276);
    match(BabyCobolParser::TO);
    setState(277);
    dynamic_cast<AddContext *>(_localctx)->to = atomic();
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(278);
      match(BabyCobolParser::GIVING);
      setState(279);
      dynamic_cast<AddContext *>(_localctx)->id = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivideContext ------------------------------------------------------------------

BabyCobolParser::DivideContext::DivideContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::DivideContext::DIVIDE() {
  return getToken(BabyCobolParser::DIVIDE, 0);
}

tree::TerminalNode* BabyCobolParser::DivideContext::INTO() {
  return getToken(BabyCobolParser::INTO, 0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::DivideContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::DivideContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

tree::TerminalNode* BabyCobolParser::DivideContext::GIVING() {
  return getToken(BabyCobolParser::GIVING, 0);
}

tree::TerminalNode* BabyCobolParser::DivideContext::REMAINDER() {
  return getToken(BabyCobolParser::REMAINDER, 0);
}

std::vector<BabyCobolParser::IdentifiersContext *> BabyCobolParser::DivideContext::identifiers() {
  return getRuleContexts<BabyCobolParser::IdentifiersContext>();
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::DivideContext::identifiers(size_t i) {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(i);
}


size_t BabyCobolParser::DivideContext::getRuleIndex() const {
  return BabyCobolParser::RuleDivide;
}

void BabyCobolParser::DivideContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivide(this);
}

void BabyCobolParser::DivideContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivide(this);
}

BabyCobolParser::DivideContext* BabyCobolParser::divide() {
  DivideContext *_localctx = _tracker.createInstance<DivideContext>(_ctx, getState());
  enterRule(_localctx, 44, BabyCobolParser::RuleDivide);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(BabyCobolParser::DIVIDE);
    setState(283);
    dynamic_cast<DivideContext *>(_localctx)->a = atomic();
    setState(284);
    match(BabyCobolParser::INTO);
    setState(286); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(285);
      dynamic_cast<DivideContext *>(_localctx)->atomicContext = atomic();
      dynamic_cast<DivideContext *>(_localctx)->as.push_back(dynamic_cast<DivideContext *>(_localctx)->atomicContext);
      setState(288); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (BabyCobolParser::IDENTIFIER - 74))
      | (1ULL << (BabyCobolParser::INT - 74))
      | (1ULL << (BabyCobolParser::LITERAL - 74)))) != 0));
    setState(292);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::GIVING) {
      setState(290);
      match(BabyCobolParser::GIVING);
      setState(291);
      dynamic_cast<DivideContext *>(_localctx)->id = identifiers();
    }
    setState(296);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BabyCobolParser::REMAINDER) {
      setState(294);
      match(BabyCobolParser::REMAINDER);
      setState(295);
      dynamic_cast<DivideContext *>(_localctx)->rem = identifiers();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EvaluateContext ------------------------------------------------------------------

BabyCobolParser::EvaluateContext::EvaluateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::EvaluateContext::EVALUATE() {
  return getToken(BabyCobolParser::EVALUATE, 0);
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::EvaluateContext::anyExpression() {
  return getRuleContext<BabyCobolParser::AnyExpressionContext>(0);
}

tree::TerminalNode* BabyCobolParser::EvaluateContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

std::vector<BabyCobolParser::WhenBlockContext *> BabyCobolParser::EvaluateContext::whenBlock() {
  return getRuleContexts<BabyCobolParser::WhenBlockContext>();
}

BabyCobolParser::WhenBlockContext* BabyCobolParser::EvaluateContext::whenBlock(size_t i) {
  return getRuleContext<BabyCobolParser::WhenBlockContext>(i);
}


size_t BabyCobolParser::EvaluateContext::getRuleIndex() const {
  return BabyCobolParser::RuleEvaluate;
}

void BabyCobolParser::EvaluateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvaluate(this);
}

void BabyCobolParser::EvaluateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvaluate(this);
}

BabyCobolParser::EvaluateContext* BabyCobolParser::evaluate() {
  EvaluateContext *_localctx = _tracker.createInstance<EvaluateContext>(_ctx, getState());
  enterRule(_localctx, 46, BabyCobolParser::RuleEvaluate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(BabyCobolParser::EVALUATE);
    setState(299);
    anyExpression();
    setState(303);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BabyCobolParser::WHEN) {
      setState(300);
      whenBlock();
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(306);
    match(BabyCobolParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NextSentenceContext ------------------------------------------------------------------

BabyCobolParser::NextSentenceContext::NextSentenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::NextSentenceContext::NEXT() {
  return getToken(BabyCobolParser::NEXT, 0);
}

tree::TerminalNode* BabyCobolParser::NextSentenceContext::SENTENCE() {
  return getToken(BabyCobolParser::SENTENCE, 0);
}


size_t BabyCobolParser::NextSentenceContext::getRuleIndex() const {
  return BabyCobolParser::RuleNextSentence;
}

void BabyCobolParser::NextSentenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNextSentence(this);
}

void BabyCobolParser::NextSentenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNextSentence(this);
}

BabyCobolParser::NextSentenceContext* BabyCobolParser::nextSentence() {
  NextSentenceContext *_localctx = _tracker.createInstance<NextSentenceContext>(_ctx, getState());
  enterRule(_localctx, 48, BabyCobolParser::RuleNextSentence);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(BabyCobolParser::NEXT);
    setState(309);
    match(BabyCobolParser::SENTENCE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

BabyCobolParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::LoopContext::LOOP() {
  return getToken(BabyCobolParser::LOOP, 0);
}

tree::TerminalNode* BabyCobolParser::LoopContext::END() {
  return getToken(BabyCobolParser::END, 0);
}

std::vector<BabyCobolParser::LoopExpressionContext *> BabyCobolParser::LoopContext::loopExpression() {
  return getRuleContexts<BabyCobolParser::LoopExpressionContext>();
}

BabyCobolParser::LoopExpressionContext* BabyCobolParser::LoopContext::loopExpression(size_t i) {
  return getRuleContext<BabyCobolParser::LoopExpressionContext>(i);
}


size_t BabyCobolParser::LoopContext::getRuleIndex() const {
  return BabyCobolParser::RuleLoop;
}

void BabyCobolParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void BabyCobolParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

BabyCobolParser::LoopContext* BabyCobolParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 50, BabyCobolParser::RuleLoop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(BabyCobolParser::LOOP);
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::DISPLAY)
      | (1ULL << BabyCobolParser::STOP)
      | (1ULL << BabyCobolParser::MOVE)
      | (1ULL << BabyCobolParser::SUBTRACT)
      | (1ULL << BabyCobolParser::MULTIPLY)
      | (1ULL << BabyCobolParser::PERFORM)
      | (1ULL << BabyCobolParser::IF)
      | (1ULL << BabyCobolParser::ACCEPT)
      | (1ULL << BabyCobolParser::ADD)
      | (1ULL << BabyCobolParser::DIVIDE)
      | (1ULL << BabyCobolParser::EVALUATE)
      | (1ULL << BabyCobolParser::NEXT)
      | (1ULL << BabyCobolParser::LOOP)
      | (1ULL << BabyCobolParser::VARYING)
      | (1ULL << BabyCobolParser::WHILE)
      | (1ULL << BabyCobolParser::UNTIL)
      | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

    || _la == BabyCobolParser::ALTER) {
      setState(312);
      loopExpression();
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(318);
    match(BabyCobolParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GotoStatementContext ------------------------------------------------------------------

BabyCobolParser::GotoStatementContext::GotoStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::GotoStatementContext::GO() {
  return getToken(BabyCobolParser::GO, 0);
}

tree::TerminalNode* BabyCobolParser::GotoStatementContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

BabyCobolParser::NameContext* BabyCobolParser::GotoStatementContext::name() {
  return getRuleContext<BabyCobolParser::NameContext>(0);
}


size_t BabyCobolParser::GotoStatementContext::getRuleIndex() const {
  return BabyCobolParser::RuleGotoStatement;
}

void BabyCobolParser::GotoStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGotoStatement(this);
}

void BabyCobolParser::GotoStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGotoStatement(this);
}

BabyCobolParser::GotoStatementContext* BabyCobolParser::gotoStatement() {
  GotoStatementContext *_localctx = _tracker.createInstance<GotoStatementContext>(_ctx, getState());
  enterRule(_localctx, 52, BabyCobolParser::RuleGotoStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(BabyCobolParser::GO);
    setState(321);
    match(BabyCobolParser::TO);
    setState(322);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignalContext ------------------------------------------------------------------

BabyCobolParser::SignalContext::SignalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::SignalContext::SIGNAL() {
  return getToken(BabyCobolParser::SIGNAL, 0);
}

tree::TerminalNode* BabyCobolParser::SignalContext::ONERROR() {
  return getToken(BabyCobolParser::ONERROR, 0);
}

BabyCobolParser::LabelContext* BabyCobolParser::SignalContext::label() {
  return getRuleContext<BabyCobolParser::LabelContext>(0);
}

tree::TerminalNode* BabyCobolParser::SignalContext::OFF() {
  return getToken(BabyCobolParser::OFF, 0);
}


size_t BabyCobolParser::SignalContext::getRuleIndex() const {
  return BabyCobolParser::RuleSignal;
}

void BabyCobolParser::SignalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSignal(this);
}

void BabyCobolParser::SignalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSignal(this);
}

BabyCobolParser::SignalContext* BabyCobolParser::signal() {
  SignalContext *_localctx = _tracker.createInstance<SignalContext>(_ctx, getState());
  enterRule(_localctx, 54, BabyCobolParser::RuleSignal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(BabyCobolParser::SIGNAL);
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::IDENTIFIER: {
        setState(325);
        label();
        break;
      }

      case BabyCobolParser::OFF: {
        setState(326);
        match(BabyCobolParser::OFF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(329);
    match(BabyCobolParser::ONERROR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AlterContext ------------------------------------------------------------------

BabyCobolParser::AlterContext::AlterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::AlterContext::ALTER() {
  return getToken(BabyCobolParser::ALTER, 0);
}

std::vector<tree::TerminalNode *> BabyCobolParser::AlterContext::TO() {
  return getTokens(BabyCobolParser::TO);
}

tree::TerminalNode* BabyCobolParser::AlterContext::TO(size_t i) {
  return getToken(BabyCobolParser::TO, i);
}

tree::TerminalNode* BabyCobolParser::AlterContext::PROCEED() {
  return getToken(BabyCobolParser::PROCEED, 0);
}

std::vector<BabyCobolParser::LabelContext *> BabyCobolParser::AlterContext::label() {
  return getRuleContexts<BabyCobolParser::LabelContext>();
}

BabyCobolParser::LabelContext* BabyCobolParser::AlterContext::label(size_t i) {
  return getRuleContext<BabyCobolParser::LabelContext>(i);
}


size_t BabyCobolParser::AlterContext::getRuleIndex() const {
  return BabyCobolParser::RuleAlter;
}

void BabyCobolParser::AlterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAlter(this);
}

void BabyCobolParser::AlterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAlter(this);
}

BabyCobolParser::AlterContext* BabyCobolParser::alter() {
  AlterContext *_localctx = _tracker.createInstance<AlterContext>(_ctx, getState());
  enterRule(_localctx, 56, BabyCobolParser::RuleAlter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(331);
    match(BabyCobolParser::ALTER);
    setState(332);
    dynamic_cast<AlterContext *>(_localctx)->l1 = label();
    setState(333);
    match(BabyCobolParser::TO);
    setState(334);
    match(BabyCobolParser::PROCEED);
    setState(335);
    match(BabyCobolParser::TO);
    setState(336);
    dynamic_cast<AlterContext *>(_localctx)->l2 = label();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AnyExpressionContext ------------------------------------------------------------------

BabyCobolParser::AnyExpressionContext::AnyExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::AnyExpressionContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::AnyExpressionContext::stringExpression() {
  return getRuleContext<BabyCobolParser::StringExpressionContext>(0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::AnyExpressionContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}


size_t BabyCobolParser::AnyExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleAnyExpression;
}

void BabyCobolParser::AnyExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyExpression(this);
}

void BabyCobolParser::AnyExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyExpression(this);
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::anyExpression() {
  AnyExpressionContext *_localctx = _tracker.createInstance<AnyExpressionContext>(_ctx, getState());
  enterRule(_localctx, 58, BabyCobolParser::RuleAnyExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(338);
      arithmeticExpression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(339);
      stringExpression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(340);
      booleanExpression(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticExpressionContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticExpressionContext::ArithmeticExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ArithmeticExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleArithmeticExpression;
}

void BabyCobolParser::ArithmeticExpressionContext::copyFrom(ArithmeticExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicArithmeticExpContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext* BabyCobolParser::AtomicArithmeticExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::AtomicArithmeticExpContext::AtomicArithmeticExpContext(ArithmeticExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::AtomicArithmeticExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicArithmeticExp(this);
}
void BabyCobolParser::AtomicArithmeticExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicArithmeticExp(this);
}
//----------------- ArithOpArithmeticExpContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticOpContext* BabyCobolParser::ArithOpArithmeticExpContext::arithmeticOp() {
  return getRuleContext<BabyCobolParser::ArithmeticOpContext>(0);
}

std::vector<BabyCobolParser::ArithmeticExpressionContext *> BabyCobolParser::ArithOpArithmeticExpContext::arithmeticExpression() {
  return getRuleContexts<BabyCobolParser::ArithmeticExpressionContext>();
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ArithOpArithmeticExpContext::arithmeticExpression(size_t i) {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(i);
}

BabyCobolParser::ArithOpArithmeticExpContext::ArithOpArithmeticExpContext(ArithmeticExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::ArithOpArithmeticExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithOpArithmeticExp(this);
}
void BabyCobolParser::ArithOpArithmeticExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithOpArithmeticExp(this);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::arithmeticExpression() {
   return arithmeticExpression(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::arithmeticExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::ArithmeticExpressionContext *_localctx = _tracker.createInstance<ArithmeticExpressionContext>(_ctx, parentState);
  BabyCobolParser::ArithmeticExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, BabyCobolParser::RuleArithmeticExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AtomicArithmeticExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(344);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(352);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArithOpArithmeticExpContext>(_tracker.createInstance<ArithmeticExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleArithmeticExpression);
        setState(346);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(347);
        arithmeticOp();
        setState(348);
        dynamic_cast<ArithOpArithmeticExpContext *>(_localctx)->right = arithmeticExpression(2); 
      }
      setState(354);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StringExpressionContext ------------------------------------------------------------------

BabyCobolParser::StringExpressionContext::StringExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::StringExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleStringExpression;
}

void BabyCobolParser::StringExpressionContext::copyFrom(StringExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AtomicStringExpContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext* BabyCobolParser::AtomicStringExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::AtomicStringExpContext::AtomicStringExpContext(StringExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::AtomicStringExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtomicStringExp(this);
}
void BabyCobolParser::AtomicStringExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtomicStringExp(this);
}
//----------------- AdditionStringExpContext ------------------------------------------------------------------

std::vector<BabyCobolParser::StringExpressionContext *> BabyCobolParser::AdditionStringExpContext::stringExpression() {
  return getRuleContexts<BabyCobolParser::StringExpressionContext>();
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::AdditionStringExpContext::stringExpression(size_t i) {
  return getRuleContext<BabyCobolParser::StringExpressionContext>(i);
}

BabyCobolParser::AdditionStringExpContext::AdditionStringExpContext(StringExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::AdditionStringExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionStringExp(this);
}
void BabyCobolParser::AdditionStringExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionStringExp(this);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::stringExpression() {
   return stringExpression(0);
}

BabyCobolParser::StringExpressionContext* BabyCobolParser::stringExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::StringExpressionContext *_localctx = _tracker.createInstance<StringExpressionContext>(_ctx, parentState);
  BabyCobolParser::StringExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, BabyCobolParser::RuleStringExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AtomicStringExpContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(356);
    atomic();
    _ctx->stop = _input->LT(-1);
    setState(363);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AdditionStringExpContext>(_tracker.createInstance<StringExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleStringExpression);
        setState(358);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(359);
        match(BabyCobolParser::T__2);
        setState(360);
        dynamic_cast<AdditionStringExpContext *>(_localctx)->right = stringExpression(2); 
      }
      setState(365);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BooleanExpressionContext ------------------------------------------------------------------

BabyCobolParser::BooleanExpressionContext::BooleanExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::BooleanExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleBooleanExpression;
}

void BabyCobolParser::BooleanExpressionContext::copyFrom(BooleanExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TrueBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::TrueBooleanExpContext::TRUE() {
  return getToken(BabyCobolParser::TRUE, 0);
}

BabyCobolParser::TrueBooleanExpContext::TrueBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::TrueBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrueBooleanExp(this);
}
void BabyCobolParser::TrueBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrueBooleanExp(this);
}
//----------------- BoolOpBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::BooleanOpContext* BabyCobolParser::BoolOpBooleanExpContext::booleanOp() {
  return getRuleContext<BabyCobolParser::BooleanOpContext>(0);
}

std::vector<BabyCobolParser::BooleanExpressionContext *> BabyCobolParser::BoolOpBooleanExpContext::booleanExpression() {
  return getRuleContexts<BabyCobolParser::BooleanExpressionContext>();
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::BoolOpBooleanExpContext::booleanExpression(size_t i) {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(i);
}

BabyCobolParser::BoolOpBooleanExpContext::BoolOpBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::BoolOpBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolOpBooleanExp(this);
}
void BabyCobolParser::BoolOpBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolOpBooleanExp(this);
}
//----------------- FalseBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::FalseBooleanExpContext::FALSE() {
  return getToken(BabyCobolParser::FALSE, 0);
}

BabyCobolParser::FalseBooleanExpContext::FalseBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::FalseBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalseBooleanExp(this);
}
void BabyCobolParser::FalseBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalseBooleanExp(this);
}
//----------------- ContractedBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext* BabyCobolParser::ContractedBooleanExpContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}

BabyCobolParser::AtomicContext* BabyCobolParser::ContractedBooleanExpContext::atomic() {
  return getRuleContext<BabyCobolParser::AtomicContext>(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ContractedBooleanExpContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

std::vector<BabyCobolParser::ContractedBooleanPartContext *> BabyCobolParser::ContractedBooleanExpContext::contractedBooleanPart() {
  return getRuleContexts<BabyCobolParser::ContractedBooleanPartContext>();
}

BabyCobolParser::ContractedBooleanPartContext* BabyCobolParser::ContractedBooleanExpContext::contractedBooleanPart(size_t i) {
  return getRuleContext<BabyCobolParser::ContractedBooleanPartContext>(i);
}

BabyCobolParser::ContractedBooleanExpContext::ContractedBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::ContractedBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContractedBooleanExp(this);
}
void BabyCobolParser::ContractedBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContractedBooleanExp(this);
}
//----------------- NotBooleanExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::NotBooleanExpContext::NOT() {
  return getToken(BabyCobolParser::NOT, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::NotBooleanExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::NotBooleanExpContext::NotBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::NotBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotBooleanExp(this);
}
void BabyCobolParser::NotBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotBooleanExp(this);
}
//----------------- CompareOpBooleanExpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext* BabyCobolParser::CompareOpBooleanExpContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}

std::vector<BabyCobolParser::ArithmeticExpressionContext *> BabyCobolParser::CompareOpBooleanExpContext::arithmeticExpression() {
  return getRuleContexts<BabyCobolParser::ArithmeticExpressionContext>();
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::CompareOpBooleanExpContext::arithmeticExpression(size_t i) {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(i);
}

BabyCobolParser::CompareOpBooleanExpContext::CompareOpBooleanExpContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::CompareOpBooleanExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareOpBooleanExp(this);
}
void BabyCobolParser::CompareOpBooleanExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareOpBooleanExp(this);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::booleanExpression() {
   return booleanExpression(0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::booleanExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BabyCobolParser::BooleanExpressionContext *_localctx = _tracker.createInstance<BooleanExpressionContext>(_ctx, parentState);
  BabyCobolParser::BooleanExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, BabyCobolParser::RuleBooleanExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(383);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<TrueBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(367);
      match(BabyCobolParser::TRUE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FalseBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(368);
      match(BabyCobolParser::FALSE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ContractedBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(369);
      dynamic_cast<ContractedBooleanExpContext *>(_localctx)->left = atomic();
      setState(370);
      comparisonOp();
      setState(371);
      dynamic_cast<ContractedBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      setState(373); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(372);
                dynamic_cast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext = contractedBooleanPart();
                dynamic_cast<ContractedBooleanExpContext *>(_localctx)->contract.push_back(dynamic_cast<ContractedBooleanExpContext *>(_localctx)->contractedBooleanPartContext);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(375); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CompareOpBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(377);
      dynamic_cast<CompareOpBooleanExpContext *>(_localctx)->left = arithmeticExpression(0);
      setState(378);
      comparisonOp();
      setState(379);
      dynamic_cast<CompareOpBooleanExpContext *>(_localctx)->right = arithmeticExpression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NotBooleanExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(381);
      match(BabyCobolParser::NOT);
      setState(382);
      booleanExpression(2);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(391);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BoolOpBooleanExpContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(385);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(386);
        booleanOp();
        setState(387);
        dynamic_cast<BoolOpBooleanExpContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(393);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LoopExpressionContext ------------------------------------------------------------------

BabyCobolParser::LoopExpressionContext::LoopExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::LoopExpressionContext::getRuleIndex() const {
  return BabyCobolParser::RuleLoopExpression;
}

void BabyCobolParser::LoopExpressionContext::copyFrom(LoopExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VaryingLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::VARYING() {
  return getToken(BabyCobolParser::VARYING, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::FROM() {
  return getToken(BabyCobolParser::FROM, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::TO() {
  return getToken(BabyCobolParser::TO, 0);
}

tree::TerminalNode* BabyCobolParser::VaryingLoopExpContext::BY() {
  return getToken(BabyCobolParser::BY, 0);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::VaryingLoopExpContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

std::vector<BabyCobolParser::AtomicContext *> BabyCobolParser::VaryingLoopExpContext::atomic() {
  return getRuleContexts<BabyCobolParser::AtomicContext>();
}

BabyCobolParser::AtomicContext* BabyCobolParser::VaryingLoopExpContext::atomic(size_t i) {
  return getRuleContext<BabyCobolParser::AtomicContext>(i);
}

BabyCobolParser::VaryingLoopExpContext::VaryingLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::VaryingLoopExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVaryingLoopExp(this);
}
void BabyCobolParser::VaryingLoopExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVaryingLoopExp(this);
}
//----------------- LoopStatementContext ------------------------------------------------------------------

BabyCobolParser::StatementContext* BabyCobolParser::LoopStatementContext::statement() {
  return getRuleContext<BabyCobolParser::StatementContext>(0);
}

BabyCobolParser::LoopStatementContext::LoopStatementContext(LoopExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}
void BabyCobolParser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}
//----------------- UntilLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::UntilLoopExpContext::UNTIL() {
  return getToken(BabyCobolParser::UNTIL, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::UntilLoopExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::UntilLoopExpContext::UntilLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::UntilLoopExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilLoopExp(this);
}
void BabyCobolParser::UntilLoopExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilLoopExp(this);
}
//----------------- WhileLoopExpContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhileLoopExpContext::WHILE() {
  return getToken(BabyCobolParser::WHILE, 0);
}

BabyCobolParser::BooleanExpressionContext* BabyCobolParser::WhileLoopExpContext::booleanExpression() {
  return getRuleContext<BabyCobolParser::BooleanExpressionContext>(0);
}

BabyCobolParser::WhileLoopExpContext::WhileLoopExpContext(LoopExpressionContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::WhileLoopExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoopExp(this);
}
void BabyCobolParser::WhileLoopExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoopExp(this);
}
BabyCobolParser::LoopExpressionContext* BabyCobolParser::loopExpression() {
  LoopExpressionContext *_localctx = _tracker.createInstance<LoopExpressionContext>(_ctx, getState());
  enterRule(_localctx, 66, BabyCobolParser::RuleLoopExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::VARYING: {
        _localctx = dynamic_cast<LoopExpressionContext *>(_tracker.createInstance<BabyCobolParser::VaryingLoopExpContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(394);
        match(BabyCobolParser::VARYING);
        setState(396);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::IDENTIFIER) {
          setState(395);
          dynamic_cast<VaryingLoopExpContext *>(_localctx)->id = identifiers();
        }
        setState(400);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::FROM) {
          setState(398);
          match(BabyCobolParser::FROM);
          setState(399);
          dynamic_cast<VaryingLoopExpContext *>(_localctx)->from = atomic();
        }
        setState(404);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::TO) {
          setState(402);
          match(BabyCobolParser::TO);
          setState(403);
          dynamic_cast<VaryingLoopExpContext *>(_localctx)->to = atomic();
        }
        setState(408);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == BabyCobolParser::BY) {
          setState(406);
          match(BabyCobolParser::BY);
          setState(407);
          dynamic_cast<VaryingLoopExpContext *>(_localctx)->by = atomic();
        }
        break;
      }

      case BabyCobolParser::WHILE: {
        _localctx = dynamic_cast<LoopExpressionContext *>(_tracker.createInstance<BabyCobolParser::WhileLoopExpContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(410);
        match(BabyCobolParser::WHILE);
        setState(411);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::UNTIL: {
        _localctx = dynamic_cast<LoopExpressionContext *>(_tracker.createInstance<BabyCobolParser::UntilLoopExpContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(412);
        match(BabyCobolParser::UNTIL);
        setState(413);
        booleanExpression(0);
        break;
      }

      case BabyCobolParser::T__0:
      case BabyCobolParser::T__1:
      case BabyCobolParser::DISPLAY:
      case BabyCobolParser::STOP:
      case BabyCobolParser::MOVE:
      case BabyCobolParser::SUBTRACT:
      case BabyCobolParser::MULTIPLY:
      case BabyCobolParser::PERFORM:
      case BabyCobolParser::IF:
      case BabyCobolParser::ACCEPT:
      case BabyCobolParser::ADD:
      case BabyCobolParser::DIVIDE:
      case BabyCobolParser::EVALUATE:
      case BabyCobolParser::NEXT:
      case BabyCobolParser::LOOP:
      case BabyCobolParser::GO:
      case BabyCobolParser::SIGNAL:
      case BabyCobolParser::ALTER: {
        _localctx = dynamic_cast<LoopExpressionContext *>(_tracker.createInstance<BabyCobolParser::LoopStatementContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(414);
        statement();
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

//----------------- ContractedBooleanPartContext ------------------------------------------------------------------

BabyCobolParser::ContractedBooleanPartContext::ContractedBooleanPartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BabyCobolParser::BooleanOpContext* BabyCobolParser::ContractedBooleanPartContext::booleanOp() {
  return getRuleContext<BabyCobolParser::BooleanOpContext>(0);
}

BabyCobolParser::ArithmeticExpressionContext* BabyCobolParser::ContractedBooleanPartContext::arithmeticExpression() {
  return getRuleContext<BabyCobolParser::ArithmeticExpressionContext>(0);
}

BabyCobolParser::ComparisonOpContext* BabyCobolParser::ContractedBooleanPartContext::comparisonOp() {
  return getRuleContext<BabyCobolParser::ComparisonOpContext>(0);
}


size_t BabyCobolParser::ContractedBooleanPartContext::getRuleIndex() const {
  return BabyCobolParser::RuleContractedBooleanPart;
}

void BabyCobolParser::ContractedBooleanPartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContractedBooleanPart(this);
}

void BabyCobolParser::ContractedBooleanPartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContractedBooleanPart(this);
}

BabyCobolParser::ContractedBooleanPartContext* BabyCobolParser::contractedBooleanPart() {
  ContractedBooleanPartContext *_localctx = _tracker.createInstance<ContractedBooleanPartContext>(_ctx, getState());
  enterRule(_localctx, 68, BabyCobolParser::RuleContractedBooleanPart);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    booleanOp();
    setState(419);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0)) {
      setState(418);
      comparisonOp();
    }
    setState(421);
    arithmeticExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOpContext ------------------------------------------------------------------

BabyCobolParser::ComparisonOpContext::ComparisonOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ComparisonOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleComparisonOp;
}

void BabyCobolParser::ComparisonOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOp(this);
}

void BabyCobolParser::ComparisonOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOp(this);
}

BabyCobolParser::ComparisonOpContext* BabyCobolParser::comparisonOp() {
  ComparisonOpContext *_localctx = _tracker.createInstance<ComparisonOpContext>(_ctx, getState());
  enterRule(_localctx, 70, BabyCobolParser::RuleComparisonOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__3)
      | (1ULL << BabyCobolParser::T__4)
      | (1ULL << BabyCobolParser::T__5)
      | (1ULL << BabyCobolParser::T__6)
      | (1ULL << BabyCobolParser::T__7)
      | (1ULL << BabyCobolParser::T__8))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanOpContext ------------------------------------------------------------------

BabyCobolParser::BooleanOpContext::BooleanOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::OR() {
  return getToken(BabyCobolParser::OR, 0);
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::AND() {
  return getToken(BabyCobolParser::AND, 0);
}

tree::TerminalNode* BabyCobolParser::BooleanOpContext::XOR() {
  return getToken(BabyCobolParser::XOR, 0);
}


size_t BabyCobolParser::BooleanOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleBooleanOp;
}

void BabyCobolParser::BooleanOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanOp(this);
}

void BabyCobolParser::BooleanOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanOp(this);
}

BabyCobolParser::BooleanOpContext* BabyCobolParser::booleanOp() {
  BooleanOpContext *_localctx = _tracker.createInstance<BooleanOpContext>(_ctx, getState());
  enterRule(_localctx, 72, BabyCobolParser::RuleBooleanOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::OR)
      | (1ULL << BabyCobolParser::AND)
      | (1ULL << BabyCobolParser::XOR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticOpContext ------------------------------------------------------------------

BabyCobolParser::ArithmeticOpContext::ArithmeticOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::ArithmeticOpContext::getRuleIndex() const {
  return BabyCobolParser::RuleArithmeticOp;
}

void BabyCobolParser::ArithmeticOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticOp(this);
}

void BabyCobolParser::ArithmeticOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticOp(this);
}

BabyCobolParser::ArithmeticOpContext* BabyCobolParser::arithmeticOp() {
  ArithmeticOpContext *_localctx = _tracker.createInstance<ArithmeticOpContext>(_ctx, getState());
  enterRule(_localctx, 74, BabyCobolParser::RuleArithmeticOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
      | (1ULL << BabyCobolParser::T__1)
      | (1ULL << BabyCobolParser::T__2)
      | (1ULL << BabyCobolParser::T__9)
      | (1ULL << BabyCobolParser::T__10))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhenBlockContext ------------------------------------------------------------------

BabyCobolParser::WhenBlockContext::WhenBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::WhenBlockContext::getRuleIndex() const {
  return BabyCobolParser::RuleWhenBlock;
}

void BabyCobolParser::WhenBlockContext::copyFrom(WhenBlockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhenOtherContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhenOtherContext::WHEN() {
  return getToken(BabyCobolParser::WHEN, 0);
}

tree::TerminalNode* BabyCobolParser::WhenOtherContext::OTHER() {
  return getToken(BabyCobolParser::OTHER, 0);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::WhenOtherContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::WhenOtherContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}

BabyCobolParser::WhenOtherContext::WhenOtherContext(WhenBlockContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::WhenOtherContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenOther(this);
}
void BabyCobolParser::WhenOtherContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenOther(this);
}
//----------------- WhenAnyExpressionContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::WhenAnyExpressionContext::WHEN() {
  return getToken(BabyCobolParser::WHEN, 0);
}

std::vector<BabyCobolParser::AnyExpressionContext *> BabyCobolParser::WhenAnyExpressionContext::anyExpression() {
  return getRuleContexts<BabyCobolParser::AnyExpressionContext>();
}

BabyCobolParser::AnyExpressionContext* BabyCobolParser::WhenAnyExpressionContext::anyExpression(size_t i) {
  return getRuleContext<BabyCobolParser::AnyExpressionContext>(i);
}

std::vector<BabyCobolParser::StatementContext *> BabyCobolParser::WhenAnyExpressionContext::statement() {
  return getRuleContexts<BabyCobolParser::StatementContext>();
}

BabyCobolParser::StatementContext* BabyCobolParser::WhenAnyExpressionContext::statement(size_t i) {
  return getRuleContext<BabyCobolParser::StatementContext>(i);
}

BabyCobolParser::WhenAnyExpressionContext::WhenAnyExpressionContext(WhenBlockContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::WhenAnyExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhenAnyExpression(this);
}
void BabyCobolParser::WhenAnyExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhenAnyExpression(this);
}
BabyCobolParser::WhenBlockContext* BabyCobolParser::whenBlock() {
  WhenBlockContext *_localctx = _tracker.createInstance<WhenBlockContext>(_ctx, getState());
  enterRule(_localctx, 76, BabyCobolParser::RuleWhenBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<WhenBlockContext *>(_tracker.createInstance<BabyCobolParser::WhenAnyExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(429);
      match(BabyCobolParser::WHEN);
      setState(431); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(430);
        anyExpression();
        setState(433); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (((((_la - 43) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 43)) & ((1ULL << (BabyCobolParser::TRUE - 43))
        | (1ULL << (BabyCobolParser::FALSE - 43))
        | (1ULL << (BabyCobolParser::NOT - 43))
        | (1ULL << (BabyCobolParser::IDENTIFIER - 43))
        | (1ULL << (BabyCobolParser::INT - 43))
        | (1ULL << (BabyCobolParser::LITERAL - 43)))) != 0));
      setState(436); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(435);
        statement();
        setState(438); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<WhenBlockContext *>(_tracker.createInstance<BabyCobolParser::WhenOtherContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(440);
      match(BabyCobolParser::WHEN);
      setState(441);
      match(BabyCobolParser::OTHER);
      setState(443); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(442);
        statement();
        setState(445); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << BabyCobolParser::T__0)
        | (1ULL << BabyCobolParser::T__1)
        | (1ULL << BabyCobolParser::DISPLAY)
        | (1ULL << BabyCobolParser::STOP)
        | (1ULL << BabyCobolParser::MOVE)
        | (1ULL << BabyCobolParser::SUBTRACT)
        | (1ULL << BabyCobolParser::MULTIPLY)
        | (1ULL << BabyCobolParser::PERFORM)
        | (1ULL << BabyCobolParser::IF)
        | (1ULL << BabyCobolParser::ACCEPT)
        | (1ULL << BabyCobolParser::ADD)
        | (1ULL << BabyCobolParser::DIVIDE)
        | (1ULL << BabyCobolParser::EVALUATE)
        | (1ULL << BabyCobolParser::NEXT)
        | (1ULL << BabyCobolParser::LOOP)
        | (1ULL << BabyCobolParser::GO))) != 0) || _la == BabyCobolParser::SIGNAL

      || _la == BabyCobolParser::ALTER);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomicContext ------------------------------------------------------------------

BabyCobolParser::AtomicContext::AtomicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BabyCobolParser::AtomicContext::getRuleIndex() const {
  return BabyCobolParser::RuleAtomic;
}

void BabyCobolParser::AtomicContext::copyFrom(AtomicContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentifierContext ------------------------------------------------------------------

BabyCobolParser::IdentifiersContext* BabyCobolParser::IdentifierContext::identifiers() {
  return getRuleContext<BabyCobolParser::IdentifiersContext>(0);
}

BabyCobolParser::IdentifierContext::IdentifierContext(AtomicContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void BabyCobolParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}
//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::StringLiteralContext::LITERAL() {
  return getToken(BabyCobolParser::LITERAL, 0);
}

BabyCobolParser::StringLiteralContext::StringLiteralContext(AtomicContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}
void BabyCobolParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* BabyCobolParser::IntLiteralContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}

BabyCobolParser::IntLiteralContext::IntLiteralContext(AtomicContext *ctx) { copyFrom(ctx); }

void BabyCobolParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}
void BabyCobolParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}
BabyCobolParser::AtomicContext* BabyCobolParser::atomic() {
  AtomicContext *_localctx = _tracker.createInstance<AtomicContext>(_ctx, getState());
  enterRule(_localctx, 78, BabyCobolParser::RuleAtomic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(452);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BabyCobolParser::INT: {
        _localctx = dynamic_cast<AtomicContext *>(_tracker.createInstance<BabyCobolParser::IntLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(449);
        match(BabyCobolParser::INT);
        break;
      }

      case BabyCobolParser::LITERAL: {
        _localctx = dynamic_cast<AtomicContext *>(_tracker.createInstance<BabyCobolParser::StringLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(450);
        match(BabyCobolParser::LITERAL);
        break;
      }

      case BabyCobolParser::IDENTIFIER: {
        _localctx = dynamic_cast<AtomicContext *>(_tracker.createInstance<BabyCobolParser::IdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(451);
        identifiers();
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

//----------------- IdentifiersContext ------------------------------------------------------------------

BabyCobolParser::IdentifiersContext::IdentifiersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentifiersContext::IDENTIFIER() {
  return getTokens(BabyCobolParser::IDENTIFIER);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::IDENTIFIER(size_t i) {
  return getToken(BabyCobolParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> BabyCobolParser::IdentifiersContext::OF() {
  return getTokens(BabyCobolParser::OF);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::OF(size_t i) {
  return getToken(BabyCobolParser::OF, i);
}

tree::TerminalNode* BabyCobolParser::IdentifiersContext::INT() {
  return getToken(BabyCobolParser::INT, 0);
}


size_t BabyCobolParser::IdentifiersContext::getRuleIndex() const {
  return BabyCobolParser::RuleIdentifiers;
}

void BabyCobolParser::IdentifiersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifiers(this);
}

void BabyCobolParser::IdentifiersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BabyCobolListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifiers(this);
}

BabyCobolParser::IdentifiersContext* BabyCobolParser::identifiers() {
  IdentifiersContext *_localctx = _tracker.createInstance<IdentifiersContext>(_ctx, getState());
  enterRule(_localctx, 80, BabyCobolParser::RuleIdentifiers);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(BabyCobolParser::IDENTIFIER);
    setState(459);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(455);
        match(BabyCobolParser::OF);
        setState(456);
        match(BabyCobolParser::IDENTIFIER); 
      }
      setState(461);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    setState(465);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(462);
      match(BabyCobolParser::T__11);
      setState(463);
      match(BabyCobolParser::INT);
      setState(464);
      match(BabyCobolParser::T__12);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BabyCobolParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 30: return arithmeticExpressionSempred(dynamic_cast<ArithmeticExpressionContext *>(context), predicateIndex);
    case 31: return stringExpressionSempred(dynamic_cast<StringExpressionContext *>(context), predicateIndex);
    case 32: return booleanExpressionSempred(dynamic_cast<BooleanExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::arithmeticExpressionSempred(ArithmeticExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::stringExpressionSempred(StringExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool BabyCobolParser::booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> BabyCobolParser::_decisionToDFA;
atn::PredictionContextCache BabyCobolParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BabyCobolParser::_atn;
std::vector<uint16_t> BabyCobolParser::_serializedATN;

std::vector<std::string> BabyCobolParser::_ruleNames = {
  "program", "identification", "name", "value", "data", "variable", "level", 
  "representation", "procedure", "paragraph", "sentence", "statement", "label", 
  "display", "stop", "move", "subtract", "multiply", "perform", "ifStatement", 
  "accept", "add", "divide", "evaluate", "nextSentence", "loop", "gotoStatement", 
  "signal", "alter", "anyExpression", "arithmeticExpression", "stringExpression", 
  "booleanExpression", "loopExpression", "contractedBooleanPart", "comparisonOp", 
  "booleanOp", "arithmeticOp", "whenBlock", "atomic", "identifiers"
};

std::vector<std::string> BabyCobolParser::_literalNames = {
  "", "'*'", "'-'", "'+'", "'='", "'>'", "'<'", "'>='", "'<='", "'!='", 
  "'/'", "'**'", "'('", "')'", "'IDENTIFICATION'", "'DIVISION'", "'PROCEDURE'", 
  "'DATA'", "'DISPLAY'", "'WITH'", "'NO'", "'ADVANCING'", "'STOP'", "'MOVE'", 
  "'TO'", "'SUBTRACT'", "'FROM'", "'GIVING'", "'MULTIPLY'", "'BY'", "'PERFORM'", 
  "'TIMES'", "'IF'", "'THEN'", "'ELSE'", "'END'", "'ACCEPT'", "'ADD'", "'DIVIDE'", 
  "'INTO'", "'EVALUATE'", "'WHEN'", "'OTHER'", "'TRUE'", "'FALSE'", "'NOT'", 
  "'OR'", "'AND'", "'XOR'", "'NEXT'", "'SENTENCE'", "'REMAINDER'", "'LOOP'", 
  "'VARYING'", "'WHILE'", "'UNTIL'", "'OF'", "'THROUGH'", "'PICTURE'", "'IS'", 
  "'LIKE'", "'OCCURS'", "'GO'", "'SPACES'", "'HIGH-VALUES'", "'LOW-VALUES'", 
  "'SIGNAL'", "'ON ERROR'", "'OFF'", "'ALTER'", "'PROCEED'", "", "", "", 
  "", "", "", "'.'"
};

std::vector<std::string> BabyCobolParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFICATION", 
  "DIVISION", "PROCEDURE", "DATA", "DISPLAY", "WITH", "NO", "ADVANCING", 
  "STOP", "MOVE", "TO", "SUBTRACT", "FROM", "GIVING", "MULTIPLY", "BY", 
  "PERFORM", "TIMES", "IF", "THEN", "ELSE", "END", "ACCEPT", "ADD", "DIVIDE", 
  "INTO", "EVALUATE", "WHEN", "OTHER", "TRUE", "FALSE", "NOT", "OR", "AND", 
  "XOR", "NEXT", "SENTENCE", "REMAINDER", "LOOP", "VARYING", "WHILE", "UNTIL", 
  "OF", "THROUGH", "PICTURE", "IS", "LIKE", "OCCURS", "GO", "SPACES", "HIGH", 
  "LOW", "SIGNAL", "ONERROR", "OFF", "ALTER", "PROCEED", "NINE", "X", "COMMENTLINE", 
  "IDENTIFIER", "INT", "LITERAL", "DOT", "VAR", "WS"
};

dfa::Vocabulary BabyCobolParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BabyCobolParser::_tokenNames;

BabyCobolParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x51, 0x1d6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x3, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x57, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x64, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x67, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x70, 0xa, 
    0x6, 0xc, 0x6, 0xe, 0x6, 0x73, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x7c, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x81, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x7, 0xa, 0x8d, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x90, 0xb, 0xa, 
    0x3, 0xa, 0x6, 0xa, 0x93, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x94, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x9a, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x9b, 
    0x3, 0xc, 0x6, 0xc, 0x9f, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xa0, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 0xa6, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 
    0xd, 0xb8, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 
    0xbe, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0xbf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0xc5, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xce, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x6, 0x11, 0xd2, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0xd3, 0x3, 
    0x12, 0x3, 0x12, 0x6, 0x12, 0xd8, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0xd9, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xe0, 0xa, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0xe6, 0xa, 0x13, 
    0xd, 0x13, 0xe, 0x13, 0xe7, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xec, 0xa, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xf2, 0xa, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xf7, 0xa, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x6, 0x15, 0xfd, 0xa, 0x15, 0xd, 
    0x15, 0xe, 0x15, 0xfe, 0x3, 0x15, 0x3, 0x15, 0x6, 0x15, 0x103, 0xa, 
    0x15, 0xd, 0x15, 0xe, 0x15, 0x104, 0x5, 0x15, 0x107, 0xa, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x10d, 0xa, 0x16, 
    0xd, 0x16, 0xe, 0x16, 0x10e, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x113, 
    0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x114, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x11b, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x6, 0x18, 0x121, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0x122, 
    0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x127, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x12b, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 
    0x130, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 0x133, 0xb, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x7, 
    0x1b, 0x13c, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0x13f, 0xb, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x14a, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x158, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x7, 0x20, 0x161, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x164, 0xb, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x16c, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x16f, 0xb, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x6, 0x22, 0x178, 0xa, 0x22, 0xd, 0x22, 0xe, 0x22, 0x179, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x182, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 
    0x188, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x18b, 0xb, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x5, 0x23, 0x18f, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
    0x193, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x197, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x19b, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1a2, 0xa, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x1a6, 0xa, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x6, 0x28, 0x1b2, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 0x1b3, 0x3, 
    0x28, 0x6, 0x28, 0x1b7, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 0x1b8, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x6, 0x28, 0x1be, 0xa, 0x28, 0xd, 0x28, 
    0xe, 0x28, 0x1bf, 0x5, 0x28, 0x1c2, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x5, 0x29, 0x1c7, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
    0x7, 0x2a, 0x1cc, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x1cf, 0xb, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1d4, 0xa, 0x2a, 0x3, 0x2a, 
    0x2, 0x5, 0x3e, 0x40, 0x42, 0x2b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x2, 0x8, 
    0x3, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x25, 0x25, 0x4f, 
    0x4f, 0x3, 0x2, 0x6, 0xb, 0x3, 0x2, 0x30, 0x32, 0x4, 0x2, 0x3, 0x5, 
    0xc, 0xd, 0x2, 0x1f8, 0x2, 0x54, 0x3, 0x2, 0x2, 0x2, 0x4, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x68, 0x3, 0x2, 0x2, 0x2, 0x8, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x6c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x74, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x10, 0x86, 0x3, 0x2, 0x2, 0x2, 0x12, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x96, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x26, 0xed, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xf8, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x110, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12c, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x136, 0x3, 0x2, 0x2, 0x2, 0x34, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x142, 0x3, 0x2, 0x2, 0x2, 0x38, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x157, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x159, 0x3, 0x2, 0x2, 0x2, 0x40, 0x165, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x181, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1ab, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x56, 0x5, 0x4, 0x3, 0x2, 0x55, 0x57, 0x5, 0xa, 0x6, 0x2, 
    0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x5, 0x12, 0xa, 0x2, 0x59, 0x5a, 
    0x7, 0x2, 0x2, 0x3, 0x5a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 
    0x10, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x11, 0x2, 0x2, 0x5d, 0x65, 0x7, 0x4f, 
    0x2, 0x2, 0x5e, 0x5f, 0x5, 0x6, 0x4, 0x2, 0x5f, 0x60, 0x7, 0x4f, 0x2, 
    0x2, 0x60, 0x61, 0x5, 0x8, 0x5, 0x2, 0x61, 0x62, 0x7, 0x4f, 0x2, 0x2, 
    0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x5, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x4c, 0x2, 0x2, 0x69, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6b, 0x7, 0x4e, 0x2, 0x2, 0x6b, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x6d, 0x7, 0x13, 0x2, 0x2, 0x6d, 0x71, 0x7, 0x11, 0x2, 0x2, 
    0x6e, 0x70, 0x5, 0xc, 0x7, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0xb, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 0xe, 0x8, 0x2, 0x75, 0x7b, 0x7, 0x4c, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x3c, 0x2, 0x2, 0x77, 0x78, 0x7, 0x3d, 0x2, 
    0x2, 0x78, 0x7c, 0x5, 0x10, 0x9, 0x2, 0x79, 0x7a, 0x7, 0x3e, 0x2, 0x2, 
    0x7a, 0x7c, 0x5, 0x52, 0x2a, 0x2, 0x7b, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7b, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x3f, 0x2, 0x2, 0x7e, 0x7f, 0x7, 
    0x4d, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x21, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x4f, 0x2, 0x2, 0x83, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x85, 0x7, 0x4d, 0x2, 0x2, 0x85, 0xf, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x87, 0x9, 0x2, 0x2, 0x2, 0x87, 0x11, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 
    0x7, 0x12, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x11, 0x2, 0x2, 0x8a, 0x8e, 0x7, 
    0x4f, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x16, 0xc, 0x2, 0x8c, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x5, 0x14, 0xb, 0x2, 0x92, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 
    0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x1a, 0xe, 0x2, 0x97, 0x99, 0x7, 0x4f, 
    0x2, 0x2, 0x98, 0x9a, 0x5, 0x16, 0xc, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9f, 0x5, 0x18, 0xd, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x4f, 
    0x2, 0x2, 0xa3, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa6, 0x9, 0x3, 0x2, 
    0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xb8, 0x5, 0x1c, 0xf, 0x2, 0xa8, 
    0xb8, 0x5, 0x1e, 0x10, 0x2, 0xa9, 0xb8, 0x5, 0x20, 0x11, 0x2, 0xaa, 
    0xb8, 0x5, 0x22, 0x12, 0x2, 0xab, 0xb8, 0x5, 0x24, 0x13, 0x2, 0xac, 
    0xb8, 0x5, 0x26, 0x14, 0x2, 0xad, 0xb8, 0x5, 0x28, 0x15, 0x2, 0xae, 
    0xb8, 0x5, 0x2a, 0x16, 0x2, 0xaf, 0xb8, 0x5, 0x2c, 0x17, 0x2, 0xb0, 
    0xb8, 0x5, 0x2e, 0x18, 0x2, 0xb1, 0xb8, 0x5, 0x30, 0x19, 0x2, 0xb2, 
    0xb8, 0x5, 0x32, 0x1a, 0x2, 0xb3, 0xb8, 0x5, 0x34, 0x1b, 0x2, 0xb4, 
    0xb8, 0x5, 0x36, 0x1c, 0x2, 0xb5, 0xb8, 0x5, 0x38, 0x1d, 0x2, 0xb6, 
    0xb8, 0x5, 0x3a, 0x1e, 0x2, 0xb7, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xac, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x4c, 0x2, 0x2, 0xba, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbd, 0x7, 0x14, 0x2, 0x2, 0xbc, 0xbe, 0x5, 0x50, 0x29, 
    0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x15, 0x2, 0x2, 0xc2, 0xc3, 
    0x7, 0x16, 0x2, 0x2, 0xc3, 0xc5, 0x7, 0x17, 0x2, 0x2, 0xc4, 0xc1, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xc7, 0x7, 0x18, 0x2, 0x2, 0xc7, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xcd, 0x7, 0x19, 0x2, 0x2, 0xc9, 0xce, 0x7, 0x41, 0x2, 0x2, 
    0xca, 0xce, 0x7, 0x42, 0x2, 0x2, 0xcb, 0xce, 0x7, 0x43, 0x2, 0x2, 0xcc, 
    0xce, 0x5, 0x50, 0x29, 0x2, 0xcd, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcc, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x7, 0x1a, 
    0x2, 0x2, 0xd0, 0xd2, 0x5, 0x52, 0x2a, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd5, 
    0xd7, 0x7, 0x1b, 0x2, 0x2, 0xd6, 0xd8, 0x5, 0x50, 0x29, 0x2, 0xd7, 0xd6, 
    0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdc, 0x7, 0x1c, 0x2, 0x2, 0xdc, 0xdf, 0x5, 0x50, 0x29, 
    0x2, 0xdd, 0xde, 0x7, 0x1d, 0x2, 0x2, 0xde, 0xe0, 0x5, 0x52, 0x2a, 0x2, 
    0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x1e, 0x2, 0x2, 0xe2, 0xe3, 
    0x5, 0x50, 0x29, 0x2, 0xe3, 0xe5, 0x7, 0x1f, 0x2, 0x2, 0xe4, 0xe6, 0x5, 
    0x50, 0x29, 0x2, 0xe5, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x1d, 0x2, 0x2, 
    0xea, 0xec, 0x5, 0x52, 0x2a, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xeb, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0x25, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 
    0x7, 0x20, 0x2, 0x2, 0xee, 0xf1, 0x5, 0x1a, 0xe, 0x2, 0xef, 0xf0, 0x7, 
    0x3b, 0x2, 0x2, 0xf0, 0xf2, 0x5, 0x1a, 0xe, 0x2, 0xf1, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf4, 0x5, 0x50, 0x29, 0x2, 0xf4, 0xf5, 0x7, 0x21, 0x2, 0x2, 
    0xf5, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 
    0x7, 0x22, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x42, 0x22, 0x2, 0xfa, 0xfc, 0x7, 
    0x23, 0x2, 0x2, 0xfb, 0xfd, 0x5, 0x18, 0xd, 0x2, 0xfc, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x106, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0x102, 0x7, 0x24, 0x2, 0x2, 0x101, 0x103, 0x5, 0x18, 0xd, 0x2, 
    0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x107, 0x3, 0x2, 0x2, 0x2, 0x106, 0x100, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x9, 0x4, 0x2, 0x2, 0x109, 0x29, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10c, 0x7, 0x26, 0x2, 0x2, 0x10b, 0x10d, 0x5, 0x52, 0x2a, 0x2, 0x10c, 
    0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x110, 0x112, 0x7, 0x27, 0x2, 0x2, 0x111, 
    0x113, 0x5, 0x50, 0x29, 0x2, 0x112, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 
    0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 
    0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 
    0x117, 0x7, 0x1a, 0x2, 0x2, 0x117, 0x11a, 0x5, 0x50, 0x29, 0x2, 0x118, 
    0x119, 0x7, 0x1d, 0x2, 0x2, 0x119, 0x11b, 0x5, 0x52, 0x2a, 0x2, 0x11a, 
    0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x28, 0x2, 0x2, 0x11d, 
    0x11e, 0x5, 0x50, 0x29, 0x2, 0x11e, 0x120, 0x7, 0x29, 0x2, 0x2, 0x11f, 
    0x121, 0x5, 0x50, 0x29, 0x2, 0x120, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 
    0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x7, 0x1d, 0x2, 0x2, 0x125, 0x127, 0x5, 0x52, 0x2a, 0x2, 0x126, 
    0x124, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 0x35, 0x2, 0x2, 0x129, 
    0x12b, 0x5, 0x52, 0x2a, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x7, 0x2a, 0x2, 0x2, 0x12d, 0x131, 0x5, 0x3c, 0x1f, 0x2, 0x12e, 0x130, 
    0x5, 0x4e, 0x28, 0x2, 0x12f, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 0x2, 0x133, 0x131, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x7, 0x25, 0x2, 0x2, 0x135, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x7, 0x33, 0x2, 0x2, 0x137, 0x138, 
    0x7, 0x34, 0x2, 0x2, 0x138, 0x33, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13d, 
    0x7, 0x36, 0x2, 0x2, 0x13a, 0x13c, 0x5, 0x44, 0x23, 0x2, 0x13b, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x7, 0x25, 0x2, 0x2, 0x141, 0x35, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 
    0x7, 0x40, 0x2, 0x2, 0x143, 0x144, 0x7, 0x1a, 0x2, 0x2, 0x144, 0x145, 
    0x5, 0x6, 0x4, 0x2, 0x145, 0x37, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x7, 
    0x44, 0x2, 0x2, 0x147, 0x14a, 0x5, 0x1a, 0xe, 0x2, 0x148, 0x14a, 0x7, 
    0x46, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x148, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x7, 
    0x45, 0x2, 0x2, 0x14c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 
    0x47, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x1a, 0xe, 0x2, 0x14f, 0x150, 0x7, 
    0x1a, 0x2, 0x2, 0x150, 0x151, 0x7, 0x48, 0x2, 0x2, 0x151, 0x152, 0x7, 
    0x1a, 0x2, 0x2, 0x152, 0x153, 0x5, 0x1a, 0xe, 0x2, 0x153, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x154, 0x158, 0x5, 0x3e, 0x20, 0x2, 0x155, 0x158, 0x5, 
    0x40, 0x21, 0x2, 0x156, 0x158, 0x5, 0x42, 0x22, 0x2, 0x157, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x8, 0x20, 
    0x1, 0x2, 0x15a, 0x15b, 0x5, 0x50, 0x29, 0x2, 0x15b, 0x162, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0xc, 0x3, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x4c, 
    0x27, 0x2, 0x15e, 0x15f, 0x5, 0x3e, 0x20, 0x4, 0x15f, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x160, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x166, 0x8, 0x21, 0x1, 0x2, 0x166, 0x167, 0x5, 0x50, 0x29, 
    0x2, 0x167, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0xc, 0x3, 0x2, 
    0x2, 0x169, 0x16a, 0x7, 0x5, 0x2, 0x2, 0x16a, 0x16c, 0x5, 0x40, 0x21, 
    0x4, 0x16b, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x171, 0x8, 0x22, 0x1, 0x2, 0x171, 0x182, 0x7, 0x2d, 0x2, 0x2, 
    0x172, 0x182, 0x7, 0x2e, 0x2, 0x2, 0x173, 0x174, 0x5, 0x50, 0x29, 0x2, 
    0x174, 0x175, 0x5, 0x48, 0x25, 0x2, 0x175, 0x177, 0x5, 0x3e, 0x20, 0x2, 
    0x176, 0x178, 0x5, 0x46, 0x24, 0x2, 0x177, 0x176, 0x3, 0x2, 0x2, 0x2, 
    0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x17b, 0x17c, 0x5, 0x3e, 0x20, 0x2, 0x17c, 0x17d, 0x5, 0x48, 0x25, 0x2, 
    0x17d, 0x17e, 0x5, 0x3e, 0x20, 0x2, 0x17e, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x180, 0x7, 0x2f, 0x2, 0x2, 0x180, 0x182, 0x5, 0x42, 0x22, 0x4, 
    0x181, 0x170, 0x3, 0x2, 0x2, 0x2, 0x181, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x173, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x184, 0xc, 0x3, 0x2, 0x2, 0x184, 0x185, 0x5, 0x4a, 0x26, 0x2, 
    0x185, 0x186, 0x5, 0x42, 0x22, 0x4, 0x186, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x183, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x43, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18e, 0x7, 0x37, 0x2, 0x2, 0x18d, 0x18f, 0x5, 0x52, 0x2a, 0x2, 0x18e, 
    0x18d, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x192, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 0x1c, 0x2, 0x2, 0x191, 
    0x193, 0x5, 0x50, 0x29, 0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x192, 
    0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x196, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x195, 0x7, 0x1a, 0x2, 0x2, 0x195, 0x197, 0x5, 0x50, 0x29, 0x2, 0x196, 
    0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x7, 0x1f, 0x2, 0x2, 0x199, 
    0x19b, 0x5, 0x50, 0x29, 0x2, 0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19d, 0x7, 0x38, 0x2, 0x2, 0x19d, 0x1a2, 0x5, 0x42, 0x22, 0x2, 0x19e, 
    0x19f, 0x7, 0x39, 0x2, 0x2, 0x19f, 0x1a2, 0x5, 0x42, 0x22, 0x2, 0x1a0, 
    0x1a2, 0x5, 0x18, 0xd, 0x2, 0x1a1, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x19c, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a5, 
    0x5, 0x4a, 0x26, 0x2, 0x1a4, 0x1a6, 0x5, 0x48, 0x25, 0x2, 0x1a5, 0x1a4, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 
    0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a8, 0x5, 0x3e, 0x20, 0x2, 0x1a8, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x9, 0x5, 0x2, 0x2, 0x1aa, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x9, 0x6, 0x2, 0x2, 0x1ac, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1ae, 0x9, 0x7, 0x2, 0x2, 0x1ae, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1b1, 0x7, 0x2b, 0x2, 0x2, 0x1b0, 0x1b2, 0x5, 0x3c, 0x1f, 
    0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x1b4, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b7, 0x5, 0x18, 0xd, 
    0x2, 0x1b6, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 
    0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1b9, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x2b, 0x2, 
    0x2, 0x1bb, 0x1bd, 0x7, 0x2c, 0x2, 0x2, 0x1bc, 0x1be, 0x5, 0x18, 0xd, 
    0x2, 0x1bd, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 
    0x2, 0x1c0, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c7, 0x7, 0x4d, 0x2, 0x2, 0x1c4, 0x1c7, 0x7, 0x4e, 0x2, 0x2, 
    0x1c5, 0x1c7, 0x5, 0x52, 0x2a, 0x2, 0x1c6, 0x1c3, 0x3, 0x2, 0x2, 0x2, 
    0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cd, 0x7, 0x4c, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x7, 0x3a, 0x2, 0x2, 0x1ca, 0x1cc, 0x7, 0x4c, 0x2, 0x2, 
    0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x1d1, 0x7, 0xe, 0x2, 0x2, 0x1d1, 0x1d2, 0x7, 0x4d, 0x2, 0x2, 
    0x1d2, 0x1d4, 0x7, 0xf, 0x2, 0x2, 0x1d3, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x53, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x56, 0x65, 0x71, 0x7b, 0x80, 0x8e, 0x94, 0x9b, 0xa0, 0xa5, 0xb7, 0xbf, 
    0xc4, 0xcd, 0xd3, 0xd9, 0xdf, 0xe7, 0xeb, 0xf1, 0xf6, 0xfe, 0x104, 0x106, 
    0x10e, 0x114, 0x11a, 0x122, 0x126, 0x12a, 0x131, 0x13d, 0x149, 0x157, 
    0x162, 0x16d, 0x179, 0x181, 0x189, 0x18e, 0x192, 0x196, 0x19a, 0x1a1, 
    0x1a5, 0x1b3, 0x1b8, 0x1bf, 0x1c1, 0x1c6, 0x1cd, 0x1d3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BabyCobolParser::Initializer BabyCobolParser::_init;
