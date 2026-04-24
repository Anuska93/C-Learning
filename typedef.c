
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int val;
    struct node *nxt;
}NODE;

void createLL(NODE*);
void display(NODE*);
int main()
{
    int i;
    NODE* head= (NODE*)malloc(sizeof(NODE));
    while(1){
    printf("\n1. Creating a LL\n2. Display LL\n3. EXIT\n");
    scanf("%d",&i);
    switch(i){
        case 1:
        createLL(head);
        break;
        case 2:
        display(head);
        break;
        default:
        printf("Invalid choice.");
        return 0;
    }}
   
    return 0;
}

void createLL(NODE* head){
    NODE *temp=head;
    int a;
    while(1){
        NODE* new= (NODE*)malloc(sizeof(NODE));
        printf("\nEnter Element(999 to EXIT):\t");
        scanf("%d",&a);
        if(a==999){break;}
        new->val=a;
        new->nxt=NULL;
        temp->nxt=new;
        temp=temp->nxt;
    }
}

void display(NODE* head){
    NODE *temp=head;
    while(temp->nxt!=NULL){
        printf("%d->",temp->nxt->val);
        temp=temp->nxt;
    }printf("NULL");
}

