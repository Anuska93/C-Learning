#include <stdio.h>
int fact(int n);
int main(){
    int f=fact(6);
    printf("%d",f);
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

/*
Procedure fact(n)
int f=fact(6)
display f
return 0
int fact(n)
    if(n==1)
        return 1
    end if
    return n*fact(n-1)
end Procedure
*/
