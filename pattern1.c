#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i=n; i>1;i--){     //5 4 3 2 1 
        for(int j=i;j>=1;j--){   //5 4 3 2 1
            printf("*");
        }printf("\n");
    }
    for(int i=1;i<=n;i++){  
        for(int j=1;j<=i;j++){ 
            printf("*");
        }printf("\n");
    }

    return 0;
}

Enter n: 6
******
*****
****
***
**
*
**
***
****
*****
******
