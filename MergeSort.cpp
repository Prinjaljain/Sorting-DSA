#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int m = mid - low + 1;
    int n = high - mid;
    int a[m];
    int b[n];
    for (int i = 0; i < m; i++)
    {
        a[i] = arr[low + i];
    }
    for (int j = 0; j < n; j++)
    {
        b[j] = arr[mid + j + 1];
    }
    int i, j = 0;
    int k = low;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < m)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int arr[]={12,23,11,24,45,34,56,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=size-1;
    mergeSort(arr,low,high);
    printArray(arr,size);
    return 0;
}