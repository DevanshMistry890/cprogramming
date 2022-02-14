//Distance between two coordinates
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float dis;
	int x,y,a,b,m,n,temp;
	next:
	printf("\nEnter  First coordinate\n");
	scanf("%d %d", &x, &y);
	printf("\nEnter  Second coordinate\n");
	scanf("%d %d", &a, &b);
	m=x-a;
	n=y-b;
	temp= pow(m,2) + pow(n,2);
	dis=sqrt(temp);
	printf("\n__________________________________\n");
	printf("\n\t Distance between Two coordinate is %5.2f",dis);	
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

