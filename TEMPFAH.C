#include<stdio.h>
#include<conio.h>
void main()
{
 int temp;
 clrscr();
 printf("Enter a temp : ");
 scanf("%d",&temp);
 float fah = (9/2)*temp+32;
 printf("\n The temp in fahrenheit : %f",fah);
 getch();
 }