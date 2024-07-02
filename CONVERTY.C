#include<stdio.h>
#include<conio.h>
void main()
{
 int  days, years, weeks;
 clrscr();
 printf("Enter the days : ");
 scanf("%d",&days);
 years = days/365;
 printf("The years is : %d ",years);
 weeks = days/7;
 printf("\nThe week is : %d",weeks);
 getch();
 }