/*
ID: mathboy6
TASK: test
LANG: C++
*/

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")
/*
#define _CRT_SECURE_NO_WARNINGS

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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("cbarn.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("cbarn.out", "w", stdout); // redirect the output from the file to stdout
    ll n;
    cin >> n;
    ll rooms[2 * n];
    ll val;
    for (int i = 0; i < n; i++){
        cin >> val;
        rooms[i] = val;
        rooms[i + n] = val;
    }
    ll min = -1;
    ll cur;
    for (int i = 0; i < n; i++){
        cur = 0;
        for (int j = 0; j < n; j++){
            cur += j * rooms[i + j];
        }
        if (min == -1 || cur < min){
            min = cur;
        }
    }
    cout << min << endl;

    return 0;
}
*/


