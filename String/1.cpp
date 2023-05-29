#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// valid
bool valid(char ch){
    if((ch>='a' && ch<='z' || ch>='A' && ch<'Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}

char toLowercase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    return ch;
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool palindrome(string a){
    int s = 0;
    int e = a.length()-1;
    while(s<=e){
        if((a[s]!=(a[e]))){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
bool ispalindrome(string s){
    string temp;
    for(int i=0; i<s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    for (int i = 0; i < temp.length(); i++)
    {
        /* code */
        temp[i] = toLowercase(temp[i]);
    }
    return palindrome(temp);
    
}
int main(int argc, char const *argv[])
{
    string strr = "race a car";
    int ans = ispalindrome(strr);
    if(ans == 1)
        cout << "It is a palindrome!";
    else
        cout << "It is not a palindrome!";
    return 0;
}
