#include <stdio.h>

int main() {
    int n=5,count=0;
  int arr[5]={29,10,14,37,13};
   
   for(int i=0;i<n-1;i++){
       int minIndex=i;
       
       for(int j=i+1;j<n;j++){
           count++;
           if(arr[j]<arr[minIndex]){
               minIndex=j;
           }
       }
               int temp=arr[i];
               arr[i]=arr[minIndex];
               arr[minIndex]=temp;
           }
           printf("comparison count is %d",count);
   
          
           
   

    return 0;
}
