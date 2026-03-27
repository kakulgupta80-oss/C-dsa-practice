
#include <stdio.h>

int main() {
int n1,n2;
int k=0;
int arr1[100],arr2[100],arr3[100];
printf ("enter the size of first array:\n");
scanf("%d",&n1);

printf("enter the elements of 1st array:\n");
for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
printf ("enter the size of second array:\n");
scanf("%d",&n2);

printf("enter the elements of 2nd array:\n");
for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
} 
for (int i=0;i < n2;i++){
int exists=0;
for(int j=0;j < n1;j++){
    if(arr2[i]==arr1[j]){
        exists=1;
    break;
    }
}
if(exists==1){
    arr3[k++]=arr2[i];
}
}
printf("array after intersection of 2:");
for(int i=0;i < k;i++){
    printf("%d\t",arr3[i]);
}


    return 0;
}
