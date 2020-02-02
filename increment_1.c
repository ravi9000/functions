#include<stdio.h>
void increment(int);
main()
{
int num;
printf("main:enter num value\n");
scanf("%d",&num);
printf("main:%p(address)-->%d(num)\n",&num,num);
increment (num);
printf("main:address%p\n",main);
printf("main:increment address%p\n",increment);
}
void increment(int num)
{
printf("increment:fuction is invoked\n");
num++;
printf("increment:%p(address)-->%d(num)\n",&num,num);
}

