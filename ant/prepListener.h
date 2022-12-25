
// Generated from prep.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "prepParser.h"


namespace ant {

/**
 * This interface defines an abstract listener for a parse tree produced by prepParser.
 */
class  prepListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterBlockItem(prepParser::BlockItemContext *ctx) = 0;
  virtual void exitBlockItem(prepParser::BlockItemContext *ctx) = 0;

  virtual void enterBlock(prepParser::BlockContext *ctx) = 0;
  virtual void exitBlock(prepParser::BlockContext *ctx) = 0;

  virtual void enterBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext *ctx) = 0;
  virtual void exitBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext *ctx) = 0;

  virtual void enterBlockNoRecurse(prepParser::BlockNoRecurseContext *ctx) = 0;
  virtual void exitBlockNoRecurse(prepParser::BlockNoRecurseContext *ctx) = 0;

  virtual void enterParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext *ctx) = 0;
  virtual void exitParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext *ctx) = 0;

  virtual void enterParameterPack(prepParser::ParameterPackContext *ctx) = 0;
  virtual void exitParameterPack(prepParser::ParameterPackContext *ctx) = 0;

  virtual void enterParameterSingle(prepParser::ParameterSingleContext *ctx) = 0;
  virtual void exitParameterSingle(prepParser::ParameterSingleContext *ctx) = 0;

  virtual void enterString(prepParser::StringContext *ctx) = 0;
  virtual void exitString(prepParser::StringContext *ctx) = 0;

  virtual void enterBodyStringImplicit(prepParser::BodyStringImplicitContext *ctx) = 0;
  virtual void exitBodyStringImplicit(prepParser::BodyStringImplicitContext *ctx) = 0;

  virtual void enterRecurse(prepParser::RecurseContext *ctx) = 0;
  virtual void exitRecurse(prepParser::RecurseContext *ctx) = 0;

  virtual void enterSeparator(prepParser::SeparatorContext *ctx) = 0;
  virtual void exitSeparator(prepParser::SeparatorContext *ctx) = 0;

  virtual void enterHeader(prepParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(prepParser::HeaderContext *ctx) = 0;

  virtual void enterFooter(prepParser::FooterContext *ctx) = 0;
  virtual void exitFooter(prepParser::FooterContext *ctx) = 0;

  virtual void enterBody(prepParser::BodyContext *ctx) = 0;
  virtual void exitBody(prepParser::BodyContext *ctx) = 0;

  virtual void enterFuncKeyword(prepParser::FuncKeywordContext *ctx) = 0;
  virtual void exitFuncKeyword(prepParser::FuncKeywordContext *ctx) = 0;

  virtual void enterFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext *ctx) = 0;
  virtual void exitFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext *ctx) = 0;

  virtual void enterFuncDef(prepParser::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(prepParser::FuncDefContext *ctx) = 0;

  virtual void enterDeclDef(prepParser::DeclDefContext *ctx) = 0;
  virtual void exitDeclDef(prepParser::DeclDefContext *ctx) = 0;

  virtual void enterProg(prepParser::ProgContext *ctx) = 0;
  virtual void exitProg(prepParser::ProgContext *ctx) = 0;


};

}  // namespace ant
