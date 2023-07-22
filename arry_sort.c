#include<stdio.h>

int main(){

    int arr1[50],size1,i,temp;

   

     printf("Enter Array 1 Size: \n");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: \n");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        
    }

   
    // Swap the first and last elements
    if (size1 > 0) {
        temp = arr1[0];
        arr1[0] = arr1[size1 - 1];
        arr1[size1 - 1] = temp;
    }

    // Display the array after swapping
    printf("Array 1 after swapping first and last elements:\n");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}

    
    




   
 

