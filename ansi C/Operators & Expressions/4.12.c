// program to find sum,avg,max,min
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,max,min,sum;
	float avg;
	printf("Enter Three Number");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3.0;
	(a>c)?(max=a):(max=c);				//max calculation
	(max>b)?(max=max):(max=b);
	(a<c)?(min=a):(min=c);				//min calculation
	(min<b)?(min=min):(min=b);
	printf("\n%d is Sum of Number\n",sum);
	printf("\n%5.2f is Avarage of Number\n",avg);
	printf("\n%d is Max Number\n",max);
	printf("\n%d is min Number\n",min);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
