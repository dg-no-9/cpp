#include <iostream>

using namespace std;

class LinkedList{
	struct Node{
		Node* next;
		int data;
		Node(int data){
			this->data = data;
		}
	};

	public:			
		Node* head;
		LinkedList(){
			head = NULL;
		}

		LinkedList(int* number, int size){
			int i = 0;
			while(i < size ){
				insert_behind(number[i]);
				i++;
			}
		}

		void insert_front(int data){
			Node* n = new Node(data); //Create New Node with data
			n->next = this->head; //Insert before head, make head as n's next.
			this->head = n;		//Update actal head as n.
		}
		
		void insert_behind(int data){
			Node* n = head;
			if(n == NULL){
				head = new Node(data);
			}
			else{
				while(n->next != NULL){
					n = n->next;
				}
				n->next = new Node(data);
			}
		}

		void print(){
			Node* current = head;
			while(current != NULL){
				cout << current->data;
				if(current->next != NULL) cout << "->";
				current = current->next;
			}
			cout << endl;
		}	
};

