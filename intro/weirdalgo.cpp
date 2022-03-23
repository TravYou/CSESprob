//https://cses.fi/problemset/task/1068

#include<iostream>

using std::cin;
using std::cout;

void weird(unsigned long n){
    cout << n << " ";
    if (n == 1){
        return;
    }
    if (n%2){
        n = 3*n + 1;
        weird(n);
    }else{
        n /= 2;
        weird(n);
    }
}

int main(){
    unsigned long n = 0;
    cin >> n;
    weird(n);
    return 0;
}