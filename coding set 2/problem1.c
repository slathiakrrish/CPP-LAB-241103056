#include<stdio.h>
 
void maxmin(int *arr, int n, int *max, int *min){
    *max = *min = arr[0];
    for (int i=1; i<n; i++){
        if (arr[i]> *max){
            *max = arr[i];
        }
        if (arr[i]< *min){
            *min = arr[i];
        }
    }
}
int main(){
    int n; 
    int max;
    int min;
    printf("no. of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:");
    for (int i=0; i<n; i++){
       scanf("%d", &(arr[i]));
}
    maxmin(arr, n, &max, &min);

    printf("maximum element is %d\n", max);
    printf("minimum element is %d", min); 

    return 0;

}