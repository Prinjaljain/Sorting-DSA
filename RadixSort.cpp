#include <iostream>
using namespace std;
void counting_sort(int arr[], int n, int exp)
{
    int count[10];
    int output[n];
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] = count[i - 1] + count[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
void radix_sort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int exp = 1; max / exp > 1; exp *= 10)
    {
        counting_sort(arr, n, exp);
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
    cout << "Enter the value of n: ";
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    radix_sort(arr, n);
    printArray(arr, n);
    return 0;
}