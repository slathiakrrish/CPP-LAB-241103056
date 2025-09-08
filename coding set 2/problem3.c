#include <stdio.h>

int main()
{
    int n;
    int evensum = 0;
    int oddsum = 0;
    printf("No of elements in array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) % 2 == 0)
        {
            evensum += *(ptr + i);
        }
        if (*(ptr + i) % 2 != 0)
        {
            oddsum += *(ptr + i);
        }
    }
    printf("Sum of even elements: %d\n ", evensum);
    printf("Sum of odd elements: %d", oddsum);

    return 0;
}