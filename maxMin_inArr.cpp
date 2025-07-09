#include <iostream>
using namespace std;

int f1(int arr[],int n){
  int max = arr[0];
  for(int i=1; i<n; i++){
    if(arr[i]>max) max = arr[i];
  }
  return max;

}
int f2(int arr[],int n){
  int min = arr[0];
  for(int i=1; i<n; i++){
    if(arr[i]<min) min = arr[i];
  }
  return min;

}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

   cout<<"Max: "<<f1(arr,n)<<endl;
   cout<<"Min: "<<f2(arr,n);
}