#ifndef TREE_NODE 
#define TREE_NODE

template<class ItemType> 
class LinkedTreeNode{ 
private: 
    ItemType item;  
    LinkedTreeNode<ItemType>* leftChildPtr;  
    LinkedTreeNode<ItemType>* rightChildPtr; 
public: 
    LinkedTreeNode();
    LinkedTreeNode(const ItemType& newData);
    LinkedTreeNode(const ItemType& newData, LinkedTreeNode<ItemType>* left, LinkedTreeNode<ItemType>* right);

    bool isLeaf() const;

    ItemType getItem() const;
    LinkedTreeNode<ItemType>* getLeftChildPtr() const;
    LinkedTreeNode<ItemType>* getRightChildPtr() const;

    void setItem(const ItemType& newData);
    void setLeftChildPtr(LinkedTreeNode<ItemType>* newLeftChildPtr);
    void setRightChildPtr(LinkedTreeNode<ItemType>* newRightChildPtr);
};
#include "linkedtreenode.cpp"
#endif
