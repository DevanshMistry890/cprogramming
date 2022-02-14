//Distance calulation
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int j,e;
	float a,u,t,d,s;
	next:
	printf("\nEnter inital velocity  & accceleration\n");
	scanf("%f %f",&u,&a);
	printf("\nEnter  time \n");
	scanf("%f",&t);
	d=((u*t)+((a*t*t)/(2.0)));
	printf("\n");
	printf("\nTime \t    \t Distance\n");
	printf("\n%f \t %5.3f\n",t,d);
	printf("\n");
	printf("Do you want to repeat?    press 1 for repeat; any key for exit");
	scanf("%d",&e);
	if(e==1)
	{
		goto next;
	}
	else
	{
		printf("\n________________________________________________\n");
		printf("Thank you for using our softwer\n");
		printf("MADE BY DEVANSH MISTRY");
		getch();	
	}
}
