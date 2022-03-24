//https://cses.fi/problemset/task/1070/

#include <iostream>

using std::cin;
using std::cout;

int main(){
    unsigned int max;
    cin >> max;
    if (!(((max-max%2)-1) > 1)){
        cout << "NO SOLUTION";
    }else{
        for (unsigned int i = 2; i <= max; i+=2){
            cout << i << " ";
        }
        for (unsigned int i = 1; i <= max; i+=2){
            cout << i << " ";
        }
    }
    return 0;
}