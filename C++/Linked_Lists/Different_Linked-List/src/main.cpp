
//--linked list (LL) class

#include <iostream>
#include "Node.hpp"

template <typename T>
class LinkedList {

private:

    Node<T>* head;

public:

    LinkedList() : head(nullptr) {}

    // Function to insert a new element at the end of the list
    void insert(T value) {

        Node<T>* newNode = new Node<T>(value);
        if (!head) {
            head = newNode;

        } else {

            Node<T>* current = head;

            while (current->next) {

                current = current->next;
            }

            current->next = newNode;
        }
    }

    // Function to display the elements of the list
    void display() {

        Node<T>* current = head;

        while (current) {

            std::cout << current->data << " ";

            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to delete a specific element from the list
    void remove(T value) {

        if (!head) {

            return;
        }

        if (head->data == value) {

            Node<T>* temp = head;
            head = head->next;
            delete temp;

            return;
        }

        Node<T>* current = head;

        while (current->next && current->next->data != value) {

            current = current->next;
        }

        if (current->next) {

            Node<T>* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Destructor to free memory
    ~LinkedList() {

        Node<T>* current = head;
        Node<T>* next;

        while (current) {
        	
            next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {

    // Create a linked list of integers
    LinkedList<int> intList;

    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.display();

    // Remove an element from the list
    intList.remove(20);
    intList.display();

    return 0;
}
