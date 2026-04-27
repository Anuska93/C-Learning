#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

void push(int* ,int ,int* );
void pop(int* ,int ,int* );
void peek(int* ,int ,int* );

int main() {
	int arrSize=MAXSIZE,choice, top=-1;
// 	printf("Stack size?\t");
// 	scanf("%d",&arrSize);
	if(arrSize>0){
	int *a= (int*)malloc(arrSize*sizeof(int));
	while(1) {
		printf("\n\tMENU\nWhich operation you want to perform\n1.PUSH\n2.POP\n3.PEEK\n4.EXIT\nEnter Choice:\t");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			push(a,arrSize,&top);
			break;
		case 2:
			pop(a,arrSize,&top);
			break;
		case 3:
		    peek(a,arrSize,&top);
		    break;
		case 4:
			return 0;
		default:
			printf("Invalid Choice");
		}
	}
	}
	return 1;
}

void push(int* a, int arrSize,int* top){
    int e,i;
    if(*top==arrSize-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter Element:\t");
        scanf("%d",&e);
        ++(*top);
        *(a+ *(top))=e;
    }
}

void pop(int* a,int arrSize,int* top){
    if(*top==-1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d",*(a+ *(top)));
        *(a+ *(top))=0;
        --(*top);
    }
}

void peek(int* a,int arrSize,int* top){
    printf("%d",*(a+ *(top)));
}
