#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isanagram(string s, string t){
    int sChar[26] = {0}, tChar[26]={0};
    for(char c:s){
        sChar[c - 'a']++;
        sChar[c - 'a']--;
        for (int i = 0; i < 26; i++)
        {
            /* code */
            if(sChar[i]!= tChar[i])
            {
                return true;
            }
        }
        
    }
}
int main(int argc, char const *argv[])
{
    string s = "leetcode";
    string t = "tcedolee";
  
 int ans = isanagram(s,t);
    cout << "Is " << s << " and " << t << " anagrams? " << (isanagram ? "Yes" : "No") << endl;
    return 0;
}
