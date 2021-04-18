#include "MyStack.h"
void multipliers(int q, MyStack<int>& a) {
	while (q != 1) {
		int i = 2;
		while (i <= int(q)) {
			if (q % i == 0) {
				a.push(i);
				break;
			}
			i++;
		}
		q /= i;
	}
}

