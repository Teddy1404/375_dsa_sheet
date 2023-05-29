#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int x = n / 2;
        int y = n / 2;
        if (n % 2 == 1) {
            y += 1;
        }
        if(x == 1){
            cout<< x-1<<" "<<y<<endl;
        }
        else{
      cout << x<< " " << y << endl;
        }
  
    }

    return 0;
}
