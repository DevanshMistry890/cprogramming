//mileage Calculation
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	float dis, fl,ml;
	next:
	printf("\nEnter Distance travelled by a car in km\n");
	scanf("%f", &dis);
	printf("\nEnter Fuel taken by car for SAME in litre\n");
	scanf("%f", &fl);
	if(fl==0)
		{
			printf("\nInvalid Operation!!!!\n");
			printf("Please enter valid values\n");
			goto next;
		}
	else
		{
			ml=((float)dis/fl);
			printf("\n__________________________________\n");
			printf("\nMileage of car is %9.2f km per litre\n",ml);
		}   		
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
