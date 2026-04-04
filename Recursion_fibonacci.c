// Online C compiler to run C program online
#include <stdio.h>
int fib(int n);
int main() {
    int f=fib(1);
    printf("%d",f);
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
// 0 1 1 2 3 5 8
// 3-> 2 1=2  2-> 1 0=1 

/*
Procedure Fib(n)
int f=fib(1)
display f
return 0
int fib(n)
if(n==0)
    return 0
end if
if(n==1)
    return 1
end if
return fib(n-1)+fib(n-2)
end Procedure
*/
