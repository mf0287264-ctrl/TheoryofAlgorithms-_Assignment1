#include <iostream>
using namespace std;


int maxInArray(int arr[], int n) {
    if (n == 1) return arr[0];         
    int maxRest = maxInArray(arr + 1, n - 1); 
    return (arr[0] > maxRest) ? arr[0] : maxRest;
}

int main() {
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << maxInArray(A, N) << endl;

    return 0;
}