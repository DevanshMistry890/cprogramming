//day to year & month
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,r,p,y;
	y=0;
	next:
	printf("\nEnter Days\n");
	scanf("%d", &a);
	if(a<=30)
	{
		printf("Enter Valid number!!!!!!\n");
		goto next;
	}
	r=a%30;
	p=a/30;
	if(p>11)
	{
		y=p/12;
		p=p-(y*12);
	}
	printf("%d years\t %d months\t %d days",y,p,r);
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
