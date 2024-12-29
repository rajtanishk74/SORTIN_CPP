#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ 
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;

    }
}
int main(){
    int arr[]={8,58,2,1,8,7,9,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
/*
time complexity
best case =O(n)
avg case =O(n^2)
worsr case=O(n^2) 

it is stable means if same number occur its sequenxe doesn't change
*/