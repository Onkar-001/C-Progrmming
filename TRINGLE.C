#include<stdio.h>
#include<conio.h>
void main()
{
 int s1, s2, s3;
 clrscr();
 printf("Enter the sides of triangle ; ");
 scanf("%d %d %d", &s1, &s2, &s3);
 int sum = s1 + s2 + s3;
 (sum <= 180)? printf("Triangle is valid") : printf("Triangle is invalid");
 getch();
 }