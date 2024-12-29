#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minIdx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}
int  main(){
     int arr[]={8,58,2,1,8,7,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}