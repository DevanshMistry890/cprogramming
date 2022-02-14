//Currency calculation
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,r,t,h,th,count;
	th=0,h=0;
	next:
	printf("\nEnter Payment\n");
	scanf("%d", &a);
	if(a<10)
	{
		printf("Enter Valid number!!!!!!\n");
		goto next;
	}
	r=a%10;
	t=a/10;
	if(t>9)
	{
		h=t/10;
		t=t-(h*10);
	}
	if(h>9)
	{
		th=h/10;
		h=h-(th*10);
	}
	printf("Require Currency Notes");
	printf("\nthousand\t  %d\n",th);
	printf("\nhundred \t  %d\n",h);
	printf("\nten  \t     %d\n",t);
	printf("\nruppy\t     %d\n",r);
	printf("\n");
	printf("__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
