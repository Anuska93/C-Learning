1. Value of i, Address of i, Value of pi and Value of x using pi.

#include <stdio.h>
int main() {
    int i=22;
    int *pi;
    pi=&i;
    printf("%d",i);
    printf("\n%x",&i);
    printf("\n%x",pi);
    printf("\n%d",*pi);
    return 0;
}
o/p:
22
f72b0254
f72b0254
22

2. Basics of pointers.

#include <stdio.h>
int main(){
    int i=20,*pi,**ppi;
    pi=&i;
    ppi=&pi;
    printf("Value of i is: %d ",i);
    printf("\nAddress of i is: %x",&i);
    printf("\nvalue of pi is: %x",pi);
    printf("\nAddress of pi is: %x",&pi);
    printf("\nValue of ppi is: %x",ppi);
    printf("\nValue of i using pi is: %d",*pi);
    printf("\nValue of i using ppi is: %d",**ppi);
    printf("\nValue of pi using ppi is: %x",*ppi);
    return 0;
}

Value of i is: 20 
Address of i is: 47424f84
value of pi is: 47424f84
Address of pi is: 47424f78
Value of ppi is: 47424f78
Value of i using pi is: 20
Value of i using ppi is: 20
Value of pi using ppi is: 47424f84

3. Taking an array as input then dividing it into even array and odd array.

#include <stdio.h>
int main() {
    int i,n,k=0,j=0;
    printf("How many elements?\t");
    scanf(" %d",&n);
    int a[n],b[n],c[n];
    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++){
        printf("Element %d:\t",i+1);
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++){
        if(*(a+i)%2==0){
            *(b+k)=*(a+i);
            k++;
        }
        else{
            *(c+j)=*(a+i);
            j++;
        }
    }
    printf("\nEven :\n");
    for(i=0;i<k;i++){
        printf(" %d",*(b+i));
    }
    printf("\nOdd are: \n");
    for(i=0;i<j;i++){
        printf(" %d",*(c+i));
    }
    return 0;
}

OR

    
#include <stdio.h>
int main() {
    int i,n,k=0,j=0;
    printf("How many elements?\t");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("\nEnter array elements:\n");
    for(i=0;i<n;i++){
        printf("Element %d:\t",i+1);
        scanf("%d",a+i);
    }
    
    printf("\nInserted array is : \n");
    while(i>0){
        printf("%d\t",*(a+i-1));
        i--;
    }
    for(i=0;i<n;i++){
        if(*(a+i)%2==0){
            *(b+k)=*(a+i);
            k++;
        }
        else{
            *(c+j)=*(a+i);
            j++;
        }
    }

    printf("\nEven array:\n");
    for(i=0;i<k;i++){
        printf("%d\t",*(b+i));
    }

    printf("\nOdd array:\n");
    for(i=0;i<j;i++){
        printf("%d\t",*(c+i));
    }

    return 0;
    
How many elements?	4

Enter array elements:
Element 1:	54
Element 2:	32
Element 3:	21
Element 4:	11

Inserted array is : 
11	21	32	54	
Even array:
54	32	
Odd array:
21	11	

}
