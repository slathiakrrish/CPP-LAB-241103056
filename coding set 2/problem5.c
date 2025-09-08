#include<stdio.h>

void transpose(int *ptr, int *res ,int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            *(res + j * n + i ) = *(ptr + i * n + j);
        }
    }
}

int main(){
    int n;
   printf("Enter the no. of rows and columns of sq matrix: \n");
   scanf("%d", &n);
    int arr[n][n]; int res[n][n];

    printf("Enter the elements of matrix: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
printf("Original matrix: \n");
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        printf("%d", arr[i][j]);
    }
    printf("\n");
}
printf("Transposed matrix: \n");

transpose((int *)arr, (int *)res, n);

for (int i=0; i<n; i++){
     for (int j=0; j<n; j++){
printf("%d", res[i][j]);
}
   printf("\n");
}
return 0;
}