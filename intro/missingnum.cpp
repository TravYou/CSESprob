#include<iostream>

using std::cin;
using std::cout;

int main(){
    int ind = 0;
    int temp = 0;
    long long inp = 0;
    cin >> ind;
    for (int i = 1; i < ind; i++){
        cin >> temp;
        inp = inp - temp + i;
    }
    inp += ind;
    cout << inp;
    return 0;
}