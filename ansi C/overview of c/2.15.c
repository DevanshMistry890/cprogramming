//Area and perimeter of circle by diameter
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
main()
{
	float red,area,prm,dia;
	int x,y,a,b,m,n,temp;
	next:
	printf("\nEnter First coordinate of point on circle\n");
	scanf("%d %d", &x, &y);
	printf("\nEnter Second coordinate of point on circle\n");
	scanf("%d %d", &a, &b);
	m=x-a;
	n=y-b;
	temp= pow(m,2) + pow(n,2);
	dia=sqrt(temp);
	red=(dia/(float)2);
	area= PI*red*red;
	prm=2*PI*red;
	printf("\n_________________________________________________________\n");
	printf("\n\t Area of circle is %5.2f",area);
	printf("\n\t Perimeter of circle is %5.2f",prm);
	printf("\n____________________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

