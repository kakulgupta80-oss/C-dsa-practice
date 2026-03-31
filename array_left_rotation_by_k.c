// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int k,r;
    int arr[5]={1,2,3,4,5};
    
    printf("enter the value of k:\n");
    scanf("%d",&k);
    k = k % 5;
    for(int r=0;r<k;r++){
        int temp=arr[0];
    
    for(int i=0;i<4;i++){
        arr[i]=arr[i+1];
    }
    arr[4]=temp;
    }
    printf("array after left rotation by k:\n");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    
    
  return 0;
}
