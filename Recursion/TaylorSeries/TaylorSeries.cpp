#include <iostream>

using namespace std;

// Taylor series: e ** x = 1 + x / 1 + x ** 2 / 2! + x ** 3 / 3! + ... + n terms
// 

double e(int x, int n) {
    static double p = 1, f = 1;
    double r;
        
    if (n == 0) return 1;

    r = e(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;

}

// taylor series using horner rule
double eHorner(int x, int n) {
    static double s;

    if (n == 0) return s;

    s = 1 + x * s / n;

    return eHorner(x, n - 1);
}

// taylor series using iterative method
double eIterative(int x, int n) {
    double s = 1;
    int i;
    double numerator = 1;
    double denominator = 1;

    for (i = 1; i <= n; i++) {
        numerator *= x;
        denominator *= i;

        s += numerator / denominator;
    }

    return s;
}

int main()
{
    cout << e(1, 10) << endl;   // 2.71828 

    cout << "horners rule " << eHorner(1, 10) << endl;   // 2.71828 

    cout << "horners rule iterative method " << eIterative(1, 10);   // 2.71828 
    return 0;
}

