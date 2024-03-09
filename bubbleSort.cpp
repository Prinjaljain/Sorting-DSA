#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={12,23,11,34,25,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}