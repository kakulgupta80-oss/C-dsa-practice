// Online C compiler to run C program online
#include <stdio.h>

void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
}
int main() {
    int arr[5]={1,2,3,4,5};
    int n=5,k=2;
    k = k % n;
    
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
     printf("array after right reversal rotation:\n");
    for(int i=0;i < 5;i++){
        printf("%d",arr[i]);
    }
    
  return 0;
}
