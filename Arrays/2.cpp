
//reverser the array
#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
int s = 0 ;
int  end = n-1;
while(s<=end){
    swap(arr[s],arr[end]);
    s++;
    end--;
}
return;
}

int main(int argc, char const *argv[])
{
    int arr[]= {1,2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[0]);
  reverseArray(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout<<" "<<arr[i];
  }
  
    return 0;
}
