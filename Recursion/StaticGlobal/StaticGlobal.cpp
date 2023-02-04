#include <iostream>

using namespace std;

int func(int n) {
    static int x = 0;

    if (n > 0) {
        x++;

        return func(n - 1) + x;
    }

    return 5;
}

int main()
{
    int r;

    r = func(5);

    cout << r;  // output: 30

    return 0;
}

