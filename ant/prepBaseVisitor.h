
// Generated from prep.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"
#include "prepVisitor.h"


namespace ant {

/**
 * This class provides an empty implementation of prepVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  prepBaseVisitor : public prepVisitor {
public:

  virtual std::any visitBlockItem(prepParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(prepParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItemNoRecurse(prepParser::BlockItemNoRecurseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockNoRecurse(prepParser::BlockNoRecurseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterPackWithEllipses(prepParser::ParameterPackWithEllipsesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterPack(prepParser::ParameterPackContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterSingle(prepParser::ParameterSingleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(prepParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBodyStringImplicit(prepParser::BodyStringImplicitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecurse(prepParser::RecurseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSeparator(prepParser::SeparatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHeader(prepParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFooter(prepParser::FooterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(prepParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncKeyword(prepParser::FuncKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncKeywordNoRecurse(prepParser::FuncKeywordNoRecurseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(prepParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclDef(prepParser::DeclDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg(prepParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace ant
