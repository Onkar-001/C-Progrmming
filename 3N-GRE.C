#include<stdio.h>
#include<conio.h>
void main()
{
 int a , b , c;
 clrscr();
 printf("Enter three numbers : ");
 scanf("%d %d %d", &a, &b, &c);
 (a>= b && a>= c)? printf("A is greater") : ( a<= b && c <= b) ? printf("B is greater") : printf("C is greater");
 getch();
 }