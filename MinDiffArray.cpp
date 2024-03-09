#include <iostream>
#include<algorithm>
using namespace std;
int min_diff(int arr[], int n)
{
    //Naive Method
    // int min_d = INT_MAX;
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         min_d = min(min_d, abs(arr[i] - arr[j]));
    //     }
    // }
    // return min_d;

    sort(arr,arr+n);
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,abs(arr[i]-arr[i-1]));
    }
    return res;
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
    cout<<min_diff(arr, n);
    return 0;
}