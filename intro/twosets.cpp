//https://cses.fi/problemset/task/1092

#include <iostream>
#include <ostream>

using std::cin;
using std::cout;
using std::endl;

bool issetable(int n){
    return ((n%2)?(!((n+1)/2%2)):(!((n/2)%2)));
}

int main(){
    int n;
    cin >> n;
    if (!issetable(n)){
        cout << "NO";
    }else{
        cout << "YES" << endl;
        int mid = n / 2 + 1;
        int secmid = mid / 2;

        cout << (n - n/2) << endl;
        for (int i = 1; i < secmid; i++){
            cout << i << " " << n-i+1 << " ";
        }
        cout << secmid << " " << (n%2?mid:(secmid+mid)) << endl;

        cout << n/2 << endl;
        for (int i = secmid+1; i < mid; i++){
            cout << i << " " << n-i+1 << " ";
        }
        if (n%2){
            cout << mid+secmid;
        }
        cout << endl;
    }

    return 0;
}