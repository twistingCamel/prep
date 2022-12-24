
// Generated from ./prep.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "prepListener.h"


namespace ant {

/**
 * This class provides an empty implementation of prepListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  prepBaseListener : public prepListener {
public:

  virtual void enterBlockItem(prepParser::BlockItemContext * /*ctx*/) override { }
  virtual void exitBlockItem(prepParser::BlockItemContext * /*ctx*/) override { }

  virtual void enterBlock(prepParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(prepParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext * /*ctx*/) override { }
  virtual void exitBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext * /*ctx*/) override { }

  virtual void enterBlockNoRecurse(prepParser::BlockNoRecurseContext * /*ctx*/) override { }
  virtual void exitBlockNoRecurse(prepParser::BlockNoRecurseContext * /*ctx*/) override { }

  virtual void enterParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext * /*ctx*/) override { }
  virtual void exitParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext * /*ctx*/) override { }

  virtual void enterParameterPack(prepParser::ParameterPackContext * /*ctx*/) override { }
  virtual void exitParameterPack(prepParser::ParameterPackContext * /*ctx*/) override { }

  virtual void enterParameterSingle(prepParser::ParameterSingleContext * /*ctx*/) override { }
  virtual void exitParameterSingle(prepParser::ParameterSingleContext * /*ctx*/) override { }

  virtual void enterString(prepParser::StringContext * /*ctx*/) override { }
  virtual void exitString(prepParser::StringContext * /*ctx*/) override { }

  virtual void enterBodyStringImplicit(prepParser::BodyStringImplicitContext * /*ctx*/) override { }
  virtual void exitBodyStringImplicit(prepParser::BodyStringImplicitContext * /*ctx*/) override { }

  virtual void enterRecurse(prepParser::RecurseContext * /*ctx*/) override { }
  virtual void exitRecurse(prepParser::RecurseContext * /*ctx*/) override { }

  virtual void enterSeparator(prepParser::SeparatorContext * /*ctx*/) override { }
  virtual void exitSeparator(prepParser::SeparatorContext * /*ctx*/) override { }

  virtual void enterHeader(prepParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(prepParser::HeaderContext * /*ctx*/) override { }

  virtual void enterFooter(prepParser::FooterContext * /*ctx*/) override { }
  virtual void exitFooter(prepParser::FooterContext * /*ctx*/) override { }

  virtual void enterBody(prepParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(prepParser::BodyContext * /*ctx*/) override { }

  virtual void enterFuncKeyword(prepParser::FuncKeywordContext * /*ctx*/) override { }
  virtual void exitFuncKeyword(prepParser::FuncKeywordContext * /*ctx*/) override { }

  virtual void enterFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext * /*ctx*/) override { }
  virtual void exitFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext * /*ctx*/) override { }

  virtual void enterFuncDef(prepParser::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(prepParser::FuncDefContext * /*ctx*/) override { }

  virtual void enterDeclDef(prepParser::DeclDefContext * /*ctx*/) override { }
  virtual void exitDeclDef(prepParser::DeclDefContext * /*ctx*/) override { }

  virtual void enterProg(prepParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(prepParser::ProgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace ant
