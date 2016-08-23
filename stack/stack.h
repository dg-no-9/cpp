#include<iostream>
using namespace std;


template <class T> class Stack{
	
	private:	
		struct Node{
				T data;
				struct Node* next;
				Node(T item){
					this->data = item;
					this->next = NULL;
				}
		};

		Node* top;
		size_t count;
		size_t maximum;
	public:
		Stack(size_t max): top(NULL), maximum(max), count(0){}
		
		size_t size();
		
		bool empty();

		T pop();

		T push(int item);

		T head();
		

		void print();

		~Stack();
};

