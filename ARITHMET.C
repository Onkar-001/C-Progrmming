#include<stdio.h>
#include<conio.h>
void main()
{
 int a = 10, b = 20;
 int c;
 clrscr();
 c = a + b;
 printf("Addition = %d",c);
 c = a - b;
 printf("\nSubtraction = %d",c);
 c = a * b;
 printf("\nMultiplication = %d",c);
 c = a / b;
 printf("\nDivision = %d",c);
 c = a % b;
 printf("\nRemainder = %d",c);
 getch();
 }