#include <iostream>
using namespace std;

double sumArray(int arr[], int n) {
    if (n == 0) 
        return 0;

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int N;
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    double sum = sumArray(arr, N);
    double average = sum / N;

    cout << fixed;
    cout.precision(6);
    cout << average;

    return 0;
}