#include<stdio.h>
struct meet
    {
        int begin;
        int end;
        int zhi;
    };
int main()
{
    struct meet meet1={1};//未赋值全为0；类似数组；
    printf("meet1 %d\t%d\t%d",meet1.begin,meet1.end,meet1.zhi);


    return  0;
}
