//LARGEST number without if statement
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,max;
	printf("Enter Three Number");
	scanf("%d %d %d",&a,&b,&c);
	(a>c)?(max=a):(max=c);
	(max>b)?(max=max):(max=b);
	printf("%d is Max Number",max);
	printf("\n__________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
