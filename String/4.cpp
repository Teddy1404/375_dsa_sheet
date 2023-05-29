#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string consecutive(string s){
int n = s.length();
if(n<2){
    return s;
}

string result = "";
result = result + s[0];
for (int i = 1; i < n; i++)
{
 if(s[i] != s[i-1]){
 result = result + s[i];
 }
    
}
return result ;
}


int main(int argc, char const *argv[])
{
    string s1 = "aabbbccccddddd";
  cout<<consecutive(s1)<<endl;

 
    return 0;
}
