#include <stdio.h>

int main() {
    int n, k, i, r;
    int arr[100];   // fixed size array

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k:\n");
    scanf("%d", &k);
    k = k % n;  // handle cases where k > n

    int temp;
    for(r = 0; r < k; r++) {
        temp = arr[0];
        for(i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    printf("After left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
