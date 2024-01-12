// program for a linked list

#include <iostream>
#include "Node.hpp"

// create the linked list class

class LinkedList {

private:

	Node* head;
	Node* tail;
	int length;

public:

	LinkedList(int value) {

		// create the 1st node

		Node* newNode = new Node(value);

		head = newNode;

		tail = newNode;

		length = 1;
	}

	~LinkedList() {

		Node* temp = head;

		while(head) {

			head = head -> next;
			delete temp;
			temp = head;
		}

	}

	// method for printing list

	void printList() {

		Node* temp = head;

		while (temp != nullptr) {

			std::cout<<temp -> value<<"\n";
			temp = temp -> next;

		}

	}

	void getHead() {

		if(head == nullptr) {

			std::cout<<"Head: nullptr\n";


		} else {

			std::cout<<"Head: "<<head -> value<<"\n";
		}

	}

	void getTail() {

		if(tail == nullptr) {

			std::cout<<"Tail: nullptr\n";

		} else {

			std::cout<<"Tail: "<<tail -> value<<"\n";
		}
	}

	void getLength() {

		std::cout<<"Length: "<<length<<"\n";
	}

};


int main() {

	// make a node with value 4

	LinkedList* myLinkedList = new LinkedList(4);

	myLinkedList -> getHead();
	myLinkedList -> getTail();
	myLinkedList -> getLength();

	// print the linked list

	std::cout<<"Linked List:\n";

	myLinkedList -> printList();

}












