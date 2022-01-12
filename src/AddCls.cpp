#include <iostream>
#include <stdio.h>
#include "AddCls.h"
#include "Context.h"

void AddCls::setClassName(const char* aName, Context someContext)
{
  std::cout << "Class file '" << aName << "' will be created" << "\n";
  FILE *newTxtFile_andExt;
  newTxtFile_andExt = fopen(aName, "w");
  if (newTxtFile_andExt!=NULL)
  {
    fprintf(newTxtFile_andExt, aName);
    fclose(newTxtFile_andExt);
  }
}

void AddCls::execOp(std::string inString, Context someContext)
{
  std::cout << "got execOp working!" << "\n";
}
