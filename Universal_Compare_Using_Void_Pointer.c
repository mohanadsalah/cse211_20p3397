#include <stdio.h>
#include <stdlib.h>

// Function to compare two values of potentially different types
int compare(void* value1, void* value2, int type) {
    int r; // Result of comparison
    switch (type) {
        case 1: // int
            if (*(int*)value1 == *(int*)value2)
                r = 0;
            else if (*(int*)value1 > *(int*)value2)
                r = 1;
            else
                r = -1;
            break;
        case 2: // float
            if (*(float*)value1 == *(float*)value2)
                r = 0;
            else if (*(float*)value1 > *(float*)value2)
                r = 1;
            else
                r = -1;
            break;
    }
    return r;
}

int main() {
    int x1 = 1, x2 = 2, x3 = 1;
    float y1 = 2.2, y2 = 1.1, y3 = 3.3;

    printf("Compare x1 and x2 gives %d \n", compare(&x1, &x2, 1)); // Compare int
    printf("Compare x1 and x3 gives %d \n", compare(&x1, &x3, 1));
    printf("Compare y1 and y2 gives %d \n", compare(&y1, &y2, 2)); // Compare float
    printf("Compare y1 and y3 gives %d \n", compare(&y1, &y3, 2));

    return 0;
}
