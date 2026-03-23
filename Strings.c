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

2. Copying a string into another string.

#include <stdio.h>
int main() {
    int i=0,count=0;
    char s[100],a[100];
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
            a[i]=s[i];
            //printf("%c",a[i]);
        }
    printf("%s",a);
    return 0;
}
