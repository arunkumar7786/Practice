#include <iostream>
using namespace std;

int main()
{
   int arr[2][3]={{1,2,3},{4,5,6}};
   int *base=&arr[0][0];
   int rows=2,cols=3;
   cout<<"COLUMN MAJOR ORDER ADDRESS CALCULATION: \n";
   for(int i=0;i<cols;i++){
       for(int j=0;j<rows;j++){
           cout<<"ADDRESS OF ARR["<<i<<"]["<<j<<"]:"<<(base+j*cols+i)<<endl;
       }
   }

    return 0;
}