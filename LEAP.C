#include<stdio.h>
#include<conio.h>
void main()
{ int n ; clrscr();
 printf("Enter the year : ");
 scanf("%d",&n);
 (n % 4 == 0 && n%100 != 0 || n%400 == 0) ? printf("Leap year") : printf("Not Leap Year");
 getch();
 }