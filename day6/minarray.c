#include <stdio.h>

int main() {
    int n, i,min;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
         }
    min=arr[0];
    for(int x=1;x<n;x++)
    {
        if(arr[x]<min)
        {
            min=arr[x];
        }
    }
    printf("\n %d is minimum number :",min);
    return 0;
}