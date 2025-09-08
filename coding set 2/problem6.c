#include<stdio.h>

void maximum(int *arr, int m, int n){
    for (int i=0; i<m; i++){
        int max = *(arr + i * n);
        for (int j=1; j<n; j++){
            int val = *(arr + i * n + j);
            if (val > max){
                max = val;
            }
        }
        printf("Maximum of row %d is %d \n", i+1, max);
    }
}

int main(){
    int m, n;
    printf("Enter the rows and columns of array: \n");
    scanf("%d %d", &m, &n);

    int arr[m][n];

    printf("Enter the elements of array: \n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    } 
    printf("Original Array:\n");
     for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d", arr[i][j]);
}
printf("\n");
     }
     int *ptr = &arr[0][0];
        maximum(ptr, m, n);
        return 0;
    }



