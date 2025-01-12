

#pragma once
template <class T>
class Stack
{
public:
	Stack(int = 10) ;
	~Stack() { delete [] stackPtr ; }
	int push(const T&);
	int pop(T&) ;  // pop an element off the stack
	int isEmpty()const { return top == -1 ; }
	int isFull() const { return top == size - 1 ; }
private:
	int size ;  // Number of elements on Stack
	int top ;
	T* stackPtr ;
} ;

//constructor with the default size 10
template <class T>
Stack<T>::Stack(int s)
{
	size = s > 0 && s < 1000 ? s : 10 ;
	top = -1 ;  // initialize stack
	stackPtr = new T[size] ;
}
 // push an element onto the Stack
template <class T>
int Stack<T>::push(const T& item)
{
	if (!isFull())
	{
		stackPtr[++top] = item ;
		return 1 ;  // push successful
	}
	return 0 ;  // push unsuccessful
}

// pop an element off the Stack
template <class T>
int Stack<T>::pop(T& popValue)
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--] ;
		return 1 ;  // pop successful
	}
	return 0 ;  // pop unsuccessful
}
