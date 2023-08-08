#include<stdio.h>
#define  n 6

int  f=-1 ,r=-1;
int a[n];

int display(){

int i=f;
if(f < 0){
    printf("\n Queue is empty...");

}
else{

    while( i <= r){
        printf(" %d ",a[i]);
        i=(i+1)%n;
      }

}
}
int insetEnd(int val){

   if(r < 0){
          f=r=0;
          a[r]=val;
   }    
  else if((r+1)%n==f){
    printf("queue is full..");

  }
  else{
    r=(r+1)%n;
    a[r]=val;
  }
}

int main(){

    insetEnd(10);
    insetEnd(20);
    insetEnd(30);
    insetEnd(40);
    insetEnd(50);
    insetEnd(60);

    display();
}




