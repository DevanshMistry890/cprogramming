//Arithmetic calculator
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	float div;
	int x,y, sum, sub, mul;
	next:
	printf("\nEnter  Two Numbers\n");
	scanf("%d %d", &x, &y);
	sum=x+y;
	sub=x-y;
	mul=x*y;
	if(y==0)
		{
			printf("\nInvalid Operation!!!!\n");
			printf("Please enter valid numbers\n");
			goto next;
		}
	else
		{
			div=((float)x/y);
		}	
	printf("\n\t X = %d            Y = %d",x,y);
	printf("\n\t SUM = %d          Diff = %d",sum,sub);
	printf("\n\t Product = %d      Div = %5.2f",mul,div);	
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

