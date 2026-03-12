#include <stdio.h>

int main() {
	int y;
	printf("\nEnter a year: ");
	scanf("%d",&y);
	if(y%4==0) {
		if(y%100==0 && y%400!=0){
		    printf("\n%d is not a leap year",y);
		}
		else{
		    printf("\n%d is a leap year",y);
		}
		
	}
	else {
		printf("\n%d is not a leap year",y);
	}


return 0;
}
