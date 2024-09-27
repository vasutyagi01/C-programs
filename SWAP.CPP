#include<stdio.h>
#include<conio.h>
int main()

{
clrscr();
int a=1, b=2, temp;
printf("a=%db=%d",a,b);
temp=a;
a=b;
b=temp;
printf("swap: a=%d b=%d",a,b);


getch ();
return 0;
}
