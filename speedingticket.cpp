/*
ID: mathboy6
TASK: mixmilk
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
    FILE* fin = freopen("speeding.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("speeding.out", "w", stdout); // redirect the output from the file to stdout
    ll N, M;
    ll len, speed;
    cin >> N >> M;
    ll limits[N], limsegs[N], bspeeds[M], bsegs[M];
    for (ll i = 0; i < N; i++){
        cin >> limsegs[i] >> limits[i];
    }
    for (ll i = 0; i < M; i++){
        cin >> bsegs[i] >> bspeeds[i];
    }
    for (int i = 1; i < N; i++){
        limsegs[i] += limsegs[i - 1];
    }
    for (int i = 1; i < M; i++){
        bsegs[i] += bsegs[i - 1];
    }
    ll maxex = 0;
    ll curseg = 0;
    ll curbseg = 0;
    for (int i = 1; i <= 100; i++){
        if (i > bsegs[curbseg]){
            curbseg += 1;
        }
        if (i > limsegs[curseg]){
            curseg += 1;
        }
        if (bspeeds[curbseg] > limits[curseg]){
            if (bspeeds[curbseg] - limits[curseg] > maxex){
                maxex = bspeeds[curbseg] - limits[curseg];
            }
        }
    }
    cout << maxex << endl;

    return 0;
}*/