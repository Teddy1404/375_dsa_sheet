#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isParen(string s){
    stack<int> stack;
    for(char c:s){
        if(c == '(' || c == '{' || c == '['){
            stack.push(c);
        }
        else{
            if(stack.empty()){
                return false;
            }
            char top = stack.top();
            stack.pop();
            if((c == ')' && top!= '(') || (c == '}' && top!= '{') || (c == ']' && top!= '[')){
                return false;
            }
        }
    }
    return stack.empty();
}
int main(int argc, char const *argv[])
{
    string s1 = "()";
    cout << isParen(s1) << endl;
    

    return 0;
}
