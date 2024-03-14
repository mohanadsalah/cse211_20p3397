#include <stdio.h>
#include <stdlib.h>
struct Sdata{
int day;
int month;
int year;
};
struct Sstudent
{
    char Name [256];
    char Description[8192];
    struct Sdata Birthdate;
    double degrees [10];
    double Toltal_Degrees;
};
struct Sstudent Slow_Update_Total_Degree (struct Sstudent student)
{
 student.Toltal_Degrees = 0;
 for (int i=0;i<10;i++)
 {
 student.Toltal_Degrees += student.degrees [i];
 }
 return student;
}
int main()
{
    struct Sstudent s = {"Mohanad Mohamed","ASU student",{12,6,2002},{10,20,30,40,50,60,70,80,90,100}};
    s=Slow_Update_Total_Degree (s);
    printf("Total Degrees of %s is %2.2lf(Average of degrees = (%2.2lf)%%)\n",s.Name,s.Toltal_Degrees,(double)(s.Toltal_Degrees/10.0));
    return 0;
}
