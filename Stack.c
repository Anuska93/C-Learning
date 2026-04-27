#include <stdio.h>
#include <stdlib.h>

void push(int* ,int ,int* );
void pop(int* ,int ,int* );
void peek(int* ,int ,int* );

int main() {
	int arrSize,choice, top=-1;
	printf("Array size?\t");
	scanf("%d",&arrSize);
	int *a= (int*)malloc(arrSize*sizeof(int));
	while(1) {
		printf("\n\tMENU\n1.PUSH\n2.POP\n3.PEEK\n4.EXIT\n");
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
			printf("invalid choice");
		}
	}
	return 1;
}

void push(int* a, int arrSize,int* top){
    int e,i;
    if(*top==arrSize-1){
        printf("Stack overflow\n");
    }
    else{
        printf("Enter element:\t");
        scanf("%d",&e);
        ++(*top);
        *(a+ *(top))=e;
    }
}

void pop(int* a,int arrSize,int* top){
    if(*top==-1){
        printf("Stack underflow\n");
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
