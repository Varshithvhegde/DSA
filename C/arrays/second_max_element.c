#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int a[n], max = 0, second = 0;
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
        {
            second = max;
            max = a[i];
        }
    }
    printf("Second Maximum Element of an Array is %d", second);
}
