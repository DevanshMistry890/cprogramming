//Function add() sub()
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
int add( int a, int b);
int sub( int a, int b);
main()
{
	int a,b,c,d;
	a=20,b=10;
	c=add (a,b);
	d=sub (a,b);
	printf("\n%d + %d = %d\n",a,b,c);
	printf("\n%d - %d = %d\n",a,b,d);
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
int add( int a, int b)
{
	int p;
	p=a+b;
	return(p);
}
int sub( int a, int b)
{
	int p;
	p=a-b;
	return(p);
}
