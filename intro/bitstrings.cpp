#include <bits/types/FILE.h>
#include <iostream>

using std::cin;
using std::cout;

int main(){
    int n;
    cin >> n;
    unsigned long res = 0;
    for (int i = 0; i < n; i++){
        res = (res << 1) | 1;
        res = res%1000000007;
    }
    cout << res+1;
    return 0;
}