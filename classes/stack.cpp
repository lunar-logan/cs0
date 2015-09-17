#include <iostream>
using namespace std;

/**
	Stack class
*/

class Stack {
public:
	const static int MAX_SIZE = 256; // Max stack size, this is a constant

	// Constructor
	Stack() {
		head = -1; // Implies that the stack is empty at the beginning
	}

	// This function adds a new element on the top of the stack
	void push(int);

	// This function retrieves and removes the top element from the stack
	int pop(void); 

private:
	int container[MAX_SIZE];
	int head;

}; 

void Stack::push(int e) {
	head = head + 1;
	if (head < MAX_SIZE) { // Check if the stack has some place to acomodate new element
		container[head] = e;
	}
}

int Stack::pop() {
	if (head >= 0) { // Make sure that the stack is not empty, ie head >-1
		int top = container[head];
		head = head - 1;
		return top;
	}
	return -1; // For empty stack just return -1 as a default (Very bad idea though)
}

int main() {
	Stack s;
	cout << s.pop() << " \n";
	s.push(1);
	s.push(2);
	cout << s.pop() << " \n"; // Guess the output!
	return 0;
}