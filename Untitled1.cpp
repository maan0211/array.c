#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
int main() {
  int arr[MAX],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            printf("%d",arr[i]);
        }
        else{
            printf("%c",arr[i-32]);
        }
    }

      
    return 0;
}
