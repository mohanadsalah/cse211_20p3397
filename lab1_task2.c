#include <stdio.h>
#include <stdlib.h>
int *fun (void);
int main ()
{
    int *ptr;
    ptr=fun ();
    printf("Array: [");
    for (int x = 0; x<=5;x++)
    {
        printf("%d", ptr[x]);
        if (x < 5) {
            printf(", ");
    }
}
printf("]\n");
}
int *fun (void)
{
    static int arr [6]={};
        for (int i = 0; i<=5;i++)
    {
        printf("Please,Enter the number %d in array : ",i);
            scanf("%d",&arr[i]);
            printf("\n");
    }
    return arr;
}
