#include<stdio.h>
#include<conio.h>
int main()
{ int sp,cp,p,l;
clrscr();
printf("Enter the selling andcost price :");
scanf("%d%d",&sp,&cp);
if(sp>cp)
{
p=sp-cp;
printf("Profit :%d",p);
}
else if(sp==cp)
{
printf("No profit and loss");
}
else
{
l=cp-sp;
printf("loss :%d",l);
}
getch ();
return 0;
}
