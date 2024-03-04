#include <stdio.h>
#include <stdlib.h>
int row=0;
int col=0;
int i=0;
void triangle (void);
int main ()
{
       again:
       triangle ();
       goto again;
    return 0;
}
void triangle ()
{
  printf ("Enter the number of rows = ");
    scanf("%d",&row);
    for(i = 1; i <= row ; i++)
    {
     for(col = 1; col <= i ; col++)
         printf ("*");
     printf("\n");
    }
}
