#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}
