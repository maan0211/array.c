#include<stdio.h>
#define MAX 100
int getMissingNumber(int arr[],int n){
	int total = (n+1)*(n+2)/2;
	int i;
	for(i=0;i<n;i++)
		total -= arr[i];
	return total;
}
int main(){
	int arr[MAX],n;
	printf("Please enter the size of array:");
	scanf("%d",&n);
	printf("please enter the element of array:");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int miss=getMissingNumber(arr,n);
	printf("%d",miss);
}