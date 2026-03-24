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
