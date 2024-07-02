#include<stdio.h>
#include<conio.h>
void main()
{
 char ch; clrscr();
 printf("Enter the alphabet : " ); scanf("%c",&ch);
 (ch >= 'a' && ch <= 'z') ? printf("lowercse") : printf("Uppercase");
 getch();
 }