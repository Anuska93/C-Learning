// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<i-1;j++){
           
            printf(" ");
        
        }
        for(k=0;k<n-j;k++){
            printf("*");
        }printf("\n");
    }

    return 0;
}

Enter n: 5
*****
 ****
  ***
   **
    *
