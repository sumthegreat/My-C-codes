// StackImplementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int top = -1;

void push(int stack[], int x, int n) {
	if (top == n - 1)
		cout << "Stack Overflow.\n";
	else
	{
		top++;
		stack[top] = x;
	}

}

void pop() {
	if (top == -1)
		cout << "Stack underflow.";
	else {
		top--;
	}
}

int size() {
	return top + 1;
}

int topElement(int stack[]) {
	if (top == -1)
		cout << "\nStack is currently empty.";
	else
		return stack[top];
}


int main()
{
	int n, x, stack[100],k;
	cout << "\t\t\t\tThis is a program implementing a stack.\n\n\tEnter the max size of the stack to be made.>>";
	cin >> n;
	cout << "\n\nEnter the serial number of the operation you want to perform from the following:";
	
	while (true) {
		cout << "\n\n\n\n1.Enter an element in the stack.\n2.Remove the top element from stack.\n3.Display the topmost element in the stack.\n4.Display the size of the stack.\n5.Exit.\n";
		cout << "\tEnter the serial number.>>>>>>>>";
		cin >> k;
		switch (k) {
		case 1: cout << "\n\tEnter the element to be added>>>>>";
			cin >> x;
			push(stack, x, n);
			break;
		case 2: pop();
			cout << "\nTopmost element removed successfully from the stack.";
			break;
		case 3: cout << "\nThe element at top of stack is>>>>";
			cout << topElement(stack); break;
		case 4: cout << "\nSize of the filled stack is>>>>";
			cout << size(); break;
		case 5:cout << "\nSee you again soon.....";
			break;
		default: cout << "\nInvalid choice.";

		}
		if (k == 5)
			break;

	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
