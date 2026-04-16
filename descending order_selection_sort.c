#include <stdio.h>

int main() {
    int n=5,count=0;
  int arr[5]={29,10,14,37,13};
   
   for(int i=0;i<n-1;i++){
       int maxIndex=i;
       
       for(int j=i+1;j<n;j++){
           count++;
           if(arr[j]>arr[maxIndex]){
               maxIndex=j;
           }
       }
               int temp=arr[i];
               arr[i]=arr[maxIndex];
               arr[maxIndex]=temp;
           }
           for(int i=0;i<n;i++){
               printf("%d\t",arr[i]);
           }
          
   
          
           
   

    return 0;
}
