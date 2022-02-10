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
  std::vector<std::string> tokenFromInput(const std::string& inString);
  std::vector<std::string> getTokenStream();
  bool isValidToken(std::string someString);
};
#endif
