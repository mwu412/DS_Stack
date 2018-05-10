class Stack {
private:
	char* stack;
	int capacity;
	int top;
	void Double() {
		capacity *= 2;
		char* newstack = new char[capacity];
		for (int i = 0; i < capacity / 2; i++) {
			newstack[i] = stack[i];
		}
		delete[]stack;
		stack = newstack;
	}
public:
	Stack() {
		stack = new char[capacity];
		capacity = 1;
		top = -1;
	}
	bool Empty() {
		return top == -1;
	}
	int Top() {
		if (!Empty()) return stack[top];
	}
	void Push(char push) {
		if (top == capacity - 1) Double();
		stack[++top] = push;
	}
	void Pop() {
		if (!Empty()) top--;
	}
};
