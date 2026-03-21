6. Take n elements and find the smallest element.

  #include <stdio.h>
int main() {
    int n,i,min=999999999;
    printf("How many inputs you want to give?\n");
    scanf("%d",&n);
    printf("Input Now: \n");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d is smallest",min);
    return 0;
}

7. Take n numbers and reverse the array.

#include <stdio.h>
int main() {
    int n,i;
    printf("Input n:\n");
    scanf("%d",&n);
    int a[n];
    printf("Input array elements:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
     return 0;
}

8. Search an element in an array (Linear Search).

#include <stdio.h>
int main() {
    int n,i,k;
    printf("Input n:\n");
    scanf("%d",&n);
    int a[n];
    printf("Input array elements:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("which element you want to search ?\n");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        if(k==a[i]){
            printf("Found at index %d",i);
            break;
        }
    }
     return 0;
}

9. Count how many times a number appears in an array.

  #include <stdio.h>
int main(){
    int i,s=2,f=0,n;
    int a[]={2,5,5,2,99,2,6,2};
    n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(s==a[i]){
            f++;
        }
    }
    printf("%d",f);
    return 0;
}

10. Separate positive and negative numbers count.

  #include <stdio.h>

int main(){
    int n,i,f=0;
    printf("Input n\n");
    scanf("%d",&n);
    int a[n];
    printf("Input elements now:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=0){
            f++;
        }
    }
    printf("positive values are:%d\nnegative values are:%d",f,n-f);
    
    return 0;
}
