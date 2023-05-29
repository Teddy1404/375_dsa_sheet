//repeat and missing
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void repeatAndMis(vector<int>& arr, int& repeat, int& missing){
 int  n = arr.size();
 for (int i = 0; i < n; i++)
 {
    int index = abs(arr[i])-1;
    if(arr[index]<0){
        repeat = abs(arr[i]);
    }
    else{
        arr[index] = -arr[index];
    }
 }
   for (int i = 0; i < n; i++)
   {
    /* code */
    if(arr[i]>0){
        missing = i+1;;
        break;
    }
   }
   
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,4,3};
    int repeat,missing;
    repeatAndMis(arr,repeat,missing);
    cout<<" Duplicate "<<repeat<<" Missing "<<missing<<endl;
    /* code */
    return 0;
}
