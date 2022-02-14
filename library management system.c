//library system
//made by Devansh Mistry
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char book[30][30], sbook[30][30], isbook[30][30], ret[30][30];
	int choice,add,i,j,issue,icount,bkrtn,temp,temp2,rcount;
	icount=-1,issue=-1;
	rcount=-1,bkrtn=-1;
	printf("\tWELCOME TO THE Library Mangement system");
	printf("\n\tCREATED BY DEVANSH MISTRY\n");
	printf("\n---------------------------------------------\n");
	printf("\t1. Add Book\n");
	printf("\t2. Issue Book\n");
	printf("\t3. Return Book\n");
	printf("\t4. View Record \n");
	printf("\t5. View Available Books\n");
	printf("\t6. Exit Program\n");
	next:
	printf("Eneter choice");
	scanf("%d", &choice);
	switch(choice)
    {
        case 1:
            printf("Enter Amount of Add");
            scanf("%d",&add);
            for(i=0; i<add; i++)
			{
				printf("Enter Book Name\n");
				scanf("%s",&book[i]);
			}
			for(i=0; i<add; i++)
			{
				strcpy(sbook[i],book[i]);	
			}
			goto next;
            break;
		
		case 2:
			printf("Enter Amount of Issue\n");
			scanf("%d",&issue);
			for(i=0; i<issue; i++)
			{
				printf("Enter Book Name to issue\n");
				scanf("%s",&isbook[i]);
				temp=i;
				for(j=0; j<=add; j++)
					{
						if(strcmp(isbook[temp],sbook[j])==0)
						{	
							icount=j;
						
						}
					}	
				if(icount != -1)
				{
					while(icount<add)
									{
										strcpy(sbook[icount],sbook[icount+1]);
										icount=icount+1;
									}
									add=add-1;
							printf("Issued Sucessfully\n");
				}
				else 
				{
					printf("Invalid Book Name\n");
					i=i-1;
				}
			}
			goto next;
            break;
        
		case 3:
			printf("Enter Amount of Return\n");
			scanf("%d",&bkrtn);
			for(i=0; i<bkrtn; i++)
			{
				printf("Enter Book Name to Return\n");
				scanf("%s",&ret[i]);
				temp2=i;
				for(j=0; j<issue; j++)
					{
						if(strcmp(isbook[j],ret[temp2])==0)
						{	
							rcount=j;
						}
					}
				if(rcount != -1)
				{
					while(rcount<add)
						{
							strcpy(isbook[rcount],isbook[rcount+1]);
							rcount=rcount+1;
						}
						issue=issue-1;
						printf("Returned book Sucessfully\n");
						strcpy(sbook[add],ret[temp2]);
						add=add+1;
				}
				else
				{
					printf("Invalid book return!!!\n");
				}
			}
			goto next;
            break;
            
        case 4:
        	if(issue != -1)
			{
				printf("Issued Books\n");
				for(i=0; i<issue; i++)
				{
					printf("%s\t\n",isbook[i]);
				}
			}
			else
			{
				printf("no book issued\n");
			}
			
			
			if(bkrtn != -1)
			{
				printf("Returned Books\n");
				for(i=0; i<bkrtn; i++)
				{
					printf("%s\t\n",ret[i]);
				}	
			}
			else
			{
				printf("No books are returned\n");
			}
			goto next;
            break;
            
		case 5:
        	printf("Book Name\t\n");
			for(i=0; i<add; i++)
			{
				printf("%s\t\n",sbook[i]);
			}
			goto next;
            break;

        case 6:
			printf("\n__________________________________\n");
			printf("Thank you for using our softwer\n");
			printf("MADE BY DEVANSH MISTRY");		
			exit(0);
						
        default:
            printf("Error! Choice is not correct");
    }
	printf("\n");
	getch();
	return 0;
}
