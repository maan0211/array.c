/*#include<stdio.h>
int main()
{
	int arr[100],size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
    }
return 0;
} *
	int arr[100],size,i,sum=0;
/*int main()
{
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum = sum+arr[i];
    }
    printf("sum of the array=%d ",sum);
return 0;
}

// Find the maxima minima
#include<stdio.h>
int max(int num1,int num2){
	return (num1>num2)?num1:num2;
}
int min(int num1,int num2){
	return (num1>num2)?num2:num1;
}
int getMin(int arr[],int n){
	int res= arr[0];
	int i;
	for(i=0;i<n;i++)
	{
		res=min(res,arr[i]);
		
	}
return res;	
}
int getMax(int arr[],int n){
	int res= arr[0];
	int i;
	for(i=1;i<n;i++)
	{
		res=max(res,arr[i]);
	
	}	
		return res;
}
int main()
{
	int arr[100],n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the element of array: ");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("max =%d\n",getMax(arr,n));
	printf("min =%d",getMin(arr,n));
	return 0;
}
/*
// copy array
#include<stdio.h>
int main(){
	int arr1[10],arr2[10];
	int size;
	printf("enter the size of array1:");
	scanf("%d",&size);
	printf("enter the element:");
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int j;
	for(i=0;i<size;i++)
	{
		arr2[i] = arr1[i];
	}
	printf("Element of arr2[]\n");
	for(j=0;j<size;j++)
	{
		
		printf("%d ",arr2[j]);
	}
	return 0;
}
/*
// Insertion
#include<stdio.h>
void display(int arr[],int n){

int i;
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
}

int indInsertion(int arr[],int size,int element,int capacity,int index)
{
	if(size>=capacity)
	{
		return -1;
	}
	int i;
	for(i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
		arr[index] = element;
		return 1;
	}
}
int main()
{
	int size,element,index;
	int arr[100];
	printf(" Enter the size:");
	scanf("%d",&size);
	printf("element of the array");
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the insert element");
	scanf("%d",&element);
	printf("Please provide the inserting index");
	scanf("%d",&index);
	display(arr,size);
	indInsertion(arr,size,element,100,index);
	size+=1;
	display(arr,size);
	return 0;
}
/*
//deletion
#include<stdio.h>
void display(int arr[],int n){

int i;
for(i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
}
void indDeletion(int arr[],int size,int index)
{
	int i;
	for(i = index;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
}
int main()
{
	int arr[100],size,i;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int index;
	printf("Enter the index:");
	scanf("%d",&index);
	display(arr,size);
	indDeletion(arr,size,index);
	size-=1;
	display(arr,size);
	return 0;
}

/*
bubble sorting
#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
for(i=0;i<size;i++){
	for(j=0;j<size-i-1;j++)
	{
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
printf("print the sorting array:");
for(i=0;i<size;i++)
{
	printf("%d ",arr[i]);
	}	
	return 0;
}
// selection sort 
#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
for(i=0;i<size;i++){
	for(j=i+1;j<size;j++)
	{
		if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
printf("print the sorting array:");
for(i=0;i<size;i++)
{
	printf("%d ",arr[i]);
	}	
	return 0;
}

// insertion sorting
#include<stdio.h>
int main()
{
	int arr[100],size,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
for(i=1;i<size;i++){
	temp = arr[i];
	j = i-1;
	while(temp<(arr[j]) && j>=0)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}
printf("print the insertion sorting array:");
for(i=0;i<size;i++)
{
	printf("%d ",arr[i]);
	}	
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int arr[100],size,i,key;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("enter the element of array:");
	for(i =0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the key:");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			printf("found\n");
			return 0;
		
		}
			
	}
	
	printf("Element Not Found");
}
	
#include <stdio.h>
void printTable(int *mulTable,int num,int n){
    printf("the multiplication table of %d is:\n",num);
    int i;
    for( i=0;i<n;i++){
        mulTable[i]=num*(i+1);
    }
    for(i = 0;i<n;i++){
        printf("%d X %d = %d\n ",num,i+1,mulTable[i]);

    }
    printf("*********MULTIPLICATION*******\n\n");
}
int main(){
int mulTable[8][10];
printTable(mulTable[0],2,10);
printTable(mulTable[1],3,10);
printTable(mulTable[2],4,10);
printTable(mulTable[3],5,10);
printTable(mulTable[4],6,10);
printTable(mulTable[5],7,10);
printTable(mulTable[6],8,10);
printTable(mulTable[7],9,10);
return 0;
}
*/
#include<stdio.h>
#define MAX 100
void sum(int arr1[],int arr2[],int n){
	int sum;
	int i,j;
	for(i=0;i<0;i++){
		for(j=0;j<n;j++){
		
	
	sum = arr1[i]+arr2[j]; 
}
}
printf("%d",sum);
}
int main(){
	int arr1[MAX],arr2[MAX], n,i,j;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enetre the element of arr1:");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enetre the element of arr2:");
	for(j=0;j<n;j++){
		scanf("%d",&arr2[j]);
	}
	sum(arr1,arr2,n);
}