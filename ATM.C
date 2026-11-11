#include<stdio.h>
#include<conio.h>
int main()
{
int a;
printf("enter your pin:");
scanf("%d",&a);
clrscr
if(a==1234)
{
printf("payment is succesful\n");
}
else
{
printf("payment is failed\n");
}
return 0;
}
