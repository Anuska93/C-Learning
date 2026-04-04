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

/*
Procedure count()
display "Enter string"
while(true) do
    read s[i]
    if(s[i]=='\n')
        s[i]='\0'
            break
    end if
    i++
end while
for i=0 to s[i]!='\0'
    count++
end for
display count
return 0
end Procedure
*/

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

/*
Procedure CopyString()
display "enter string"
while(true) do
    read s[i]
    if(s[i]=='\n')
        s[i]='\0'
            break
    end if
    i++
end while
for i=0 to s[i]!='\0'
    a[i]=s[i]
end for
display a
return 0
end Procedure
*/
