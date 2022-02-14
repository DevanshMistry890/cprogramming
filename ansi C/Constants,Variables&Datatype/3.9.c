//ASCII character
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a;
	next:
	printf("\nEnter Integer between(32,127)\n");
	scanf("%d", &a);
	if(a<=32)
	{
		printf("Enter Valid number!!!!!!\n");
		goto next;
	}
	else
	{
		if(a>=127)
		{
			printf("Enter Valid number!!!!!!\n");
			goto next;
		}
		printf("%c is ASCII value of %d",a,a);
	}
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
