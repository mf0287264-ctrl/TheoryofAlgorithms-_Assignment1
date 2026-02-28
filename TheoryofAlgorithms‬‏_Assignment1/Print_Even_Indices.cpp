#include <iostream>
using namespace std;

void printEvenReversed(int arr[], int index) {
    if (index < 0) return;
    if (index % 2 == 0) cout << arr[index] << " ";
    printEvenReversed(arr, index - 1);
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    printEvenReversed(A, N - 1);
    cout << endl;
    return 0;
}