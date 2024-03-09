#include <iostream>
#include <algorithm>
using namespace std;
int maxGuest(int arr[], int dep[], int m, int n)
{
    sort(arr, arr + m);
    sort(dep, dep + n);
    int i = 1,j = 0, curr = 1, res = 1;
    while (i < m && j < n)
    {
        if (arr[i] <= dep[j])
        {
            curr++;
            i++;
        }
        else
        {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}
int main()
{
    int arr[]={900,600,700};
    int dep[]={1000,800,730};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(dep)/sizeof(dep[0]);
    cout<<maxGuest(arr,dep,m,n);
    return 0;
}