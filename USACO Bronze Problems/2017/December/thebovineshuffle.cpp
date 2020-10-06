#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

int arrindexof(ll arr[], ll el, ll len){
    for (int i = 0; i < len; i++){
        if (arr[i] == el){
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("shuffle.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("shuffle.out", "w", stdout); // redirect the output from the file to stdout
    map<ll, ll> cows;
    ll n;
    cin >> n;
    ll finids[n];
    ll cowlist[n];
    ll oricows[n];
    memcpy(oricows, cowlist, sizeof(oricows));
    ll shuffles[n];
    for (int i = 0; i < n; i++){
        cin >> shuffles[i];
    }
    ll curid;
    for (int i = 0; i < n; i++){
        cowlist[i] = i + 1;
        cin >> curid;
        finids[i] = curid;
    }
    ll vals[n];
    memcpy(vals, cowlist, sizeof(vals));
    for (int i = 0; i < 3; i++){
        for (int i = 0; i < n; i++){
            vals[i] = cowlist[arrindexof(shuffles, i+1, n)];
        }
        memcpy(cowlist, vals, sizeof(cowlist));
    }
    for (int i = 0; i < n; i++){
        cows[cowlist[i]] = finids[i];
    }
    for (int i = 1; i <= n; i++){
        cout << cows[i] << endl;
    }
    return 0;
}
