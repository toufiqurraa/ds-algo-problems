#include <iostream>

using namespace std;

// sum of first n numbers
// sum(n) = 1 + 2 + 3 + ... + (n - 1) + n
// sum(n) = sum(n - 1) + n

int func(int n) {
	if (n == 0) {
		return 0;
	}

	else {
		return func(n - 1) + n;
	}

}

// using for loop
int funcN(int n) {
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}

int main()
{
	int sum = func(7);

	cout << sum << endl;

	int sumN = funcN(5);

	cout << sumN << endl;

	return 0;
}
