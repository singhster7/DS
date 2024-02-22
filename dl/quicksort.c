#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void quickSort(int *arr, int lb, int ub)
{
    if (ub < lb)
        return;
    int i = lb - 1, pivot = arr[ub];
    for (int k = lb; k <= ub; k++)
    {
        if (arr[k] < pivot)
        {
            i++;
            swap(arr, k, i);
        }
    }
    swap(arr, i + 1, ub);
    quickSort(arr, lb, i);
    quickSort(arr, i + 2, ub);
}


int main()
{
    int i, n, num, *a, min, max;
    printf("Enter Total Number: ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    srand(time(NULL));
    for (i=0; i<n; i++)
    {
        num = rand()%100+1;
        a[i] = num;
    }
    printf(" before sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
    quickSort(a, 0, n - 1);
    printf(" after sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
return 0;
}