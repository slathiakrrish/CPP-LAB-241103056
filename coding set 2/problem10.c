#include<stdio.h>

int main(){
    int n;
    int avg;
    printf("Enter the size of array: \n");
    scanf("%d", &n);

    int *ptr = malloc(sizeof(int) * n);

printf("Enter the elements of array: \n");
for (int i=0; i<n; i++){
    scanf("%d", ptr+i);
}
avg = 0;
for (int i=0; i<n; i++){
    avg += *(ptr+i);
    }
    avg = avg/n;
printf("Average of number is %d", avg);

return 0; 

}