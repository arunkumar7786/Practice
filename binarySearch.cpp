// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binary(int arr[],int n, int tar){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<tar) start = mid+1;
        else end = mid-1;
    }
    return -1;
}

int main() {
    int n,tar;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>tar;
    cout<<binary(arr,n,tar);
    

    return 0;
}