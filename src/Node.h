#ifndef NODE_H
#define NODE_H

#include <string>

class Node
{
  public:
    void addNode(Node someNode);
  private:
    std::string annotation;
    Node *left;
    Node *right;
};


#endif
