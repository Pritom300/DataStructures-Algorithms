#include<iostream>

using namespace std;
int partition(int a[], int s, int e) {
    int i = s;
    int pivot = a[e];
    for (int j = s; j <= e - 1; j++) {
        if (a[j] > pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[e]);
    return i;
}
void quickSort(int a[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}
int partition2(int a[], int s, int e) {
    int i = s;
    int pivot = a[e];
    for (int j = s; j <= e - 1; j++) {
        if (a[j] < pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[e]);
    return i;
}
void quickSort2(int a[], int s, int e) {
    if (s >= e) {
        return;
    }
    int p = partition2(a, s, e);
    quickSort2(a, s, p - 1);
    quickSort2(a, p + 1, e);
}
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int a[] = {
        -2,
        7,
        4,
        30,
        -8,
        3,
        9,
        17,
        15,
        18
    };
    quickSort(a, 0, 9);
    cout << "Decending Order:";
    printArray(a, 10);
    quickSort2(a, 0, 9);
    cout << "Acending Order:";
    printArray(a, 10);
    return 0;
}
