#include <stdio.h>
#include <stdlib.h>

// Linear search function
int linear_search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Binary search function
int binary_search(int arr[], int n, int x) {
    int low = 0, high = n - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int result;
    
    // Linear search
    result = linear_search(arr, n, x);
    if (result == -1) {
        printf("Linear search: Element not present in array\n");
    } else {
        printf("Linear search: Element found at index %d\n", result);
    }
    
    // Binary search
    result = binary_search(arr, n, x);
    if (result == -1) {
        printf("Binary search: Element not present in array\n");
    } else {
        printf("Binary search: Element found at index %d\n", result);
    }
    
    return 0;
}