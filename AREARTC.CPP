#include<stdio.h>
#include<conio.h>
int main()
{ int area;
clrscr();

printf("Enter your choice :");
printf("\n1 Area of rectangle");
printf("\n2 Area of triangle");
printf("\n3 Area of circle");

scanf("%d",&area);

switch(area)
{
case 1:
	int l,b;
	printf("Enter length and breadth :");
	scanf("%d%d",&l,&b);
	printf("\nArea of rectangle :%d",l*b);
	break;

case 2:
	int c,h;
	printf("Enter base and height :");
	scanf("%d%d",&c,&h);
	printf("\nArea of triangle :%d",(c*h)/2);
	break;

case 3:
	float r;
	printf("Enter radius :");
	scanf("%f",&r);
	printf("\nArea of circle :%d",2*3.14*r);
	break;

default : printf("\nWrong choice");
	break;
	}
getch ();
return 0;
}
