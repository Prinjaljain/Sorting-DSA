#include <iostream>
#include <algorithm>
using namespace std;
void sorted_array(int arr[], int n)
{
    int i = -1;
    int j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);

        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sorted_array(arr, n);
    printArray(arr, n);
    return 0;
}