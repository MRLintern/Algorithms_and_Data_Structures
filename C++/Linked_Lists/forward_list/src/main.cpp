// program for single linked list using forward_list

#include <iostream>
#include <forward_list>

int main() {

	// create linked list

	const std::forward_list<double> list {3.14, 2.72, 0, 42, -1};

	// iterate through the list to show values

	for (const auto value : list) {

		std::cout<<value<<"\n";
	}
}
