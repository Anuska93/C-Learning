//importing neccessary libraries
#include <stdio.h>
#include <stdlib.h>

//prototype declarations
void mergesort(int arr[],int l,int r);
void merge(int arr[],int l, int m, int r);

//main function
int main()
{
	int i;
	int arr[]= {5,8,9,3,1,0};                   //input array
	int arr_size= sizeof(arr)/sizeof(arr[0]);   //array size is computed
	mergesort(arr,0,arr_size-1);        //calling mergesort function
	for(i=0; i<arr_size; i++) {         //printing array elements
		printf("%d ",arr[i]);
	}
	return 0;
}

void mergesort(int arr[],int l,int r) {
	if(l<r) {               //when left index is smaller than right index block is executed
		int m= l+(r-l)/2;   //finding the middle index
		mergesort(arr,l,m);     //separating the array into two as per the middle index
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);       //calling merge function here
	}
}

void merge(int arr[], int l,int m,int r) {
	int i,j,k;                  
	int n1= m-l+1;              //deciding from which index to draw the line
	int n2= r-m;
	int L[n1],R[n2];            //two temporary arrays are made
	for(i=0; i<n1; i++) {       //array elements are divided into two array
		L[i]=arr[l+i];          //left array
	}
	for(j=0; j<n2; j++) {
		R[j]=arr[m+1+j];        //right array
	}

	i=0,j=0,k=l;
	while(i<n1 && j<n2) {       
		if(L[i]<=R[j]) {        //if the left element is smaller than right element 
			arr[k]=L[i];        //left array elements goes to array
			i++;
		} else {
			arr[k]=R[j];        //right array elements goes to array
			j++;
		}
		k++;
	}
	while(i<n1) {
		arr[k]=L[i];            //remaining left array elements goes to array
		i++;
		k++;
	}
	while(j<n2) {               //remaining right array elements goes to array
		arr[k]=R[j];
		j++;
		k++;
	}
}

o/p:
0 1 3 5 8 9 
