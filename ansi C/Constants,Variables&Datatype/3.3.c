//Positive Negetive
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	next:
	printf("\nEnter Integer\n");
	scanf("%d", &n);
	if(n==0)
	{
		printf("Enetered Number is zero");
		printf("\n__________________________________\n");
		printf("Thank you for using our softwer\n");
		printf("MADE BY DEVANSH MISTRY\n");
		getch();
	}
	else
	{
		if(n<0)
			{
				printf("Entered number is negetive\n");
				goto next;
			}
		else
			{
				printf("Entered number is Positive\n");
				goto next;
			}
	}
}

