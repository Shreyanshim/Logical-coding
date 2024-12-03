#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sortDescending(char num[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (num[j] < num[j + 1]) {
                char temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}


void sortAscending(char num[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                char temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

int kaprekar(int num) {
    int iterations = 0;

    while (num != 6174) {
      
        char numStr[5];
        sprintf(numStr, "%04d", num); 

        
        sortDescending(numStr, 4);
        int high = atoi(numStr); 
        sortAscending(numStr, 4);
        int low = atoi(numStr); 

        
        num = high - low;
        iterations++;

        printf("Step %d: %d - %d = %d\n", iterations, high, low, num);
    }

    return iterations;
}

int main() {
    int num;

    
    printf("Enter a 4-digit number with at least two distinct digits: ");
    scanf("%d", &num);

  
    if (num < 1000 || num > 9999) {
        printf("The number must be a 4-digit integer.\n");
        return 1;
    }


    int iterations = kaprekar(num);

    // Output the number of iterations
    printf("Kaprekar's constant (6174) reached in %d iterations.\n", iterations);

    return 0;
}
