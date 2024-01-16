// node struct to represent elements of the linked list

template<typename T>

struct Node {

	T data;
	Node* next;

	// constructor
	Node(T value) : data(value), next(nullptr) {}
	
};
