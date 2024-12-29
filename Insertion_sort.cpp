#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
     int arr[]={8,58,2,1,8,7,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}