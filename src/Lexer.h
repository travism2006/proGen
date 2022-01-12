#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <iostream>
#include <vector>
class Lexer
{
private:
  int sizeIn;
  std::vector<std::string> tokenStream;
public:
  int parseIn(std::string inString);
  std::vector<std::string> tokenFromInput(std::string inString);
  std::vector<std::string> getTokenStream();
};
#endif
