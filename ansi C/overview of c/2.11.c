//Area of Triangle
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float area, s, temp;
	int a,b,c;
	printf("Enter Sides of triangle\n");
	scanf("%d %d %d", &a, &b, &c);
	s=((a+b+c)/(float) 2);
	temp=(s*(s-a)*(s-b)*(s-c));
	area=sqrt(temp);
	printf("Area of Triangle is %9.2f",area);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

