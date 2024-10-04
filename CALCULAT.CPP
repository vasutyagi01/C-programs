#include<stdio.h>
#include<conio.h>

int main()
{
char c;
int a,b;
clrscr();

printf("enter your choice(+,-,*,/,%)=");
scanf("%c",&c);

printf("Enter two no's :");
scanf("%d %d",&a,&b);

switch(c)
{
case '+' :printf("Addition:%d",a+b);
	break;

case '-' :printf("Subtraction:%d",a-b);
	break;

case '*' :printf("Multiplication:%d",a*b);
	break;

case '/' :printf("Division:%d",a/b);
	break;

case '%' :printf("Percentage :%d ",a%b);
	break;

default :printf("Wrong Choice");
	break;
}
getch();
return 0;
}