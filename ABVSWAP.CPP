#include<stdio.h>
#include<conio.h>
void swap(int a,int b);
int main(void){

int f,s;
scanf("%d%d",&f,&s);
swap(f,s);
printf("before swap %d and %d",f,s);

getch();
return 0;
}

void swap(int a,int b)
{
int temp;
clrscr();

temp=a;
a=b;
b=temp;
printf("After swapping %d and %d",a,b);
}