#include<stdio.h>
#include<conio.h>
void main()
{
 float cel, fah;
 clrscr();
 printf("Enter temp in fahrenhiet : ");
 scanf("%f",&fah);
 cel = (fah - 32)*5/9;
 printf("The temp in cel is %f" ,cel);
 getch();
 }