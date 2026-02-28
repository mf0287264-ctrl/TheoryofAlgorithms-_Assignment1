#include <iostream>
using namespace std;

void spaces(int n) {
    if (n == 0)
        return;
    cout << " ";
    spaces(n - 1);
}

void stars(int n) {
    if (n == 0)
        return;
    cout << "*";
    stars(n - 1);
}

void pyramid(int n, int row = 1) {
    if (row > n)
        return;

    spaces(n - row);
    stars(2 * row - 1);
    cout << endl;

    pyramid(n, row + 1);
}

int main() {
    int n;
    cin >> n;

    pyramid(n);

    return 0;
}