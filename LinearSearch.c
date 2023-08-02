//Linear Search & Random Array

#include<stdio.h>
#include<stdlib.h>

#define n 30
int A[n], i;



int Find_Linear(int Z){
    for(i=0;i<n;i++){
        if(Z==A[i])
           return i+1;
    }
    return -1 ;
}



int main(){

   int m;

    for(i=0;i<n;i++){
        A[i]=rand()%100;        // Generat Random Array
        printf(" \n %d : [ %d ]  ",i+1,A[i]);
    }

    printf("\n\nEnter Value For Search : ");
    scanf("%d",&m);

    int J = Find_Linear(m);

        
    if(J=-1)
       printf("\nYour Value in Array of Index Num : %d",i+1);
    else
        printf("\nYour Element Not Found..");

}