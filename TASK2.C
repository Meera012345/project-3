#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d*%d=%i\n",i,n,i*n);
		i++;
	}
	getch();

}
