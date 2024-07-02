#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("Enter the number : ");
 scanf("%d",&n);
 (n%2==0)? printf("Even") : printf("Odd");
 getch();
 }