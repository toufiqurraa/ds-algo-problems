#include <iostream>

using namespace std;

// factorial(n) = 1 * 2 * 3 * 4 * 5 * ... * n
// factorial(n) = factorial(n - 1) * n

int factorial(int n) {
	if (n == 0) return 1;
	
	return factorial(n - 1) * n;
}

int factorialLoop(int n) {
	int product = 1;

	for (int i = 1; i <= n; i++) {
		product *= i;
	}

	if (n == 0) return 1;

	return product;
}

int main()
{
	int result = factorial(5);

	cout << result << endl;

	int resultLoop = factorialLoop(0);

	cout << resultLoop << endl;

	return 0;
}