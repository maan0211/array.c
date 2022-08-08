#include<stdio.h>
int main()
{
	//int n,i,j;
	//printf("Enter the number:");
	//scanf("%d",&n);
	/*for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
digit pattern
*
for(i=1;i<n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
	return 0;
}/*
ALPHABET PRINT
int i,j;
char inp,alph='A';
printf("enter the last char");
scanf("%c",&inp);
for(i=1;i<=(inp-'A'+1);i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%c ",alph);
	}
	alph++;
	printf("\n");
}
return 0;
}*
// INVERTED HALF PYRAMID OF *
int i,j,n;
printf("enter the number:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
/*
inverted half pyramid number

int i,j,n;
printf("enter the number:");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",j);
	}
	printf("\n");
}

return 0;
}
FULL PYRAMID OF *
*
int i,j,n,k=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++,k=0)
{
	for(j=1;j<=n-i;j++)
	{
		printf(" ");
	}
	while(k!=2*i-1)
	{
		printf("*");
		k++;
	}
	printf("\n");
}
return 0;
}

FULL PYRAMID OF DIGIT
*
int i,j,n,k=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++,k=0)
{
	for(j=1;j<=n-i;j++)
	{
		printf(" ");
	}
	while(k!=2*i-1)
	{
		printf("%d",j);
		k++;
	}
	printf("\n");
}
return 0;
}
*
int i,j,n,k=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n+1;i++,k=0)
{
	for(j=1;j<=n-i+1;j++)
	{
		printf(" ");
	}
	while(k!=i-1)
	{
		printf("*");
		k++;
	}
	printf("\n");
}
return 0;
}
*/
6// FLOYED'S TRINGLE
int i,j,n,number=1;
printf("enter the number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d ",number);
		number++;
	}
	printf("\n");
}
return 0;
}



