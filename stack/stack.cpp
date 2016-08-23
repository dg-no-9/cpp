#include "stack.h"

template <class T>
size_t Stack<T>::size() { return count;}

template <class T>
bool Stack<T>::empty() { return count == 0; }

template <class T>
T Stack<T>::pop(){
	if(top != NULL){
		Node* temp = top;
		top = top->next;
		T old_data = temp->data;
		delete(temp);
		count --;
		return old_data;
	}
	return -1;
}

template <class T>
T Stack<T>::push(int item){
	if(count == maximum) return -1;

	Node* newNode = new Node(item);
	newNode->next = top;
	top = newNode;
	count++;
	return 1;
}

template <class T>
T Stack<T>::head(){
	if(top == NULL) return -1;
	return top->data;
}

template <class T>
void Stack<T>::print(){
	Node* temp = top;

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

template <class T>
Stack<T>::~Stack(){
	Node* cur = top;

	while(cur != NULL){
		Node* next = cur->next;
		delete cur;
		cur = next;
	}
	top = NULL;
}

template class Stack<int>;
template class Stack<float>;
template class Stack<char>;
