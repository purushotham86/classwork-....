#include <stdio.h>

int find_largest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[100], n, i;
    
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = find_largest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
