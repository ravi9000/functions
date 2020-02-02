#include<stdio.h>
int factorial(int num);
main()
{
int num,fact;
printf("main:enter num value\n");
scanf("%d",&num);
printf("main:%p-%d(num)\n",&num,num);
printf("main:calling facorial function\n");
fact=factorial(num);
printf("main:factorial of a given number-%d-%p(fact)\n",fact,&fact);
}
int factorial(int num)
{
int fact=1;
while(num>0)
{
fact=fact*num;
num--;
}
return fact;
}
