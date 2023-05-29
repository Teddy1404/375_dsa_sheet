//product of array except itself
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> Product(vector<int>& arr){
int n = arr.size();
int preproduct = 1;
int postproduct = 1;
vector<int> res(n,1);
for (int i = 0; i < n; i++)
{
    /* code */
    res[i] *= preproduct;
    preproduct *= arr[i];
}
for (int i = n-1; i>=0; i--)
{
    /* code */
    res[i] *= postproduct;
    postproduct *= arr[i];
}

  
   return res;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {1,2,3,4};
    vector<int>res = Product(arr);
    for(int i:res){
        cout<<i<<" ";
    }
    cout<<endl;
   
    return 0;
}

