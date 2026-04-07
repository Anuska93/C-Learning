// Creating a LL 
#include<stdlib.h>
#include <stdio.h>
struct node{
    int value;
    struct node *next;
};
int main()
{
    int i,a;
    struct node *node= (struct node *)malloc(sizeof(struct node));
    struct node *temp=NULL;
    temp= node;
    
    for(i=0;i<5;i++){
        struct node *new= (struct node *)malloc(sizeof(struct node));
        scanf("%d",&a);
        new->value=a;
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
    }
    temp=node;
    while(temp->next!=NULL){
        printf("%d->",temp->next->value);
        temp=temp->next;
        
    }printf("NULL");
    return 0;

  #include<stdlib.h>
#include <stdio.h>
struct node{
    int value;
    struct node *next;
};
int main()
{
    int i,a;
    struct node *node= (struct node *)malloc(sizeof(struct node));
    struct node *temp=NULL;
    temp= node;
    
    for(i=0;i<5;i++){
        struct node *new= (struct node *)malloc(sizeof(struct node));
        scanf("%d",&a);
        new->value=a;
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
    }
    temp=node;
    while(temp->next!=NULL){
        printf("%d->",temp->next->value);
        temp=temp->next;
        
    }printf("NULL");
    return 0;

}
OUTPUT:
1->2->3->4->5->NULL
