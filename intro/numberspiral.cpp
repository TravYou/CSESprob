//https://cses.fi/problemset/task/1071/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    long long x, y, t; 
    cin >> t;
    while(t--){
        cin >> y >> x;
        if (x > y){
            if (x%2){
                cout << (x * x - y + 1);
            }else{
                cout << ((x - 1) * (x - 1) + y);
            }
        }else{
            if (y%2){
                cout << ((y - 1) * (y - 1) + x);
            }else {
                cout << (y * y - x + 1);
            }
        }
        cout << endl;
    }
    return 0;
}