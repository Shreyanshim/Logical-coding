#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The size of the array must be greater than zero.\n");
        return 1;
    }

    double arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double smallest = arr[0];
    double largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The smallest element in the array is: %.2lf\n", smallest);
    printf("The largest element in the array is: %.2lf\n", largest);

    return 0;
}
