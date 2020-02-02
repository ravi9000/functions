#include<stdio.h>
void swap_two_nmbrs(int,int);
main()
{
int x,y;
printf("main:enter input values x,y\n");
scanf("%d,%d",&x,&y);
printf("main:%p(address)-%d(x)\n%p(address)-%d(y)\n",&x,x,&y,y);
swap_two_nmbrs(x,y);
printf("main:address%p\n",main);
printf("main:address of swap%p\n",swap_two_nmbrs);
}
void swap_two_nmbrs(int x,int y)
{
printf("swap:is invoked\n");
x=x^y;
y=x^y;
x=x^y;
printf("swap:%p(address)-%d(x)\n%p(address)-%d(y)\n",&x,x,&y,y);
}

