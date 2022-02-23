#ifndef ANNOTATEDSYNTAXTREE_H
#define ANNOTATEDSYNTAXTREE_H

#include <string>
#include <vector>
#include "Node.h"

class AnnotatedSyntaxTree
{
  private:
    std::vector<Node> nodes;
  public:
    void addNode(Node someNode);
}

#endif
