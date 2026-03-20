1. Create an array of 5 integers, take input from the user and print the array

#include <stdio.h>

int main() {
    int i,sum=0,avg=0;
   int a[5];
   for(i=0;i<5;i++){
       scanf("%d",&a[i]);    
   }
  for(i=0;i<5;i++){
      printf("%d  ",a[i]);
  }
    return 0;
}

2. Take 5 numbers in an array and find the sum of all elements.
  
  #include <stdio.h>
int main() {
    int i,sum=0,avg=0;
   int a[5];
   for(i=0;i<5;i++){
       scanf("%d",&a[i]);
        sum =sum+a[i];
   }
    printf("%d",sum);
    return 0;
}

3. Take 5 numbers and find the average.

#include <stdio.h>

int main() {
    int i,sum=0,avg=0;
   int a[5];
   for(i=0;i<5;i++){
       scanf("%d",&a[i]);
        sum =sum+a[i];
   }
   avg=sum/i;
   
   printf("%d",avg);
 return 0;
}

4. Take 10 numbers in an array and count how many are even and odd.

  #include <stdio.h>
int main() {
    int i,sum=0,avg=0,count=0;
   int a[10];
   for(i=0;i<10;i++){
       scanf("%d",&a[i]);
        if(a[i]%2==0){
            count++;
        }
   }
   printf("%d are even ",count);
   printf("%d are odd ",i-count);
 return 0;
}

5. Take n elements from user and print the largest element.

  #include <stdio.h>

int main() {
    int i,max=0,n;
   int a[];
   printf("How many inputs you want? ");
   scanf("%d",&n);
   printf("Please input now\n");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
   }
    printf("%d is largest",max);
    return 0;
}
