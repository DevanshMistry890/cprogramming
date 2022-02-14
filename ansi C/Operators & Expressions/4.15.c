// Square& Squareroot 
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i;
	i=0;
	float r,s;
	printf("Number\t   Square-root \tSquare\n");
	printf("__________________________________\n");
	while(i<=100)
	{
		r=sqrt(i);
		s=i*i;
		printf("%d\t   %5.2f \t     %d\n",i,r,s);
		i=i+1;
	}
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
