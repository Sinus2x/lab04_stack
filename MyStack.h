#pragma once
template<typename T>
class MyStack {
private:
	struct Node {
		T value;
		Node* next;
	};

	Node* top;

public:
	inline MyStack() {top = nullptr;}
	
	void push(T val) {
		Node* node = new Node;
		node->value = val;
		node->next = top;
		top = node;
	}

	T pop() {
		if (!is_empty()) {
			T val = top->value;
			Node* ptr = top->next;
			delete top;
			top = ptr;
			return val;
		}
		else std::cout << "\nСтек пуст\n";
	}

	inline bool is_empty() { return (top == nullptr); }

	void print_stack() {
		std::cout << '\n';
		while (!(is_empty())) std::cout << pop() << ' ';
	}

	~MyStack() {
		while (!is_empty()) {this->pop();}
		std::cout << "\nДеструктор отработал как часы\n";
	}


};
void multipliers(int q, MyStack<int>& a);

template<class T>
void reverse(MyStack<T>& a, MyStack<T>& b) {
	std::cout << '\n';
	while (!(a.is_empty())) {
		T temp = a.pop();
		std::cout << temp << ' ';
		b.push(temp);
	}
	b.print_stack();
}
