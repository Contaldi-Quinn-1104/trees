template<class ItemType> 
LinkedTreeNode<ItemType>::LinkedTreeNode(){
    leftChildPtr = nullptr;
    rightChildPtr = nullptr;
}
template<class ItemType> 
LinkedTreeNode<ItemType>::LinkedTreeNode(const ItemType& newData){
    item = newData;
    leftChildPtr = nullptr;
    rightChildPtr = nullptr;
}
template<class ItemType> 
LinkedTreeNode<ItemType>::LinkedTreeNode(const ItemType& newData, LinkedTreeNode<ItemType>* left, LinkedTreeNode<ItemType>* right){
    item = newData;
    leftChildPtr = left;
    rightChildPtr = right;
}
template<class ItemType> 
void LinkedTreeNode<ItemType>::setItem(const ItemType& newData){
    item = newData;
}
template<class ItemType> 
ItemType LinkedTreeNode<ItemType>::getItem() const{
    return item;
}

template<class ItemType> 
bool LinkedTreeNode<ItemType>::isLeaf() const{
    return leftChildPtr == nullptr && rightChildPtr == nullptr;
}

template<class ItemType> 
LinkedTreeNode<ItemType>* LinkedTreeNode<ItemType>::getLeftChildPtr() const{
    return leftChildPtr;
}
template<class ItemType> 
LinkedTreeNode<ItemType>* LinkedTreeNode<ItemType>::getRightChildPtr() const{
    return rightChildPtr;
}

template<class ItemType> 
void LinkedTreeNode<ItemType>::setLeftChildPtr(LinkedTreeNode<ItemType>* newLeftChildPtr){
    leftChildPtr = newLeftChildPtr;
}
template<class ItemType> 
void LinkedTreeNode<ItemType>::setRightChildPtr(LinkedTreeNode<ItemType>* newRightChildPtr){
    rightChildPtr = newRightChildPtr;
}
