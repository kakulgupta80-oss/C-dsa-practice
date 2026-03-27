
#include <stdio.h>

int main() {
  int i,n;
  int arr[100];
  printf("enter the size of array:\n");
  scanf("%d",&n);
  
  printf("enter the elemrnts:\n");
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
 int new_index=0;
  for(int i=0;i<n;i++){
      int isDuplicate=0; 
      
      for(int j=0;j<new_index;j++){
          if(arr[i]==arr[j]){
          isDuplicate=1;
          break;
      }
  }
  if(isDuplicate==0){
      arr[new_index]=arr[i];
      new_index++;
  }
 } 
 printf("array after removing duplicate:\n");
for(int i=0;i<new_index;i++){
    printf("%d\t",arr[i]);
}
 
 
 
  
  
    return 0;
}
