#include<iostream>

using std::cin;
using std::cout;

int main(){
    int sz = 0;
    cin >> sz;

    long long max;
    cin >> max;

    long long step = 0;
    long long temp;
    for (int i = 1; i < sz; i++){
        cin >> temp;
        if (temp < max){
            step += (max - temp);
        }else if (temp > max){
            max = temp;
        }
    }
    cout << step;
    return 0;
    
}