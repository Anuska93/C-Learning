#include <stdio.h>
int main(){
    //using temp variable
    int a=2,b=3,temp=0;
    temp=b;// 2 3 3 
    b=a;// 2 2 3
    a=temp;// 3 2 3
    printf("Value of a:%d   b:%d",a,b);
    return 0;
}

OR

#include <stdio.h>

int main(){
    //without using temp variable
    int a=5,b=8;
    b=a-b;
    a=a-b;
    b=a+b;
    printf("a:%d    b:%d",a,b);
    return 0;
}
