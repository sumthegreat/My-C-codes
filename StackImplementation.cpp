

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
