
#include <stdio.h>

int main() {
  int n=5, key=7 ;
  int arr[]={1,3,5,6,7};

int low=0,high=n-1;

while(low<=high){
    int mid=(low+high)/2;
    
    if(arr[mid]==key){
        printf("the element fount at index %d",mid);
        return 0;
    }
    if(arr[mid]>key){
       high=mid-1; 
    }
    else{
        low=mid+1;
    }
}
printf("element not found");
    return 0;
}
