#include<stdio.h>
#include<conio.h>
void main()
{
 int length , breadth, rectArea;
 clrscr();
 printf("Enter the length : ");
 scanf("%d",&length);
 printf("Enter thr breadth : ");
 scanf("%d",&breadth);
 rectArea = length * breadth;
 printf("The perimeter of rectangle : %d",rectArea);
 getch();
 }
