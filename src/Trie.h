#ifndef TRIE_H
#define TRIE_H

#include <string>

class Trie
{
  public:
    Trie();
    void insert(std::string);
    bool searchTrie(std::string);
    bool haveChildren(Trie const*);
  private:
    bool isLeaf;
    Trie* characterArr[128];
};
#endif
