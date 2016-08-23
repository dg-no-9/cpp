#include "queue.h"

template <class T>
int Queue<T>::enqueue(T item){

	if(count == max_size) return -1;

	Node* newNode = new Node(item);
	if(empty()){
		front = newNode;
	}
	else{
		back->next = newNode;
	}
	back = newNode;
	count++;
	cout << "Front:" << front->data << " Back:" << back->data << endl;
	return 1;
}

template <class T>
T Queue<T>::dequeue(){
	if(empty()) return T();

	Node* temp = front;
	T data = temp->data;
	delete temp;
	front = front->next;
	return data;
}

template <class T>
bool Queue<T>::empty(){
	return count == 0;
}

template <class T>
size_t Queue<T>::size(){
	return count;
}

template <class T>
T Queue<T>::first(){
	return front->data;
}

template <class T>
void Queue<T>::print(){
	Node* temp = front;
	while(temp != NULL){
		cout << temp->data;
		cout << " ";
		temp = temp->next;
	}
	cout << endl;
}

template <class T>
Queue<T>::~Queue(){
	Node* temp;

	while(front != NULL){
		temp = front;
		delete temp;
		front = front->next;
	}
}

template class Queue<int>;
template class Queue<char>;
template class Queue<float>;
