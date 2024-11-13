#include<stdio.h>
#include<conio.h>
int main()
{
int rows,k=0;
clrscr();
printf("enter no. of rows");
scanf("%d",&rows);

for(int i=1;i<=rows;i++,k=0){

	for(int j=1;j<=rows-i;++j){
	printf(" ");

	}

	while(k!=2*i-1){
	printf("*");
	++k;
	}
	printf("\n");
}
getch();
return 0;
}