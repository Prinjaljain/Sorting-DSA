#include <iostream>
using namespace std;
int countAndmerge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }
    int res = 0;
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
            res = res + (n1 - i);
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n1)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    return res;
}
int count_inversion(int arr[], int l, int h)
{
    int res = 0;
    while (l < h)
    {
        int mid = (l + h) / 2;
        res += count_inversion(arr, l, mid);
        res += count_inversion(arr, mid + 1, h);
        res += countAndmerge(arr, l, mid, h);
    }
    return res;
}
int main()
{
    int arr[] = {2, 5, 8, 11, 3, 6, 9, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << count_inversion(arr, 0, n - 1);
    return 0;
}