#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int n = SIZE;
    int qntNegative = 0;

    while(n--) {
        int x;
        cin >> x;
        qntNegative += (x < 0);
    }

    cout << qntNegative << '\n';

    return 0;
}
