#include <iostream>
using namespace std;

void printRec(int n) {
    if (n == 0)  // Base case
        return;

    cout << "I love Recursion" << endl;
    printRec(n - 1);  // Recursive call
}

int main() {
    int N;
    cin >> N;
    printRec(N);
    return 0;
}