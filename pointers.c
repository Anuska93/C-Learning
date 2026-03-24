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
