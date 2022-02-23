//main program

#include <iostream>
#include <stdio.h>

#include "Context.h"
#include "Lexer.h"
#include "Trie.h"

//-----Utility-----//
std::string leftTrim(const std::string &str, const char* trimChars)
{
  size_t start = str.find_first_not_of(trimChars);
  return (start == std::string::npos) ? "" : str.substr(start);
}

std::string rightTrim(const std::string &str, const char* trimChars)
{
  size_t end = str.find_last_not_of(trimChars);
  return (end == std::string::npos) ? "" : str.substr(0, end + 1);
}

std::string trimString(const std::string &str, const char* trimChars)
{
  return rightTrim(leftTrim(str, trimChars), trimChars);
}

int main()
{
  Context cntxt;
  Lexer lex;
  //Trie tree;
  //tree.insert("add");
  //tree.insert("remv");
  //tree.insert("mov");
  //tree.insert("help");
  //tree.insert("echo");
  //tree.insert("conf");
  std::string userInputStr = "";
  const char* trimChars = " \n\t";
  
  std::cout << ">";
  std::getline(std::cin, userInputStr);
  std::string trimmedStr = trimString(userInputStr, trimChars);
  
  while(trimmedStr != "exit")
  {
    std::vector<std::string> strTokens = lex.tokensFromInput(trimmedStr);
    
    if(strTokens.size() < 1)
    {
      std::cout << "invalid input" << std::endl;
    }
    else
    {
      if(cntxt.echoStatus()) std::cout << "echo " << std::endl;
    }
    
    std::cout << "Command not found." << std::endl;
    
    
    std::cout << ">";
    std::getline(std::cin, userInputStr);
    trimmedStr = trimString(userInputStr, trimChars);
  }
  
  return 0;
}
