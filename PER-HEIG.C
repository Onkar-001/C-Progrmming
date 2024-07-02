#include<stdio.h>
#include<conio.h>
void main()
{
 float PerHeight; clrscr();
 printf("Enter the person height : "); scanf("%f",&PerHeight);
 (PerHeight < 150.0) ? printf("The person is Dwarf") : (PerHeight >=150.0 && PerHeight < 165.0) ? printf("The person is average height") : (PerHeight >= 165.0 && PerHeight <= 195.0) ? printf("The person is taller") : printf("Enter the valid height upto 195 cm");
 getch();
 }