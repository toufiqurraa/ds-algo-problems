#include <iostream>

using namespace std;

void treeRecursion(int n) {
    if (n > 0) {
        cout << n << " ";

        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

int main()
{
    treeRecursion(3);   // output: 3 2 1 1 2 1 1

    return 0;
}

