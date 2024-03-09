#include <iostream>
using namespace std;
int lomuto_partition(int arr[], int l, int h)
{
    int p = arr[h];
    int i = l - 1;
    for (int j = i + 1; j < h; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i+1;
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
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    lomuto_partition(arr,0,n-1);
    printArray(arr,n);
    return 0;
}