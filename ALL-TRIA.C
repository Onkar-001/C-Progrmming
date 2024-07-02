#include<stdio.h>
#include<conio.h>
void main()
{
 int s1, s2, s3;
 clrscr();
 printf("Enter the sides of triangle ");
 scanf("%d %d %d",&s1, &s2, &s3);
 ((s1 == s2 && s2 == s3)) ? printf("Equilateral") : ((s1 == s2 || s1 == s3 || s2 == s3))? printf("Isosceles") : printf("Scalene");
 getch();
 }