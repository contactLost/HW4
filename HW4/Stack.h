//Code from 246 ADT stack: Link-based implementation.
// ADT stack: Link-based implementation.

#include "Node.h"
template < class ItemType>
class Stack 
{
public:

	Stack();
	Stack(const Stack<ItemType>& aStack);
	virtual ~Stack();


	bool isEmpty() const;
	bool push(const ItemType& newItem);
	bool pop();
	ItemType peek() const;
private:
	Node<ItemType>* topPtr; 
	

}; 

