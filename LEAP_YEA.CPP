#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n;
clrscr();
printf("enter n");
scanf("%d",&n);
if(n%4==0)
{
printf("%d is leap year");
}
else
printf("%d is not leap year");
getch();
}