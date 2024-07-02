#include<stdio.h>
#include<conio.h>
void main()
{
 int cp , sp; clrscr();
 printf("Enter the cost price : "); scanf("%d",&cp);
 printf("Enter the sell prince : "); scanf("%d",&sp);
 (cp < sp)? printf("Profit")  : printf("Loss");
 getch();
 }