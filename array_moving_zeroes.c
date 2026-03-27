
#include <stdio.h>

int main() {
int n;
int arr[100];
printf ("enter the size of array:\n");
scanf("%d",&n);

printf("enter the elements of array:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int new_index=0;
for(int i=0; i<n;i++){
    if(arr[i]!=0){
        arr[new_index]=arr[i];
        new_index++;
    }
}
for(int i=new_index ;i < n; i++){
    arr[i]=0;
}
printf("array after moving zeroes to end:\n");
for(int i =0;i <n ;i++){
    printf("%d\t",arr[i]);
}


    return 0;
}
