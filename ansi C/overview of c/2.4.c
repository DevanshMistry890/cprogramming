//Mathematical Expression
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,x,d;
	next:
	printf("\nEnter value of A,B,C\n");
	scanf("%d %d %d", &a, &b, &c);
	d=b-c;
	if(d==0)
		{
			printf("\nInvalid Operation!!!!\n");
			printf("Please enter valid numbers\n");
			goto next;
		}
	else
		{
			x=(a/(b-c));
			printf("VALUE OF X IS %d",x);
		}   		
	printf("\n__________________________________\n");
	
	x=(a/(b-c));
	

	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
