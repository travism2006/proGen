#include "Lexer.h"
#include <algorithm>

int Lexer::parseIn(std::string inString)
{
  for(std::string::iterator it=inString.begin(); it!=inString.end(); ++it)
  {
    std::cout << *it;
    if(*it==' ')
      std::cout << "" << std::endl;
  }
  std::cout<< '\n';
  int x = std::count(inString.begin(),inString.end(), ' ');
  if(x >= 1)
    return x;
  return -1;
}

std::vector<std::string> Lexer::tokensFromInput(std::string inString)
{
  std::vector<std::string> currTokens;
  std::string builder = "";
  for(int i = 0; i < inString.length(); ++i)
  {
    if(inString[i]==' ')
    {
      currTokens.push_back(builder);
      builder = "";
    }
    else
    {
      builder.push_back(inString[i]);
    }
  }
  return currTokens;
}


std::vector<std::string> Lexer::getTokenStream()
{
  return this->tokenStream;
}
