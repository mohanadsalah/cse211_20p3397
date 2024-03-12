#include <stdio.h>
#include <stdlib.h>
/*global variables*/
int sum = 0;
float avr = 0;
int x;
int i;
int arr [6] ;   //static array
int *ptr=arr;   /*Initialization of pointer and gain access to array*/
int main()
{
    again:
        // to enter the values of array elements
    printf("Enter the Array Items : ");
    for ( x = 0; x < 6; x++)
	{
        printf("\nEnter element NO %d in array  = ",x);
		scanf("%d", ptr + x);   //to access specific element in array by pointer
	}
    for ( i = 0; i<=5;i++)
    {
        sum = sum + *(ptr + i);
        /*for loop will traverse the array & each elements will be added with previous result
        (stored in sum variable, initially sum is assigned to 0)so ultimately we get summation
        of the all array elements*/
    }
    printf("sum=%d\n",sum);
    //using casting (float to sum)
    avr= (float)sum / 6;
    printf("average=%f\n",avr);
     goto again;
    return 0;
}
