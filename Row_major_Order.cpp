#include <iostream>
using namespace std;

int main()
{
   int arr[2][3]={{1,2,3},{4,5,6}};
   int *base=&arr[0][0];
   int rows=2,cols=3;
   cout<<"ROW MAJOR ORDER ADDRESS CALCULATION: \n";
   for(int i=0;i<rows;i++){
       for(int j=0;j<cols;j++){
           cout<<"ADDRESS OF ARR["<<i<<"]["<<j<<"]:"<<(base+i*rows+j)<<endl;
       }
   }

    return 0;
}
