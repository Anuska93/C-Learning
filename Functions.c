// Online C compiler to run C program online
#include <stdio.h>
void greetIndia();
void greetFrench();
int main() {
    char l;
    printf("Input 'I' for Indian Speakers and Input 'F' for French people.");
    scanf("%c",&l);
    if(l=='I'){
        greetIndia();
    }
    if(l=='F'){
        greetFrench();
    }
    
    return 0;
}
void greetIndia(){
    printf("Namaste !");
}
void greetFrench(){
    printf("Bonjour !");
}
