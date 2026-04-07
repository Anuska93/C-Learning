// 1. Creating a LL 
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

// 2. Inserting at beginning.

#include<stdlib.h>
#include <stdio.h>
struct node{
    int value;
    struct node *next;
};
int main()
{
    int a;
    struct node *node= (struct node *)malloc(sizeof(struct node));
    struct node *temp=NULL;
    temp= node;
    printf("Enter elements for LL to insert(00 to EXIT):\n");
    while(1){
        struct node *new= (struct node *)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d",&a);
        if(a==00){
            break;
        }
        new->value=a;
        new->next=NULL;
        temp->next=new;
        temp=temp->next;
    }
    printf("Enter element to insert at beginning:\n");
     struct node *new= (struct node*)malloc(sizeof(struct node));
     scanf("%d",&a);
     new->value=a;
     new->next=node->next;
     node->next=new;
     temp=node;
     printf("Inserted LL: \n");
    while(temp->next!=NULL){
        printf("%d->",temp->next->value);
        temp=temp->next;
        
    }printf("NULL");
    return 0;
}
// OUTPUT
Enter elements for LL to insert(00 to EXIT):
Enter value: 1
Enter value: 2
Enter value: 3
Enter value: 4
Enter value: 5
Enter value: 6
Enter value: 7
Enter value: 8
Enter value: 00
Enter element to insert at beginning:
9
Inserted LL: 
9->1->2->3->4->5->6->7->8->NULL
