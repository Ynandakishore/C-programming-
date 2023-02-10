#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

float mean(int arr[], int n) {
    int i;
    float sum = 0.0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

float median(int arr[], int n) {
    sort(arr, n);
    if (n % 2 == 0) {
        return (arr[(n-1)/2] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

int mode(int arr[], int n) {
    int i, j, max_count = 0, max_element = 0;
    int curr_count = 1;
    sort(arr, n);
    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            curr_count++;
        } else {
            if (curr_count > max_count) {
                max_count = curr_count;
                max_element = arr[i-1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count) {
        max_count = curr_count;
        max_element = arr[n-1];
    }
    return max_element;
}

int main() {
    int arr[MAX_SIZE];
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Mean: %.2f\n", mean(arr, n));
    printf("Median: %.2f\n", median(arr, n));
    printf("Mode: %d\n", mode(arr, n));
    return 0;
}
