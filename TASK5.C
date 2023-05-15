#include<stdio.h>
#include<conio.h>
void main()
{
	int n,revnumber=0,remindernum,temp;
	clrscr();
	printf("Enter the any Number:-");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		remindernum=n%10;
		revnumber=(revnumber*10)+remindernum;
		n/=10;
	}
	printf("your reverse numer is=%d",revnumber);
	if(temp==revnumber)
	{
		printf("\nThis Number is palindrome.",temp);
	}
	else
	{
		printf("\nThis Number not is  palindrome.",temp);
	}
	getch();
}
