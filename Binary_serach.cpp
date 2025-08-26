# include <iostream>
using namespace std;

// Sorted Array in Binary Search
// Time Complexity(Best case) = O(1)
// Time Complexity(Avg case and Worst case) = O(log(n))
int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
    int tar;
    cin >> tar;

    int start = 0 , end = size-1;

    while(start <= end){
    int mid = (start + (end-start))/2;
        if (arr[mid] == tar){   
            cout << mid << endl;
            break;
        }
        else if (arr[mid] < tar)
            start = mid+1;
        else if (arr[mid] > tar)
            end = mid-1;
    }
    return 0;
}
