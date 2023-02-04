#include <iostream>

using namespace std;

void funcB(int n);

void funcA(int n) {
    if (n > 0) {
        cout << n << " ";

        funcB(n - 1);
    }
}

void funcB(int n) {
    if (n > 1) {
        cout << n << " ";
        
        funcA(n / 2);
    }
}

int main()
{
    funcA(20);  // output: 20 19 9 8 4 3 1
}
