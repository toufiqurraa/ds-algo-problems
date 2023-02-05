#include <iostream>

using namespace std;

// 2 ** 8 = 2 * 2 * 2 * 2 * 2 * 2 * 2 * 2
// 2 ** 8 = 2 ** 7 * 2

// pow(m, n) = m, m, m, ... ... (n - 1) * m
// pow(m, n) = pow(m, n - 1) * m

//int pow(int m, int n) {
//	if (n == 0) return 1;

//	return pow(m, n - 1) * m;
//} this implementation has more multiplication, more optimized implementation is possible

// 2 ** 8 == ( 2 * 2) ** 4
// 2 ** 9 == 2 * ( 2 * 2) ** 4

int pow(int m, int n) {
	if (n == 0) return 1;

	if (n % 2 == 0) return pow(m * m, n / 2);
	else return m * pow(m * m, (n - 1) / 2);
}

int powLoop(int m, int n) {
	if (n == 0) return 1;

	int product = 1;

	for (int i = 0; i < n; i++) {
		product *= m;
	}

	return product;
}

int main()
{
	int result = pow(2, 3);

	cout << result << endl;

	int resultLoop = powLoop(2, 9);

	cout << resultLoop << endl;

	return 0;
}
