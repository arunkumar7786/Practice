#include <iostream>
#include <climits>
using namespace std;
int main(){
    int x,a,sm;
    cin>>x;
    while(x--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sm = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                a = arr[i]+arr[j] + (j-i);
                if(a<sm) sm= a;
            }
        }
        cout<<sm<<endl;
        
    }
    return 0;
}