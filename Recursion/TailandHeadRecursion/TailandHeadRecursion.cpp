#include <iostream>

using namespace std;

void tailRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        tailRecursion(n - 1);
    }
}

void headRecursion(int n) {
    if (n > 0) {
        headRecursion(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int x = 3;

    tailRecursion(3);   // output: 3 2 1
    cout << endl;
    headRecursion(3);   // output: 1 2 3

    return 0;
}
