1. Counting a String.
#include <stdio.h>
int main() {
    int i=0,count=0;
    char s[100];
    printf("Enter string\n");
    while(1){
        scanf("%c",&s[i]);
        if(s[i]=='\n'){
            s[i]='\0';
            break;
        }
        i++;
    }
    for(i=0;s[i]!='\0';i++){
        count++;
        
    }
    printf("%d",count);
    
    return 0;
}

