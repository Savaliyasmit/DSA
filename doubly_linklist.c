#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("\n \t list is emplty ....\n ");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void insert(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

     while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = temp;
    temp->prev = ptr;
    return;
}

void delete()
{
    struct node *ptr = head;
    struct node *p;

    if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }

    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next = NULL;
    free(ptr);
    return;
}


void firs_in(int val)
{
  struct node *temp = malloc(sizeof(struct  node)); 
  temp->data = val;
  
  if(head==NULL)
   {
    head = temp  ;
    temp->next=NULL;
   }
    else
  {
    struct node *ptr = head;
    temp->next =ptr ;
    head=temp;
  }  
}

void first_delete()
{
   struct node *ptr = head;
 
  if(head == NULL)
  {
    printf("link is empty  now... ");
  }
  else
  {
      head = ptr->next ;
      free(ptr);
  }
   
}

void mid_in(int pos,int val)
{
    struct node *ptr = head ;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
 
    while (ptr->data!=pos)
        ptr=ptr->next;

    temp->next = ptr->next;
    ptr->next= temp;


}

void mid_delete(int pos)
{
   struct node  *p ;   
   struct node  *ptr = head ;
    
    while(ptr->data!=pos)
    {
        p=ptr;
        ptr = ptr->next;
    }

     p->next = ptr->next ;
     free(ptr); 
     
}


int main()
{

    insert(100);
    insert(300);
    insert(400);
    // firs_in(70);
    // firs_in(60);
    // firs_in(50);

    // mid_in(60,40); 
    // mid_in(50,90);

    // mid_delete(100);
    // mid_delete(300);

    // first_delete();

    display();

}