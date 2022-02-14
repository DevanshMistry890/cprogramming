//Sum of harmonic series
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	float sum;
	int a,i;
	printf("Enter Numbers of Terms\n");
	scanf("%d", &a);
	for(i=1; i<=a; i++)
		{
			sum=sum+(1.0/i);
		}
	printf("Sum of series  is %9.2f",sum);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

