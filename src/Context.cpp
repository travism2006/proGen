#include <iostream>

#include "Context.h"
#include "Lexer.h"
#include "CmdRegistry.h"

std::vector<std::string> Context::printCmdList()
{
  Lexer lx;
  return lx.getTokenStream();
}

void Context::printCmdList()
{
  CmdRegistry cmds;
  cmds.printCmdList();
}
