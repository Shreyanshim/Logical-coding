#include <stdio.h>

int main() {
    int n, key, count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to count: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }

    if (count > 0) {
        printf("The element %d is present %d times in the array.\n", key, count);
    } else {
        printf("The element %d is not present in the array.\n", key);
    }

    return 0;
}
