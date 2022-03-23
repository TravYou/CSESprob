//https://cses.fi/problemset/task/1682

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::cerr;
using std::vector;
using std::endl;

void dfs(vector<unsigned int> *dfsmap, bool *tfmap, unsigned int start, unsigned int last){
    tfmap[start] = true;
    for (vector<unsigned int>::const_iterator it = dfsmap[start].cbegin(); it != dfsmap[start].cend(); ++it){
        if (*it != last && tfmap[*it] != true){
            dfs(dfsmap, tfmap, *it, start);
        }
    }
    
}


int main(){

    int maxN = 1e5 + 1;

    //PART1: Parse n and m
    unsigned int n, m;
    cin >> n >> m;
    if (n > 1e5 || m > 2*1e5 + 1){
        cerr << "[ERROR]Wrong input value";
        return 1;
    }

    //PART2: Read in relationships, store in forward and reverse map
    vector<unsigned int> fwmap[maxN];
    vector<unsigned int> rvmap[maxN];
    unsigned int a, b;
    for (unsigned int i = 0; i < m; i++){
        scanf("%u %u", &a, &b);
        fwmap[a].push_back(b);
        rvmap[b].push_back(a);
    }

    //PART3: Use dfs
    bool fwtf[maxN] = {false};
    bool rvtf[maxN] = {false};
    unsigned int rdnum = rand()%n+1;
    dfs(fwmap, fwtf, rdnum, 0);
    dfs(rvmap, rvtf, rdnum, 0);
    //PART4: Test the result;
    for (unsigned int i = 1; i < n+1; i++){
        if (!fwtf[i]){
            cout << "NO" << endl;
            cout << rdnum << " "<< i << endl;
            return 0;
        }
        if (!rvtf[i]){
            cout << "NO" << endl;
            cout << i << " " << rdnum << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}