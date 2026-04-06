// Menu driven Calculator

#include <stdio.h>
int main() {
    int a,b,o,res=0;
    while(1){
    printf("\n\t\t\tMENU\n\tOPERATION TO PERFORM:\n1.Addition\t\t\t\t2.Subtraction\n3.Multiplication\t\t4.Division\n5.EXIT\n");
    scanf("%d",&o);
    switch(o){
        case 1:
        printf("Enter two numbers:\t");
        scanf("%d%d",&a,&b);
        res=a+b;
        printf("Result of %d + %d is:  %d",a,b,res);
        break;
        case 2:
        printf("Enter two numbers:\t");
        scanf("%d%d",&a,&b);
        res= a-b;
        printf("Result of %d - %d is:  %d",a,b,res);
        break;
        case 3:
        printf("Enter two numbers:\t");
        scanf("%d%d",&a,&b);
        res= a*b;
        printf("Result of %d * %d is:  %d",a,b,res);
        break;
        case 4: 
        printf("Enter two numbers:\t");
        scanf("%d%d",&a,&b);
        if(b==0){
            printf("DIVISION NOT POSSIBLE\n");
        }
        else{res=a/b;
        printf("Result of %d / %d is:  %d",a,b,res);
        }
        break;
        case 5:
        return 0;
        default:
        printf("Invalid Choice.\n");
    }
     res=0;
    }
    return 0;
}

/* 
Procedure Cal()
int a,b,o,res=0
while(true) do
display Menu \n Operation to perform \n1.Addition\t2.Subtraction\n3.Multiplication\t4.Division\n5.EXIT\n
read &o
switch(o) do
case 1:
display Enter two numbers:
read &a &b
res= a+b
display Result of %d + %d is:  %d,a,b,res
break
case 2:
display Enter two numbers:
read &a &b
res= a-b
display Result of %d - %d is:  %d,a,b,res
break
case 3:
display Enter two numbers:
read &a &b
res= a*b
display Result of %d * %d is:  %d,a,b,res
break
case 4:
display Enter two numbers:
read &a &b
if(b==0)
display DIVISION NOT POSSIBLE
else
res= a+b
display Result of %d + %d is:  %d,a,b,res
end if
break
case 5:
return 0
default:
display Invalid Choice
end switch
res=0
end while
return 0
end Procedure
*/
