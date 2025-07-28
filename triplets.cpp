// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[2][3]={{0,0,3},{0,5,0}};
    cout<<"Triplets are given below:\n";
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j]!=0){
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
    }
    return 0;
}