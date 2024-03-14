#include <stdio.h>
#include <stdlib.h>
struct S_DATA_SET
{
    unsigned char data_1;
    unsigned int data_2;
    unsigned char data_3;
    unsigned short data_4;
};
struct S_DATA_SET datas;
void print_memory_range (char* base , int size)
{
    for(int i = 0; i<size;i++)
    {
        printf("%p \t %X \n",base,(unsigned char)*base);
        base++;
    }
}
int main ()
{
        datas.data_1=0x11;
        datas.data_2=0xFFFFEEEE;
        datas.data_3=0x22;
        datas.data_4=0xABCD;
        print_memory_range (&datas , sizeof(datas));
        struct S_DATA_SET* P_struct=&datas;
        P_struct->data_1=0x12;
        printf("%X \t %X \n",P_struct->data_1,datas.data_1);
        return 0;
}
