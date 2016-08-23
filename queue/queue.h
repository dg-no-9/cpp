#include <iostream>
using namespace std;


template <class T>
class Queue{
	private:
		struct Node{
			T data;
			Node* next;
			Node(T item): data(item), next(NULL){}
		};
		Node* front;
		Node* back;
		size_t count;
		size_t max_size;

	public:
		Queue(size_t max):front(NULL), back(NULL),count(0), max_size(max){}
		int enqueue(T item);
		T dequeue();
		bool empty();
		size_t size();
		T first();
		void print();
		~Queue();
};
