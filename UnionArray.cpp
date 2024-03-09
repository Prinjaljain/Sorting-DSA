#include <iostream>
using namespace std;
void all_elements(int a[], int b[], int n, int p)
{
    int i, j = 0;
    while (i < n && j < p)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n)
    {
        if (i > 0 && a[i] != a[i - 1])
        {
            cout<<a[i]<<" ";
            i++;
        }
    }
    while(j<p){
        if (j > 0 && b[j] != b[j - 1])
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}
int main()
{
    int n, p;
    cout << "Enter size of first array: ";
    cin >> n;
    cout << "Enter size of second array: ";
    cin >> p;
    int a[n], b[p];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
    }
    cout << "Union of arrays: ";
    all_elements(a, b, n, p);
    return 0;
}