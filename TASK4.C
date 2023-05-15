#include<stdio.h>
#include<conio.h>
void main()
{
	int num,firstdigit,lastdigit,sum;
	clrscr();
	printf("Enter the Number:-");
	scanf("%d",&num);
	lastdigit=num%10;
	while(num>10)
	{
		num=num/10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("sum of First and Last digit of Given numer =%d",sum);
	getch();
}