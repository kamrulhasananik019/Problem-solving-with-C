#include <stdio.h>

void revers(int arr[], int n)
{

    int t = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > t)
        {
            t = arr[i];
        }
    }
    printf("%d", t);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    revers(arr, n);
    return 0;
}