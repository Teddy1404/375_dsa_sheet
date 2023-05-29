#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthOfSubstring(string s){
    unordered_set<char> set;
    int left = 0 , right = 0, maxlen = 0;
    while(right < s.size()){
        if(set.find(s[right]) == set.end()){
            set.insert(s[right]);
            maxlen = max(maxlen , (int)set.size());
            right++;
        }
        else{
            set.erase(s[left]);
            left++;
        }
    }
    return maxlen;
}
int main(int argc, char const *argv[])
{
    /* code */
      string s = "abcabcbb";
    cout << lengthOfSubstring(s) << endl; // Output: 3 (abc)
    return 0;
}
