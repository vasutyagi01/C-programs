#include<stdio.h>
#include<conio.h>
int main()

{
clrscr();
int a=1, b=2;
printf("a=%db=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("swap: a=%d b=%d",a,b);


getch ();
return 0;
}
