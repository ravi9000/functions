#include<stdio.h>
void display(int num);
main()
{
int num;
printf("enter the values\n");
scanf("%d",&num);
display(num);
}
void display(int num)
{
while (num<100)
{
printf("%d\n",num);
num=num+10;
}
}
