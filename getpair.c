#include<stdio.h>
#define MAX 100
int getPair(int arr[],int n,int dif){
	int i,j,count=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]-arr[j]==dif){
				count++;
			}
		}
	}
	return count;
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
	int dif;
	printf("enter the dif :");
	scanf("%d",&dif);
	int pair=getPair(arr,n,dif);
	printf("%d",pair);
	return 0;
}