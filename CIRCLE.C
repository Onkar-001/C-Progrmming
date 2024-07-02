#include<stdio.h>
#include<conio.h>
void main()
{
 int radius , diameter, circum, area;
 float pi = 3.14;
 clrscr();
 printf("Enter the radius of circle : ");
 scanf("%d",&radius);
 area = pi * radius * radius;
 printf("The area of circle : %d",area);
 diameter = 2 * radius;
 printf("\nThe diameter of circle : %d", diameter);
 circum = 2 * pi * radius;
 printf("\n The circumferance of circle is : %d",circum);

 getch();
 }