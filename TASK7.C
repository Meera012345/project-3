#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,n,i,c;
	clrscr();
	printf("please enter any number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}

	getch();
}
