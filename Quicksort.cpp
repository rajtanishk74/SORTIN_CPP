#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end){
        int pos=start;
        for(int i=start;i<=end;i++){
            if(arr[i]<=arr[end]){
                swap(arr[i],arr[pos]);
                pos++;
            }
        }
        return pos-1;
}

 void quicksort(int arr[],int start,int end){
    if(start>=end)
    return;
    int pivot=partition(arr,start,end);
    //left side
    quicksort(arr,start,pivot-1);
    //right side
    quicksort(arr,pivot,end);
}
int main()
{
     int arr[]={8,58,2,1,8,7,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}