#include <iostream>

#include "Context.h"
#include "Lexer.h"
#include "CmdRegistry.h"

void Context::initCmds()
{
  this->allCmds.insert("add");
  this->allCmds.insert("remv");
  this->allCmds.insert("mov");
  this->allCmds.insert("create");
  this->allCmds.insert("eval");
  this->allCmds.insert("echo");
  this->allCmds.insert("confirm");
}

std::vector<std::string> Context::getTokenStream(Lexer lx)
{
  return lx.getTokenStream();
}

 void Context::printCmdList()
{
  CmdRegistry cmds;
  cmds.printCmdList();
}

bool Context::echoStatus()
{
  return this->echoBack;
}

void Context::setEcho(bool echoVal)
{
  this->echoBack = echoVal;
}

bool Context::confirmStatus()
{
  return this->confirmBack;
}

void Context::setConfirm(bool confirmVal)
{
  this->confirmBack = confirmVal;
}
