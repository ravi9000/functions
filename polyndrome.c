#include<stdio.h>
int rev_number(int);
main()
{
int num,rev;
printf("enter num value");
scanf("%d",&num);
rev=rev_number(num);
}
int rev_number(int num)
{
int rev=0,temp,rem;
temp=num;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
if(rev==num)
printf("it is polyndrome");
else
printf("it is not polyndrome");
}
