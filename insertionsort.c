#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

int main() {
    int n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The entered array is:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    
    // INSERTION SORT
    for (int i = 1; i < n; i++) { // Start from the second element
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1]) {
            swap(arr, j, j - 1);
            j--;
        }
    }

    printf("\n\n\n");
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    return 0;
}
