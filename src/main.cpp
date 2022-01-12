//main program

#include <iostream>
#include <stdio.h>

#include "AddCls.h"
#include "Context.h"
#include "Lexer.h"

int main()
{
  Context cntxt;
  
  std::cout << ">";
  std::string userInputStr = "";
  std::getline(std::cin, userInputStr);
  
  cntxt.printCmdList();
  
  Lexer lex;
  std::cout << lex.parseIn(userInputStr) << std::endl;
  std::vector<std::string> strTokens;
  strTokens = lex.tokensFromInput(userInputStr);
  std::cout << strTokens.size() << std::endl;
  return 0;
}
