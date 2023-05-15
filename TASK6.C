#include<stdio.h>
#include<conio.h>
void main()
{
	int fact,i,n;
	clrscr();
	fact=1;
	i=1;
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		fact=n*fact;
		n--;
	  }while(i<=n);
	printf("Factorial of 1 to N=%d\n",fact);
	getch();
}
