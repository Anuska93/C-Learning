// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n=9;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=0;k<n-i;k++){
            
                printf("*");
            
                printf(" ");
            
        }printf("\n");
    }
     return 0;
}

* * * * * * * * * 
 * * * * * * * * 
  * * * * * * * 
   * * * * * * 
    * * * * * 
     * * * * 
      * * * 
       * * 
        * 


=== Code Execution Successful ===

OR

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,n=5;
    for(i=n;i>=0;i--){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<2*i-1;k++){
            if(k%2==0){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }
     return 0;
}

* * * * *
 * * * *
  * * *
   * *
    *
     


=== Code Execution Successful ===
