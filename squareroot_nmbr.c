#include<stdio.h>
#include<math.h>
int main(void)
{
 double n,x;
printf("enter a number:");
scanf("%f",&n);
x=sqrt(n);
printf("square root of%.21f is %.21f\n",n,x);
return 0;
}
