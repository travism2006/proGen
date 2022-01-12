#ifndef ADDCLS_H
#define ADDCLS_H

#include "Cmd.h"
#include "Context.h"
#include <string>
class AddCls: public Cmd
{
private:
  std::string newClassName;
public:
  void execOp(std::string inString, Context someContext);
  void setClassName(const char* aName, Context someContext);
};
#endif
