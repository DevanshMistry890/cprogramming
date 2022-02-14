//Variation of f vs c
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float R,C,L,f,temp,a,b;
	printf("\nEnter Resistance in Ohm");
	scanf("%f",&R);
	printf("Enter Inductance in Henry");
	scanf("%f",&L);
	printf("Capacitance\t  Frequency\n");
	C=0.01;
	while(C<=0.1)
	{
		a=(1.0/(L*C));
		b=(R*R)/(4.0*C*C);
		temp=((float)a-b);
		f=sqrt(temp);
		printf("%5.2f\t  \t%lf\n",C,f);
		C=C+0.01;
	}
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
