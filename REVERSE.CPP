#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
do{
printf("%d",num%10);
num=num/10;
}
while(num>0);


getch();
return 0;
}