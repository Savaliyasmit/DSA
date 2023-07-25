#include<stdio.h>

#define n 5
int A[n],top=-1;

void Display()
{
    int i;
    for(i=0;i<=top;i++)
       printf("%d ",A[i]);
}

int lastinsert(int val)
{
    if(top>=n-1)
       printf("\t Array is Full.....\n");

    else
    {
        top++;
        A[top]=val;
    }
}

int lastdelete()
{
    if(top<0)
       printf("\t Array is Emtpy....\n ");

    else
    {
        top--;
    }      
}

int main()
{ 

int ch,p,s;
do{
printf("\n \t \n Enter [1] To  insert :  ");
printf("\t \n Enter [2] To  Delete    :  ");
printf("\t \n Enter [3] To  Display   :  ");
printf("\t \n Enter [0] To  exit      : \n");
scanf("%d",&ch);
switch (ch)
{
case 1:
      printf("Enter Value : ");
      scanf("%d",&p);
      lastinsert(p);
    break;

case 2:
    printf("Enter Delete Array number : ");
    scanf("%d",&p);
    
      lastdelete();
    
      break;

case 3:
    printf("\t Array is : ");
      Display();
      
    break;

case 0:
      return 0;
   break;

default:
      printf("\t Wrong Choice........\n\t\t\n Try Again");
      
    break;
}


}while (ch!=0);





}