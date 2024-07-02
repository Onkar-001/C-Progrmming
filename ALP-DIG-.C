#include<stdio.h>
#include<conio.h>
void main()
{
 char n; clrscr();
 printf("Enter the charcter : "); scanf("%c",&n);
(n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')? printf("character") : (n >= '0' && n <= '9') ? printf("Digit") : printf("Special Character");
 getch();
 }