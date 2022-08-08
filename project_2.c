#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 20

int login();


int main()
{

	int flag,count_1=1,lvl;
	printf("\t\t\t    --------------------\n");
    printf("\t\t\t    | Guess The Number |\n");
    printf("\t\t\t    --------------------\n\n\nEnter username and password:-\n\n");
    printf("--------------------------------------------------------------------------------\n");
    RETRY:
	login(&flag);
    if (flag==0)
    {
    	if (count_1==4)
    	{
    		printf("retry limit exceeded\n");
    		exit(0);
		}
    	printf("Retry %d\n",count_1);
    	count_1++;
    	goto RETRY;
	}
	if (flag==1)
	{
		system("clear");
	}
	

    
    return 0;
}




int login(int *flag)
{
    char u1[]="hk", p1[]="123", u2[MAX], p2[MAX];
    int i=0;
    printf("\t\t\t    username: ");
    scanf("%s",u2);
    printf("\t\t\t    password: ");
    do
    {
        p2[i] = getch();
        if (p2[i]!='\r')
        {
            printf("x");
            i++;
        }
    } while (p2[i]!='\r');
    p2[i] = '\0';
    if ((strcmp(p1,p2)==0)&&(strcmp(u1,u2)==0))
    {
    	printf("\n\n--------------------------------------------------------------------------------\n");
        printf("Welcome to the Game \n\n");
        printf("--------------------------------------------------------------------------------\n");
		*flag = 1;
    }
    else
    {
    	printf("\n\n--------------------------------------------------------------------------------\n");
        printf("\aInvalid username or password\a\n\n");
        printf("--------------------------------------------------------------------------------\n");
        *flag = 0;
    }
}