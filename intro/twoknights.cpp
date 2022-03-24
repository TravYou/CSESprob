//https://cses.fi/problemset/task/1072/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    long long k;
    cin >> k;
    for (long long i = 1 ; i <= k ; i++){
        cout << (i * i * i * i - i * i)/2 - 4 * (i - 1) * (i - 2) << endl;
    }
    return 0;
}