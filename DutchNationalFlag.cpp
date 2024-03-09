#include <iostream>
using namespace std;
void DNF(int arr[], int n)
{
    int l = 0;
    int mid = 0;
    int h = n - 1;
    while (mid <= h)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[l]);
            mid++;
            l++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}
int main()
{
    int arr[] = {2, 2, 1, 2, 0, 0, 1, 1, 0};
    int n = 9;
    DNF(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}