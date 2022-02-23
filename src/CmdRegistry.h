#ifndef CMDREGISTRY_H
#define CMDREGISTRY_H

#include "Trie.h"

class CmdRegistry
{
public:
  void printCmdList();
  bool isCmd(std::string inStr);
  CmdRegistry();
private:
  Trie *cmdsTree;
};
#endif
