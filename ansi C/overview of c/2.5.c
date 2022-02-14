//Speed Calculation
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	float dis, tm,sd;
	next:
	printf("\nEnter Distance travelled by a car\n");
	scanf("%f", &dis);
	printf("\nEnter Time taken by car for SAME\n");
	scanf("%f", &tm);
	if(tm==0)
		{
			printf("\nInvalid Operation!!!!\n");
			printf("Please enter valid values\n");
			goto next;
		}
	else
		{
			sd=(dis/(float)tm);
			printf("\n__________________________________\n");
			printf("\nSpeed of car is %9.2f\n",sd);
		}   		
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
