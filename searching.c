//Write a function to implement linear search algorithm.

#include <stdio.h>
void main()
{  int num;
 
    int i,  keynum, found = 0;
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Enter the element you want to search: ");
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}

//Write a non-recursive function to implement binary search algorithm.

#include<stdio.h>
int iterativeBsearch(int A[], int size, int element) {
   int start = 0;
   int end = size-1;
   while(start<=end) {
      int mid = (start+end)/2;
      if( A[mid] == element) {
         return mid+1;
      } else if( element < A[mid] ) {
         end = mid-1;
      } else {
         start = mid+1;
      }
   }
   return -1;
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
   int A[n];
   printf("Enter the elements:\n");
   for(int i=0;i<n;i++){
       scanf("%d",&A[i]);
   }
   int num;
   printf("Enter the element you want to search: ");
   scanf("%d",&num);
   int pos=iterativeBsearch(A,n,num);
   if(pos>-1) printf("%d is found at position %d.",num,pos);
   else printf("%d is not found.",num);
   return 0;
}

//Write a recursive function to implement binary search algorithm.

#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid+1; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
void main() 
{ 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the element you want to search: ");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? printf("%d is not present.",x) : printf("%d is present at position %d.",x, result); 
} 