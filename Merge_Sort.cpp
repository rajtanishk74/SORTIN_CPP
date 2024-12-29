#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int  mid,int end){
    vector<int>temp(end-start+1);
    int left=start;
    int right=mid+1;
    int idx=0;
    while(left<=mid&& right<=end){
        if(arr[left]<=arr[right]){
            temp[idx]=arr[left];
            idx++;
            left++;
        }
        else{
            temp[idx]=arr[right];
            idx++;
            right++;
        }
    }
    //left array is not empty yet
    while(left<=mid){
        temp[idx]=arr[left];
        idx++;
        left++;
    }
    //right array is not empty yet
    while(right<=end){
        temp[idx]=arr[right];
        idx++;
        right++;
    }
    idx=0;
    //put these value in original array
    while(start<=end){
        arr[start]=temp[idx];
        start++;
        idx++;
    }

}
void mergesort(int arr[],int start,int end){
    if(start==end)
    return;
    int mid=start+(end-start)/2;
    //left side
    mergesort(arr,start,mid);
    //right side
    mergesort(arr,mid+1,end);
    //merge
    merge(arr,start,mid,end);
}
int main(){
    int arr[]={6,3,1,8,9,10,7,10,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}