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

    
3. Menu driven LL.
    
#include <stdio.h>
#include <stdlib.h>

struct node{
int val;
struct node *ptr;
};
											
void createLL(struct node *);
void addend(struct node *);
void addBegin(struct node *);
void addMid(struct node *);
void display(struct node *);

int main(){
	int i;
	while(1){
	    
	printf("\t\tMenu\n1.Create a LL\n2.Add at End\n3.Add at Beginning\n4.Add at Middle\n5.Display LL\n(909 to EXIT)\n");
	scanf("%d",&i);
	if(i==909){
	    return 0;
	}
	struct node *head=(struct node *)malloc(sizeof(struct node));
	switch(i){
		case 1:
		createLL(head);
		break;
		case 2:
		addend(head);
		break;
		case 3:
		addBegin(head);
		break;
		case 4:
		addMid(head);
		break;
		case 5:
		display(head);
		break;
		default:
		printf("Invalid choice!");
	}
	return 0;
}
}

void createLL(struct node *head){
	struct node *temp=head;
	int a=0;
	printf("Enter elements to insert(999 to EXIT):\n");
	while(1){
		struct node *new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Value:\t");
		scanf("%d",&a);
		if(a==999){break;}
		new->val=a;
		new->ptr=NULL;
		temp->ptr=new;
		temp=temp->ptr;
	}
	printf("LL created successfully.");
}

void addend(struct node *head){
	struct node *temp=head;
	while(temp->ptr=NULL){
		temp=temp->ptr;
	}
	int a=0;
	printf("Enter elements to insert(999 to EXIT):\n");
	while(1){
		struct node *new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Value:\t");
		scanf("%d",&a);
		if(a==999){break;}
		new->val=a;
		new->ptr=NULL;
		temp->ptr=new;
		temp=temp->ptr;
	}
	printf("Nodes added at the end successfully.");
}

void addBegin(struct node *head){
	struct node *temp=head;
	printf("Enter element to insert(999 to exit):\n");
	int a=0;
	while(1){
		struct node *new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Value:\t");
		scanf("%d",&a);
		if(a==999){break;}
		new->val=a;
		new->ptr=temp->ptr;
		temp->ptr=new;
		temp=temp->ptr;
	}
	printf("Nodes added at the beginning successfully.");
}
	
void addMid(struct node *head){
	struct node *temp=head;
	int i=0,p;
	printf("After which index you want to add?\n");
	scanf("d",&i);
	for(p=0;p<i;p++){
		temp=temp->ptr;
		}
	printf("Enter element to insert(999 to exit):\n");
	int a=0;
	while(1){
		struct node *new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Value:\t");
		scanf("%d",&a);
		if(a==999){break;}
		new->val=a;
		new->ptr=temp->ptr;
		temp->ptr=new;
		temp=temp->ptr;
	}
	printf("Nodes added in the middle successfully.");
}

void display(struct node *head){
	struct node *temp=head;
	if(temp->ptr==NULL){printf("Empty LL");}
	while(temp->ptr!=NULL){
		printf("%d",head->ptr->val);	
		temp=temp->ptr;									
	}
}
