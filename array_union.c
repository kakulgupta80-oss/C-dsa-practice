
#include <stdio.h>

int main() {
int n1,n2;
int k=0;
int arr1[100],arr2[100],arr3[200];
printf ("enter the size of first array:\n");
scanf("%d",&n1);

printf("enter the elements of 1st array:\n");
for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
    
arr3[k++]=arr1[i];
}
printf ("enter the size of second array:\n");
scanf("%d",&n2);

printf("enter the elements of 2nd array:\n");
for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);

int exists=0;
for(int j=0;j < k;j++){
    if(arr2[i]==arr3[j]){
        exists=1;
    break;
    }
}
if(exists==0){
    arr3[k++]=arr2[i];
}
}
printf("array after union of 2:");
for(int i=0;i < k;i++){
    printf("%d\t",arr3[i]);
}


    return 0;
}
