// mximum subarray
#include<iostream>
using namespace std;
int maxSubarray(int arr[],int n ){
  
     int maxsub = arr[0];
     int currsum = 0;

     for(int i=0; i<n; i++){
         if(currsum<0){
             currsum = 0;
          
         }
            currsum = currsum + arr[i];
             maxsub = max(maxsub,currsum);
     } 
     return maxsub;  
    

}
int main(int argc, char const *argv[])
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
   int maxsubb = maxSubarray(arr,n);
   cout<<maxsubb<<endl;
    
    return 0;
}
