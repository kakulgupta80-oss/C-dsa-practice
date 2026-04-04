
#include <stdio.h>

int main() {
  int n=7, key=2 ;
  int arr[]={1,2,2,2,3,5,7};

int low=0,high=n-1;
int first=n;

while(low<=high){
    int mid=(low+high)/2;

    if(arr[mid]==key){
        first=mid;
       high=mid-1; 
    }
    else if(key>arr[mid]){
        low=mid+1;
        }
        else{
            high=mid-1;
        }
}
printf("%d",first);
    return 0;
}
