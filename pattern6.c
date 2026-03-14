// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n=4;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
            printf(" ");
            
        }printf("\n");
    }
    return 0;
}

   * 
  * * 
 * * * 
* * * * 


=== Code Execution Successful ===

/* Pseudocode
Procedure Pattern(n)
for i=1 to n do
    for j=n-i to 1 do
        print " "
    end for
    for k=1 to i do
        print "*"
        print " "
    end for
    print "\n"
end for
end procedure
*/
