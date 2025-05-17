#include <stdio.h>

int main() {
    int n, i,max;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
         }
    max=arr[0];
    for(int x=1;x<n;x++)
    {
        if(arr[x]>max)
        {
            max=arr[x];
        }
    }
    printf("\n %d is maximum number :",max);
    return 0;
}