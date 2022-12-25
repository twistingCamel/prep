
// Generated from prep.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "prepParser.h"


namespace ant {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by prepParser.
 */
class  prepVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by prepParser.
   */
    virtual std::any visitBlockItem(prepParser::BlockItemContext *context) = 0;

    virtual std::any visitBlock(prepParser::BlockContext *context) = 0;

    virtual std::any visitBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext *context) = 0;

    virtual std::any visitBlockNoRecurse(prepParser::BlockNoRecurseContext *context) = 0;

    virtual std::any visitParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext *context) = 0;

    virtual std::any visitParameterPack(prepParser::ParameterPackContext *context) = 0;

    virtual std::any visitParameterSingle(prepParser::ParameterSingleContext *context) = 0;

    virtual std::any visitString(prepParser::StringContext *context) = 0;

    virtual std::any visitBodyStringImplicit(prepParser::BodyStringImplicitContext *context) = 0;

    virtual std::any visitRecurse(prepParser::RecurseContext *context) = 0;

    virtual std::any visitSeparator(prepParser::SeparatorContext *context) = 0;

    virtual std::any visitHeader(prepParser::HeaderContext *context) = 0;

    virtual std::any visitFooter(prepParser::FooterContext *context) = 0;

    virtual std::any visitBody(prepParser::BodyContext *context) = 0;

    virtual std::any visitFuncKeyword(prepParser::FuncKeywordContext *context) = 0;

    virtual std::any visitFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext *context) = 0;

    virtual std::any visitFuncDef(prepParser::FuncDefContext *context) = 0;

    virtual std::any visitDeclDef(prepParser::DeclDefContext *context) = 0;

    virtual std::any visitProg(prepParser::ProgContext *context) = 0;


};

}  // namespace ant
