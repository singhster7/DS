#include <stdio.h>
#include <stdlib.h>
int n;
int a[8];
void random_num(int a[],int n){
    srand(time(0));
    int i;
    for(i=0;i<n;i++){
        a[i]=rand()%1000;
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {

        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
int heapSort(int arr[], int N)
{
    int step = 0;
    for (int i = N / 2 - 1; i >= 0; i--)
    {
        step++;
        heapify(arr, N, i);
    }
    for (int i = N - 1; i >= 0; i--)
    {
        step++;
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }

    return step;
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int n = 5;
    int choice, s, temp, step1, x;
    do
    {
        printf("\n0.for exit \n1. for random generation \n 2.For entering array elements \n3.For heapSort \n4.Extract largest element \n5.Sorting array in descending order then applying heapSort");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(1);
            break;
        case 1:
         printf("enter how many number");
            scanf("%d",&n);
            random_num(a,n);
            break;

        case 2:

            printf("\nEnter the elements for the array");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("\nThe elements of the array are:");
            printArray(a, n);
            break;
        case 3:
            step1 = heapSort(a, n);
            printf("\nThe elements of the array after sorting");
            printArray(a, n);
            printf("no. of steps=%d", step1);
            break;

        case 4:
            x = a[n - 1];
            heapSort(a, n);
            printf("Largest element:%d", x);
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] < a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            step1 = heapSort(a, n);
            printArray(a, n);
            printf("no. of steps=%d", step1);
            break;
        }
    } while (s != 0);
}