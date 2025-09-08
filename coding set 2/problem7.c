#include<stdio.h>

void sum(int *arr, int m, int n, int p){
    int total = 0;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<p; k++){
                total += *(arr + i*n*p + j*p + k);
            }
        }
    }
    printf("Sum of 3D array is %d \n", total);
}


int main(){

    int arr[2][2][2];
printf("Enter the elements of array: \n");
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        for (int k=0; k<2; k++){
            scanf("%d", &arr[i][j][k]);
        }
    }
  }
  int *ptr = &arr[0][0][0];
  printf("Original Array:\n");
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        for (int k=0; k<2; k++){
            printf("%d", *(ptr + i*2*2 + j*2 + k));
        }
        printf("\n");
    }
  }
sum(ptr, 2, 2, 2);
return 0;
}

