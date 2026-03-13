// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<((2*n-1)-2*j);k++){
            printf("*");
        }printf("\n");
    }
     return 0;
}

Enter n: 10
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *

    OR

    // Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=n;i>=0;i--){
        for(j=0;j<=n-i;j++){
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }printf("\n");
    }
     return 0;
}

Enter n: 5
 ***********
  *********
   *******
    *****
     ***
      *


=== Code Execution Successful ===
