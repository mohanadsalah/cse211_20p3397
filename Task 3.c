#include <stdio.h>
#include <stdlib.h>
int number;

int main()
{
    again:
    printf("Enter number = ");
    scanf("%d",&number);
    printf("\n\t number++ = %d\n" ,number++);
    printf("\t But number become in memory = %d\n" ,number);
    printf("\n\t\t number-- = %d\n" ,number--);
    printf("\t\t But number become in memory = %d\n" ,number);
    printf("\n\t\t\t ++number = %d\n" ,++number);
    printf("\t\t\t But number become in memory = %d\n" ,number);
    printf("\n\t\t\t\t --number = %d\n" ,--number);
    printf("\t\t\t\t But number become in memory = %d\n\n" ,number);
    goto again;
    return 0;
}
