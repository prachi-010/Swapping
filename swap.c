#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();

printf("Enter a number\n");
scanf("%d",&a);

printf("Enter second number\n");
scanf("%d",&b);

printf("\nThe first number is :%d\n",a);
printf("The second number is :%d\n",b);
c=a;
a=b;
b=c;
printf("\nThe value of first number after swapping :%d\n",a);
printf("The value of second number after swapping :%d\n",b);

getch();
}
