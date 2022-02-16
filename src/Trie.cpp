#include "Trie.h"

Trie::Trie()
{
  this->isLeaf = false;
  for(int i = 0; i < 128; i++)
  {
    this->characterArr[i] = NULL;
  }
}

void Trie::insert(std::string keyNewWord)
{
  //start from root
  Trie* curr = this;
  for(int i = 0; i < keyNewWord.length(); i++)
  {
    if(curr->characterArr[i] == NULL)
      curr->characterArr[keyNewWord[i]] = new Trie();
    
    //goto next node
    curr = curr->characterArr[keyNewWord[i]];
  }
  curr->isLeaf = true;
}

bool Trie::haveChildren(Trie const* curr)
{
  for(int i = 0; i < 128; i++)
  {
    //see if char, if so, then has children
    if(curr->characterArr[i]) return true;
  }
  return false;
}

bool Trie::searchTrie(std::string keySomeWord)
{
  //if tree is empty
  if (this == NULL) return false;
  
  Trie* curr = this;
  for(int = i; i < keySomeWord.length(); i++)
  {
    curr = curr->characterArr[keyNewWord[i]];
    if (curr == NULL) return false;
  }
  
  return curr->isLeaf;
}
