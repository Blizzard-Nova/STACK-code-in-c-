#include <iostream>
using namespace std;
#define SIZE 7
class Stack
{
	int top;
public:
	Stack()
	{
	
		top = -1;
	}
	int arr[SIZE];
	bool isempty();
	bool push(int x);
	int pop();
	int peek();
	void display();
	

};
bool Stack::isempty()
{
	return(top < 0);
}
bool Stack::push(int x)
{
	if (top >= SIZE - 1)
	{
		cout << "Stack overflow \n";
		return false;
	}
	else
	{
		arr[++top] = x;
		//cout << x << "  is pushed inside the stack \n";
		return true;
	}
}
int Stack::pop()
{
	int x;
	if (top < 0)
	{
		cout << "Stack is empty \n";
		return 0;
	}
	else
	{
		x = arr[top--];
		return x;
	}

	//cout <<x<< " is poped from the stack \n";

}
int Stack::peek()
{
	int x;
	if (top < 0)
	{
		cout << "Stack is empty \n";
		return 0;
	}
	else
		x = arr[top];
	return x;
}


void Stack::display()
{
	Stack s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while (!s.isempty())
	{
		cout << s.peek() << endl;
		s.pop();
	}

	
}
int main()
{
	Stack stack;
	stack.display();
	return 0;
}