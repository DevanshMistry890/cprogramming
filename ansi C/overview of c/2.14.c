//Area and perimeter of circle
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
main()
{
	float red,area,prm;
	int x,y,a,b,m,n,temp;
	next:
	printf("\nEnter  Origin coordinate\n");
	scanf("%d %d", &x, &y);
	printf("\nEnter coordinate of point on circle\n");
	scanf("%d %d", &a, &b);
	m=x-a;
	n=y-b;
	temp= pow(m,2) + pow(n,2);
	red=sqrt(temp);
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

