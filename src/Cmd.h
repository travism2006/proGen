#ifndef CMD_H
#define CMD_H

#include <string>
#include "Context.h"

class Cmd
{
public:
  virtual void execOp(std::string inString, Context someContext) = 0;
};

#endif
