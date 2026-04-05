/*
Procedure Sort()
int n,i=0,j,temp
display "Number of elements?"
read n
int a[n]
display enter elements:
while(i<n) do
    read a[i]
    i++
end while
for i=0 to n-2 do
    for j=i+1 to n-1 do
        if(a[i]>a[j])
            swap a[i] with a[j]
        end if
    end for
end for
for i=0 to n-1
    display a[i]
end for
return 0
end Procedure
*/

#include <stdio.h>
int main(){
    int n,i=0,j,temp;
    printf("Number of elements?\t");
    scanf("%d",&n);
    int a[n];
    printf("enter elements: \n");
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp= a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

Number of elements?	6
enter elements: 
87
99
1
987
25
0
0	1	25	87	99	987	

=== Code Execution Successful ===
