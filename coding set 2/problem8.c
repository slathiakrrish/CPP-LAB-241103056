#include <stdio.h>

int main()
{
    int arr[3][3][3];
    printf("Enter the elements of array: \n");

    int *ptr = &arr[0][0][0];
   // (int*)ptr[3][3] = arr;
    for (int i = 0; i < 27; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("The elements of array are: \n");
    for (int i = 0; i < 27; i++)
    {
        printf("%d", *(ptr + i));
    }
    return 0;
}
