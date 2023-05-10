#ifndef LINKED_BTREE 
#define LINKED_BTREE

#include <algorithm>
using namespace std;

#include "linkedtreenode.h"
#include "tree.h"

template<class ItemType> 
class LinkedBTree: public TreeInterface<ItemType>{ 
private: 
protected:
  LinkedTreeNode<ItemType>* rootPtr;
  int getHeightHelper(LinkedTreeNode<ItemType>* subTreePtr) const;
  int getNumberOfNodesHelper(LinkedTreeNode<ItemType>* subTreePtr) const;
  LinkedTreeNode<ItemType>* balancedAdd(LinkedTreeNode<ItemType>* subTreePtr, LinkedTreeNode<ItemType>* newNodePtr);
  LinkedTreeNode<ItemType>* removeValue(LinkedTreeNode<ItemType>* subTreePtr, const ItemType target, bool& isSuccessful);
  LinkedTreeNode<ItemType>* moveValuesUpTree(LinkedTreeNode<ItemType>* subTreePtr);
  LinkedTreeNode<ItemType>* findNode(LinkedTreeNode<ItemType>* treePtr, const ItemType& target, bool& isSuccessful) const;
  void destroyTree(LinkedTreeNode<ItemType>* subTreePtr);
public:
  LinkedBTree();

  bool isEmpty() const;
  int getHeight() const;
  int getNumberOfNodes() const;
  ItemType getRootData() const;
  bool add(const ItemType& newData); 
  bool remove(const ItemType& data); 
  void clear();
  bool contains(const ItemType& anEntry) const;

  ~LinkedBTree();
};
#include "linkedbtree.cpp"
#endif
