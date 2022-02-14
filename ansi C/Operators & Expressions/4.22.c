//Variable with expression
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	float r1,r2,r3,r4;
	next:
	printf("\nEnter four numbers\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(d==0||b==0)
	{
		printf("Enter valid numbers!!!");
		goto next;
	}
	r1=(a+b)*(c/d);
	r2=(a+b)*c/d;
	r3=a+(b*c)/d;
	printf("Results:\n");
	printf(" (a+b)*(c/d) = %5.2f\n",r1);
	printf(" (a+b)*c/d = %5.2f\n",r2);
	printf(" a+(b*c)/d = %5.2f",r3);
	printf("\n");
	printf("\n________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
