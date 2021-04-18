#include <iostream>
#include "MyStack.h"
int main() {
	setlocale(LC_ALL, "Russian");
	MyStack<int> stack, reversed;
	multipliers(54, stack);
	reverse(stack, reversed);
	return 0;
}
