#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s = "code library";
    map<char,int> m;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        m[s[i]]++;
    }
    for(auto k:m){
        if(k.second > 1){
            cout<<k.first<<" "<<"count = "<< k.second <<endl;
        }
    }
    
    
    return 0;
}
//Next, the program uses a for loop to iterate through each character in the string s. Inside the loop, the program increments the count for the current character in the map m using the m[s[i]]++ statement.

// After counting all the characters, the program uses another for loop to iterate through each element in the map m. For each element, it checks if the count is greater than 1 using the if(k.second > 1) statement. If the count is greater than 1, it prints the character and its count using the cout<<k.first<<" "<<"count = "<< k.second <<endl; statement.