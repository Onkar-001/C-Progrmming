#include<stdio.h>
#include<conio.h>
void main()
{
 int length;
 clrscr();
 printf("\n Enter the length: ");
 scanf("%d",&length);
 int meter = length / 100;
 printf("\n The lenght in meter is : %d",meter);
 int kilometer = length/100000;
 printf("\n The length in kilometer is : %d", kilometer);
 getch();
 }