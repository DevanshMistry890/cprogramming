//Sin cos table
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
#define MAX 180
main()
{
	int i;
	i=0;
	float t,x,y;
	printf("Degree\t   Sin(x)    \tCos(x)\n");
	while(i<=MAX)
	{
		t=(PI/MAX)*i;
		x=sin(t);
		y=cos(t);
		printf("%d\t   %5.2f    \t%5.2f\n",i,x,y);
		i=i+15;
	}
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
