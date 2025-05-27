#include <stdio.h>

int main() {
   int arr[]={11,12,13,14,5};
   int *start=arr;
   int *end=arr+3,temp;
   while(start<end){
   temp=*start;
   *start=*end;
   *end=temp;
   start++;
   end--;
   }
   for(int i=0;i<=4;i++)
   {                                                        
       printf("%d \n", arr[i]);
   }
   return 0;
}