
// Generated from prep.g4 by ANTLR 4.11.1

#pragma once


#include "antlr4-runtime.h"


namespace ant {


class  prepLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, Number = 5, Ellipses = 6, Identifier = 7, 
    WS = 8, Eof = 9, CommentBlock = 10, CommentLine = 11, Define = 12, Recurse = 13, 
    Separator = 14, Header = 15, Footer = 16, Body = 17, String = 18, StringFuncKeyword = 19
  };

  explicit prepLexer(antlr4::CharStream *input);

  ~prepLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace ant
