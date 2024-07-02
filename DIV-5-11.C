#include<stdio.h>
#include<conio.h>
void main()
{ int n; clrscr();
 printf("Enter the number : ");
 scanf("%d",&n);
 (n%5==0 && n%11==0) ? printf("Divisible") : printf("Not Divisible");
 getch();
 }