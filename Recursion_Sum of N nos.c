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

/*
Procedure sum(n)
int s=sum(50)
display s
return 0
int sum(n)
    if(n==0)
        return 0
    end if
    return n+sum(n-1)
end Procedure
*/

