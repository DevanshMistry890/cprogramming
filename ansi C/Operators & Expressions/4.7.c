//	EOQ & TBO calculation
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float eoq,tbo, drate,scost,hcost,t1,t2;
	printf("Enter Demand Rate\n");
	scanf("%f",&drate);
	printf("Enter Setup costs\n");
	scanf("%f",&scost);
	printf("Enter holding cost per unit time\n");
	scanf("%f",&hcost);
	t1=((2.0*drate*scost)/hcost);
	t2=((2.0*scost)/(drate*hcost));
	eoq=sqrt(t1);
	tbo=sqrt(t2);
	printf("\n________________________________________________\n");
	printf("\nEconomic Order Quantity (EOQ)= %5.2f\n",eoq);
	printf("\nTime Between Orders (TBO)= %5.2f\n",tbo);
	printf("\n________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
