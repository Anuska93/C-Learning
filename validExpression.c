#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

void push(int*,int,int* );
//void pop(int* ,int, int*);

int main() {
	int choice,stackSize=MAXSIZE,top=-1;
	int* arr=(int*)malloc(MAXSIZE*sizeof(int));
	while(1) {
		printf("\n\tMENU\n1.PUSH\n2.POP\n3.PEEK\n4.EXIT\nEnter Choice:\t");
		scanf("%d",&choice);
		switch(choice) {
		case 1:
			push(arr,stackSize,&top);
			break;
		// case 2:
		// pop(arr,stackSize,&top);
		// break;
		// case 3:
		// peek(arr,stackSize,&top);
		//break;
		case 4:
			return 0;
		default:
			printf("Invalid Choice");
		}
	}
	return 1;
}

void push(int* arr, int stackSize,int *top) {
	char ele[30];
	int brac=0,i;
	if(*top==stackSize-1) {
		printf("Stack Overflow");
	}
	else {
		printf("Enter Element:\t");
		++(*top);
		scanf("%s",ele);
		
		for(i=0;i<30; i++) {
			if(ele[i]=='('||ele[i]=='{'||ele[i]=='[') {
				++brac;
			}
			if(ele[i]==')'||ele[i]=='}'||ele[i]==']') {
				brac--;
			}
		}
	}
	if(brac==0) {
		printf("Valid");
	} else {
		printf("Invalid");
	}
}
