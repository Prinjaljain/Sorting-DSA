#include <iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
            int temp=arr[min_ind];
            arr[min_ind]=arr[i];
            arr[i]=temp;
        }
        
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
    int arr[] = {13,2,45,36};
    int n = sizeof(arr) / sizeof(arr[0]);
    SelectionSort(arr, n);
    printArray(arr, n);
    return 0;
}