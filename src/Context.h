#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include <vector>
class Context
{
public:
  std::vector<std::string> getTokenStream();
  void printCmdList();
  bool echoStatus();
  bool confirmStatus();
private:
  std::string currLang;
};
#endif
