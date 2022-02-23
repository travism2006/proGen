#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include <vector>
#include "Trie.h"
#include "Lexer.h"

class Context
{
public:
  std::vector<std::string> getTokenStream();
  void printCmdList();
  bool echoStatus();
  void setEcho(bool echoVal);
  bool confirmStatus();
  void setConfirm(bool confirmVal);
private:
  std::string currLang;
  bool echoBack;
  bool confirmBack;
  Trie allCmds;
  void initCmds();
};

#endif
