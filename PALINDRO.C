#include<stdio.h>
#include<conio.h>
void main()
{
 int num, rev=0, m,r;
 clrscr();
 printf("Enter a number : ");
 scanf("%d",&num);
 num = m;
 while(m!=0)
 {
   r = m % 10;
   rev = rev * 10 + r;
   m = m/10;
 }
 (num == rev) ? printf("Palindrome") : printf("Not Palindrome");
 getch();
 }