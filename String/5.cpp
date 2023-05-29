// first prefix common 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string firstPrefix(vector<string>& strs){
if(strs.empty()){
    return  "";
}
    string first = strs.front(), last = strs.back();
    int i = 0;
    while (i<first.size() && first[i] == last[i])
    {
        i++;
    }
    

return first.substr(0,i);
}
int main(int argc, char const *argv[])
{
  vector<string> strs = {"flower" , "flow" , "flight"};
  cout<< firstPrefix(strs)<<endl;  
    return 0;
}
