#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter thr number : ");
 scanf("%d",&n);
 (n > 0)? printf("Positive") : (n < 0) ? printf("Negative") : printf("Zero");
 getch();
 }