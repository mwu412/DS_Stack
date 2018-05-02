#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
	T * stack;
	int capacity;
	int top;
public:
	Stack(int capacity = 10) {
		stack = nullptr;
		this->capacity = capacity;
		top = -1;
	}
	bool Empty() {
		return top == -1;
	}
	T&¡@Top() {
		if(!Empty()) return stack[top];
	}
	void Push(const T& push) {
		if (top == capacity - 1) capacity *= 2;
		stack[++top] = push;
	}
	bool Pop() {
		if (Empty()) return false;
		top--;
	}
};

int main() {
	Stack<int> s(5);
	int k = 5;
	while (k--) {
		s.Push(k);
	}
	for (int i = 0; i < 5; i++) {
		cout << s.Top() << endl;
		s.Pop();
	}

	system("pause");
	return 0;
}