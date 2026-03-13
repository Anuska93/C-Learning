// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n=5;
    for(i=0;i<=4;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<n-i;k++){
            printf("*");
        }printf("\n");
    }
     return 0;
}

*****
 ****
  ***
   **
    *


=== Code Execution Successful ===
