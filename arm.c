#include<stdio.h>
int checkArm(int n){
	int n1,n2,r,s=1,sum=0;
	n1=n;
	n2=n;
	while(n!=0){
		r=n%10;
		n=n/10;
		while(n1!=0){
			s=s*r;
			n1=n1/10;
		}
		sum = sum+s;
		s=1;
		n1=n2;
		
	}
	if(sum==n2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int i,a,q;
	printf("the number of checking armtrong:");
	scanf("%d",&q);
	for(i=0;i<q;i++){
		a = checkArm(i);
		if(a==1){
			printf("%d",i);
			
		}
		return 0;
	}
}