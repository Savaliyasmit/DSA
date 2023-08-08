#include<stdio.h>
#define n 6

int F=-1 , R=-1;
 int a[n];

int display(){
    if(F < 0)
       printf("\t Queue is Emtpy....\n ");
else{
    for(int i=F ; i<=R ; i++){
        printf(" %d ",a[i]);

    }
    printf("\n");
}
 }

int firstinsert(int val){

    if(R >=n-1){
        printf("Queue is Full... \n");
    }
    else if ( R < 0)
    {
       F = R = 0;
       a[R]=val;
    }
    else{
        R++;
        a[R]=val;
    }
   
}


int deleterear() {
    if (F < 0)
        printf("\t Queue is Empty....\n");
    else if (F == R) {
        F = R = -1;
    } else {
        R--;
    }
}

 int main(){
      firstinsert(10);
    firstinsert(20);
     firstinsert(30);
    //   firstinsert(40);
    //   firstinsert(50);
    //    firstdelete();
    //    firstdelete();
    //    firstdelete();
    //    firstdelete();
    //    firstdelete();
    //    firstdelete();
     deleterear();
    deleterear();
    // deleterear();
    // deleterear();
       
       display();

 }