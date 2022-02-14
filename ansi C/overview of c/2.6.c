//System date and time
//Made By DEVANSH MISTRY
#include<stdio.h>
#include<time.h>
main()
{
    time_t t;   //Not in built fun
	time(&t);
    printf("\nDate and time of system \n%s", ctime(&t));
    printf("______________________________________________________________________\n");
	printf("Thank you for using our softwer\n");
	printf("MADE BY DEVANSH MISTRY");
	getch();
}
