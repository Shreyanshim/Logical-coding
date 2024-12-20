#include <stdio.h>

int sumOfArray(int arr[], int n) {
    
    if (n <= 0)
        return 0;
    
    return arr[n - 1] + sumOfArray(arr, n - 1);
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

    int result = sumOfArray(arr, n);

    printf("The sum of the elements of the array is: %d\n", result);

    return 0;
}
