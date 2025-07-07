#include <iostream>
using namespace std;
void printAll(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[] = {2,3,4,4,5,6,7};
    printAll(arr,7);

    return 0;
}