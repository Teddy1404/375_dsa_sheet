// group anagras
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


vector<vector<string>> groupAnagrams (vector<string>& strs){
    unordered_map<string ,vector<string>> map;
    for(string s: strs){
    string sorted_s = s ;
    sort(sorted_s.begin(),sorted_s.end());
    map[sorted_s].push_back(s);
    }

    vector<vector<string>> res;
    for(auto it = map.begin(); it!=map.end(); ++it)
    {
          res.push_back(it->second);
    }
    return res;
}
int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> res = groupAnagrams(strs);
    for (vector<string> v : res) {
        for (string s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}