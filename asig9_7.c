#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            arr[index] = arr[i];
            index++;
        }
    }

    for (int i = index; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, n);

    printf("The array after removing duplicates and shifting zeros is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
