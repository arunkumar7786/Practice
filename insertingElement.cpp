#include <iostream>
using namespace std;

int main() {
    int val,pos;
    cin>>val>>pos;
    int arr[6] = {1,2,3,4,5};
    for(int i=6; i>pos; i--){
        arr[i] = arr[i-1]; 
        
    }
    arr[pos] = val;
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}