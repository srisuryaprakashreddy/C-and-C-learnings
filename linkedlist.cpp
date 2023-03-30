#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
 
int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    
    struct node *link1=(struct node*)malloc(sizeof(struct node));
    link1->data=450;
    head->link=link1;
    int data=5;
struct node* beg(struct node *head, int d)
{ 
        struct node *ptr =malloc(sizeof(struct node));
        ptr->data=d;
        ptr->link=NULL;

        ptr->link=head;
        head=ptr;
        return head;
}  
   
   head=beg(head, data);
   struct node *ptr=(struct node*)malloc(sizeof(struct node));
   ptr=head;

   while(ptr!=NULL)
   {printf("%d   ",ptr->data);
   ptr=ptr->link;
   }

  
  
    
    return 0;
    }