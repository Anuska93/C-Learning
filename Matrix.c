1. Add two matrices.

  #include <stdio.h>
int addMatrix(int r1,int c1,int a[r1][c1],int b[r1][c1]);
int main(){
    int r1,c1,i,j;
    printf("Number of rows?\n");
    scanf("%d",&r1);
    printf("Number of columns?\n");
    scanf("%d",&c1);
    while(c1>10){
        printf("\ncolumn cannot be greater than 10");
        printf("\nNumber of columns?\n");
        scanf("%d",&c1);
    }
    int a[r1][c1];
    printf("Enter elements for matrix 1\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("[%d] [%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    int b[r1][c1];
    printf("Enter elements for matrix 2\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("[%d] [%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }printf("\n");
    }
    printf("\nMatrix A :: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("\nMatrix B :: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    addMatrix(r1,c1,a,b);
    return 0;
}

 int addMatrix(int r1,int c1,int a[r1][c1],int b[r1][c1]){
     int i,j;
     int c[r1][c1];
    printf("\nAdding two matices....");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];
        }printf("\n");
    }
    printf("\nResultant Matrix :: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
 }

2. Multiplication of two matrices.

  
