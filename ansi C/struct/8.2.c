#include<stdio.h>
#include<conio.h>
main()
{
	struct cricket
	{
		char Player name[15];
		char Team name[15];
		float Batting average ;
	};
	struct cricket rt[50];
	int i;
	for(i=0; i<50; i++)
	{
		printf("Enter  Player Name; Team name; Batting avg");
		scanf("\n%s %s %f",&rt.name , &rt.name, &rt.average);	
	}
	printf("\n");
	printf("Team %s",rt[1].name);
	printf("\n");
	printf("Enter  Third Item Id, name, Quantity, Rate");
	scanf("\n%d %s %d %d",&i3.id, &i3.name, &i3.quantity, &i3.rate);
	printf("Thank you");
	getch();
}
