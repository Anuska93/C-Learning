#include <stdio.h>
int sum(int n);
int main(){
     int s =sum(50);
     printf("%d",s);
     return 0;
}
int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}



