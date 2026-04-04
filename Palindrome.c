#include <stdio.h>
int main(){
    int i=0,n,f=0;
    
    printf("Size of string?\t");
    scanf("%d",&n);
    getchar();
    char s[n];
    printf("Enter a string:\t");
    while(1){
        scanf("%c",&s[i]);
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        i++;
    }
    for(i=0;i<n/2;i++){
        if(s[i]==s[n-1-i]){
            f=1;
        }
    }
    if(f==1){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}
