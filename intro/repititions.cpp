//https://cses.fi/problemset/task/1069

#include <algorithm>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main(){
    string dna;
    cin >> dna;
    int count = 1;
    int max = 1;
    for (int i = 0; i < (int)dna.length(); i++){
        if (dna[i] == dna[i+1]){
            count++;
        }else{
            max = std::max(count, max);
            count = 1;
        }            

    }
    cout << max;
    return 0;
}