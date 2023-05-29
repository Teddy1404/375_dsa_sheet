//Arrange given numbers to form the biggest number
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    return (a + b > b + a);
}

int main(){
    vector<string> arr;
    string s;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> s;
        arr.push_back(s);
    }

    sort(arr.begin(), arr.end(), compare);

    cout << "The biggest number that can be formed is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
