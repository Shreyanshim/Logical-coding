#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("The array must have an even number of elements for this operation.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int mid = n / 2;

    for (int i = 0; i < mid; i++) {
        int temp = arr[i];
        arr[i] = arr[i + mid];
        arr[i + mid] = temp;
    }

    printf("The array after swapping the first half with the second half is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
