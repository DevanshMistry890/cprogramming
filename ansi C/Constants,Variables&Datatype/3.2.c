//Printing price
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	float p1,p2;
	int a,i;
	printf("Enter Value of 1 kg Rice\n");
	scanf("%f", &p1);
	printf("Enter Value of 1 kg Sugar\n");
	scanf("%f", &p2);
	printf("*** LIST OF ITEMS ***\n");
	printf("ITEM	PRICE\n");
	printf("Rice\t");
	printf("%5.2f\n",p1);
	printf("Sugar\t");
	printf("%5.2f\n",p2);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}

