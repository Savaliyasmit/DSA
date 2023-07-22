// #include<stdio.h>
// #define n 5

// int main(){

//     int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10},merge[20],i,k;

//  printf("\nElements of Array After Merge: ");
//    for(i=0;i<5;i++)
//    {
//     merge[i]=arr1[i];
//     merge[i]=arr2[i];
//    }
//    for(i=0;i<10;i++)
//    {
//    printf(" %d",merge[i]);
//    }
//  }

#include<stdio.h>
#include<conio.h>

int main(){

   int arr1[50],arr2[50],size1,size2,i,k,merge[100];

    printf("Enter Array 1 Size: \n");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: \n");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }

  
   k=i;
     printf(" \n Enter Array 2 Size: ");
    scanf("%d", &size2);
    printf("\nEnter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }

  
    
     printf("\nafter merge array is :-");
       for(i=0 ; i<k ; i++){

        printf("  %d ",merge[i]);
       }

     return 0;

  
}



