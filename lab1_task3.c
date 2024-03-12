#include <stdio.h>
#include <stdlib.h>

void countDigits(int num, int *frequency) {
    while (num > 0) {
        frequency[num % 10]++;
        num /= 10;
    }
}

int main() {
    int nums[100], frequency[10] = {0}, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d numbers separated by spaces: ", size);
    for (int *ptr = nums; ptr < nums + size; ptr++) {
        scanf("%d", ptr);
        countDigits(abs(*ptr), frequency);
    }

    printf("All elements in the array: \n");
    printf("oX");
    for (int *ptr = nums; ptr < nums + size; ptr++) {
        printf("%d", *ptr);
    }
    printf("\n");

    printf("Non-repeated elements in the array: ");
    for (int *ptr = nums; ptr < nums + size; ptr++) {
        int n = abs(*ptr), repeated = 0;
        while (n > 0 && !repeated) {
            if (frequency[n % 10] > 1) repeated = 1;
            n /= 10;
        }
        if (!repeated) printf("%d ", *ptr);
    }
    printf("\n");

    printf("Repeated elements in the array: ");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 1) printf("%d --> repeated %d times\n", i, frequency[i]);
    }

    return 0;
}
