#include<stdio.h>
#include<conio.h>
void main()
{
 int angle1 , angle2, angle3;
 clrscr();
 printf("Enter the first angle");
 scanf("%d",&angle1);
 printf("\nEnter the second angle");
 scanf("%d",&angle2);
 int sum = angle1 + angle2;
 angle3=  180 - sum;
 printf("\nThe third angle is : %d",angle3);
 getch();
 }