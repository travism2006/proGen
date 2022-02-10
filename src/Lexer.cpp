#include "Lexer.h"
#include <algorithm>

std::vector<std::string> Lexer::tokensFromInput(const std::string& inString)
{
  std::vector<std::string> tokens;
  std::string tok = "";
  char delim = ' ';
  std::istringstream tokenStream(inString);
  
  while(std::getline(tokenStream, tok, delim))
  {
    tokens.push_back(tok);
  }
  
  return tokens;
}


std::vector<std::string> Lexer::getTokenStream()
{
  return this->tokenStream;
}

bool Lexer::isValidToken(std::string someString)
{
  CmdRegistry cmds;
  if(cmds.isCmd(someStri))return true;
  return false;
}
