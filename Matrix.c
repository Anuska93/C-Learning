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

  
  #include <stdio.h>
int mulMatrix(int m,int n, int p,int a[m][n],int b[n][p]);
int main(){
    int m,n,p,o,i,j;
    printf("\nFor Matrix 1\n\nNumber of rows?\nNumber of columns?\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("\nEnter elements for matrix 1\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("[%d] [%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nFor Matrix 2\n\nNumber of rows?\nNumber of columns?\n");
    scanf("%d%d",&o,&p);
    while(o!=n){
        printf("The number of columns in matrix 1 should be equal to the number of rows in matrix 2\nTRY AGAIN...\n\n");
        printf("\nFor Matrix 2\n\nNumber of rows?\nNumber of columns?\n");
        scanf("%d%d",&o,&p);
    }
    int b[n][p];
    printf("\nEnter elements for matrix 2\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("[%d] [%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    mulMatrix(m,n,p,a,b);
    return 0;
}
int mulMatrix(int m,int n, int p,int a[m][n],int b[n][p]){
    int i,j,k;
    int c[m][p];
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]+= a[i][k]*b[k][j];
            }
        }
    
    }
    printf("\n\nResultant Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}
