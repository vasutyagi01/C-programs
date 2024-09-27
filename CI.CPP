#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
float p=100, r=5, t=2;
float amt= p*((pow((1+r/100),t)));
float ci= amt-p;
printf("Compound Interest = %f",ci);


getch ();
return 0;
}
