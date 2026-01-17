#include <stdio.h>

int secondLargest(int arr[], int n) {
    int largest, second;

    if (arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 5, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second largest element: %d\n", secondLargest(arr, n));
    return 0;
}
