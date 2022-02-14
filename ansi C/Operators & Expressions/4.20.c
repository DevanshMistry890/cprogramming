//isoceles triangle
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("Enter Three Side of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b)
	{	
		printf("TRIANGLE is isoceles");
	}
	else if(b==c)
	{
		printf("TRIANGLE is isoceles");
	}
	else if(a==c)
	{
		printf("TRIANGLE is isoceles");
	}
	else 
	{
		printf("TRIANGLE is not isoceles");
	}
	printf("\n");
	printf("\n________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
