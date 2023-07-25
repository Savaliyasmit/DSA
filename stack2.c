#include <stdio.h>

#define n 5
int A[n], top = -1;

void Display()
{
    int i;
     if (top<0){
        printf("\t Array is Empty....\n");
     }
     else{
    for (i = 0; i <= top; i++)
        printf("%d ", A[i]);
     }
}

void firstinsert(int val)
{
    if (top >= n - 1)
        printf("\t Array is Full.....\n");
    
    else if(top<0){
              top++;
              A[top]= val;

    }

   
    else
    {
             
         top++;
        for (int i = top; i >= 0; i--)
        {
            A[i]=A[i-1];
        }
 
       
        A[0] = val;
    }
}

void firstdelete()
{
    if (top<0)
        printf("\t Array is Empty....\n");
    else
    {
    
        for (int i = 0; i < top; i++)
        {
            A[i] = A[i + 1];
        }

        top--;
    }
}

int main()
{

    int ch, p, s;
    do
    {
        printf("\t \n Enter [1] To  insert    :  ");
        printf("\t \n Enter [2] To  Delete    :  ");
        printf("\t \n Enter [3] To  Display   :  ");
        printf("\t \n Enter [0] To  exit      : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter Value : ");
            scanf("%d", &p);
            firstinsert(p);
            break;

        case 2:
            firstdelete();
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

    } while (ch != 0);

    return 0;
}
