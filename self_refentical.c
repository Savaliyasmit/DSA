#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
   
};
int main(){
    struct node x,y,z,w;

    x.ch = 'A';
    x.data = 65;
    x.ptr =  NULL;

    y.ch = 'Z';
    y.data = 90;
    y.ptr = NULL;


    z.ch = 'C';
    z.data = 80;
    z.ptr =  NULL;

    w.ch = 'P';
    w.data = 100;
    w.ptr = NULL;

    // printf("x : \ndata : %d \tch: %c",x.data,x.ch);
    // printf("\n\n y:\n data:%d \t ch:%c",y.data,y.ch);

   y.ptr = &x;
   x.ptr = &y;

   w.ptr = &z;
   z.ptr = &w;

//        printf("\n x,y \n");
//    printf("x: \ndata:%d \tch:%c",y.ptr->data,y.ptr->ch);
//    printf("\n\n y:\n data:%d \t ch:%c",x.ptr->data,x.ptr->ch);
     
                     
   printf("w: \ndata:%d \tch:%c",w.ptr->data,w.ptr->ch);
   printf("\n\n Z:\n data:%d \t ch:%c",z.ptr->data,z.ptr->ch);
     
     
   

}
