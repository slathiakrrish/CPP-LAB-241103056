#include <stdio.h>

void add(int *ptr1, int *ptr2, int *sum, int m, int n)
{
    for (int i = 0; i < m * n; i++)
    {
        sum[i] = ptr1[i] + ptr2[i];
    }
}
int main()
{
    int m, n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &m, &n);

    int arr1[m][n];

    printf("Enter the elements of first array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[m][n];

    printf("Enter the elements of second array: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum[m][n];

    add((int *)arr1, (int *)arr2, (int *)sum, m, n);
    printf("Sum of Arrays: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
