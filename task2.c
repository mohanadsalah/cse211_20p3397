#include <stdio.h>
#include <stdlib.h>
static int counter;
void fun (void)
{
    counter++;
    printf("The function has been called\n");
}
int main()
{
    for(int i=0 ; i<5 ; i++)
      fun ();
    printf("The number of times the function is called=%d",counter);
    return 0;
}
