#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    float avr = 0;
    int arr[5];
    int *ptr = arr; // Pointer to the first element of arr

    for (int i = 0; i < 5; i++) {
        printf("Enter weight of box NO %d = ", i + 1);
        scanf("%d", ptr + i); // Accessing array elements using pointer arithmetic
    }

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); // Accessing array elements using pointer dereferencing
    }

    printf("Sum Of Weights = %d kg\n", sum);

    // Using casting (float) for one of the operands to get float division
    avr = (float)sum / 5;
    printf("Average Of Weights = %0.2f kg\n", avr);

    return 0;
}

