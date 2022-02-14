// Divion || error
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	next:
	printf("\nEnter Two Numbers\n");
	scanf("%d %d",&a,&b);
	if(b==0)
		{
			printf("\nInvalid Operation!!!!\n");
			printf("Please enter valid numbers\n");
			goto next;
		}
	else
	{
		printf("Division of two is %5.2f ",((float)a/b));
	}
	printf("\n");
	printf("\n________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
