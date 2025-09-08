#include<stdio.h>

void reversearr(int *arr, int n){
    int *start = arr;
    int *last = arr+n-1;
    int temp;
    while (start<last){
    temp = *start;
    *start = *last;
    *last = temp;
    start++;
    last--;
}
}
void printarr(int *arr, int n){
    for (int i = 0; i<n; i++){
        printf("%d\n", *(arr+i));
    }
}
int main(){
    int n;
printf("Enter the no. of elements n: ");
scanf("%d", &n);
 int arr[n];
  for (int i =0; i<n; i++){
    scanf("%d", (arr+i));
  }
reversearr(arr, n);
printf("Reversed array: \n");
printarr(arr, n);
return 0;
}