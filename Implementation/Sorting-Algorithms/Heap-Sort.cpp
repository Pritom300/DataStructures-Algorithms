#include <bits/stdc++.h>

using namespace std;
void heapify(vector < int > & arr, int n, int i) {
    int smallest = i;
    int l = 2 * i + 1; // left
    int r = 2 * i + 2; // right
    if (l < n && arr[l] < arr[smallest])
        smallest = l;
    if (r < n && arr[r] < arr[smallest])
        smallest = r;
    if (smallest != i) {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}
void heapSort(vector < int > & arr, int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(vector < int > & arr, int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main() {
    cout << "Enter Number:" << endl;
    int in ;
    cin >> in ;
    vector < int > v2;
    int nn;
    for (int i = 0; i < in ; i++) {
        cin >> nn;
        v2.push_back(nn);
    }
    heapSort(v2, in );
    cout << "Sorted array is \n";
    printArray(v2, in );
}
