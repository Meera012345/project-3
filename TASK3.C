#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=0;
	clrscr();
	printf("Enter the value of I:-");
	scanf("%d",&i);
	do{
		i/=10;
		a++;
	  }while(i>0);
	printf("Number has %d digits\n",a);
	getch();
}