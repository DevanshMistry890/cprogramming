//Multiplication table
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,i;
	printf("Enter Number for multiplication table\n");
	scanf("%d", &a);
	printf("__________________________________\n");
	printf("\n\tMultiplication table\n");
	printf("__________________________________\n");
	for(i=1; i<=10; i++)
	{
		printf("\t%d * %d = %d\n", a, i, a*i);
	}
	
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
