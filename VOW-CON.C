#include<stdio.h>
#include<conio.h>
void main()
{
 char c; clrscr();
 printf("Enter the character : " ); scanf("%s",&c);
 (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u'|| c == 'U')? printf("Vowel") : printf("Consonant");
 getch();
 }