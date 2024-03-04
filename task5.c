#include <stdio.h>
int grade;
void grade_mark (void);
int main()
{
    again:
    grade_mark ();
    goto again;
    return 0;
}
    void grade_mark (void){
    printf ("Enter the student grade =");
    scanf("%d",&grade);
    if(93<=grade&&grade<=100)
    printf("\nA\n");
    else if(85<=grade&&grade<=92)
    printf("\nB+\n");
    else if(75<=grade&&grade<=84)
    printf("\nB\n");
    else if(70<=grade&&grade<=74)
    printf("\nC+\n");
    else if(61<=grade&&grade<=69)
    printf("\nC\n");
    else if(grade==60)
    {
    printf("\nD\n");
    }
    else if(grade<=59)
    {
    printf("\nF\n");
    }
}
