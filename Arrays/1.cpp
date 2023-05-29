#include <iostream>
#include <climits>
using namespace std;

void getMaxMin(int arr[],int n, int& min, int& max){
    if(n == 0){
        min = max = 0;
        return;
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    
    
    }




int main() {
  
int arr[]={1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int min , max;
getMaxMin(arr,n,min,max);
cout<< "The minimum value is "<< min<<endl;
cout<<"The minimum value is "<<max<<endl;
  return 0;
}
