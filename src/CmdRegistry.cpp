#include <iostream>
#include "CmdRegistry.h"

void CmdRegistry::printCmdList()
{
  std::cout << "" << std::endl;
  
  std::cout << "\tCCG Commands\t\tDescription" << std::endl;
  std::cout << "\t------------\t\t------------------------------------" << std::endl;
  std::cout << "\tadd\t\tfor adding/creating new features & files" << std::endl;
  std::cout << "\tremv\t\tfor removing features & files" << std::endl;
  std::cout << "\tmov\t\tfor moving features & files" << std::endl;
  
  std::cout << "" << std::endl;
}

bool CmdRegistry::isCmd(std::string someString)
{
  return this->cmdsTree.isCmd(someString);
}

CmdRegistry::CmdRegistry()
{
  this->cmdsTree = new Trie();
}
