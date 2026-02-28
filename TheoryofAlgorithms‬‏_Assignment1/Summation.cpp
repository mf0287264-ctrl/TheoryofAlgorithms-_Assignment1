#include <iostream>
using namespace std;

long long sumArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[0] + sumArray(arr + 1, n - 1);
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << sumArray(A, N) << endl;
    return 0;
}