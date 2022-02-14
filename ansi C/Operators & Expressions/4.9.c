//Sum of digits using / % operators
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int num, r, sum;
	sum=0;
	printf("Enter Number");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("Sum of all digits is %d",sum);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
