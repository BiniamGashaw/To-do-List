//Biniam Gashaw
//Date: 9/29/23
//purpose: This header file is set to the functions prototypes of the node classs for the use of linked list implementation.

#ifndef NODE
#define NODE

template<class ItemType>
class Node{
	ItemType item; // A data item
	Node<ItemType>* next; // Points to next node
public:
	Node();
	Node(const ItemType& anItem);
	Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
	void setItem(const ItemType& anItem);
	void setNext(Node<ItemType>* nextNodePtr);
	ItemType getItem() const;
	Node<ItemType>* getNext() const;
}; 

#include "node.cpp"
#endif