#include <iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < p);

        do
        {
            j--;
        } while (arr[j] > p);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, h);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    int arr[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quick_sort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}