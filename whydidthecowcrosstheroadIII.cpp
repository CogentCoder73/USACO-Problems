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
    FILE* fin = freopen("cowqueue.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("cowqueue.out", "w", stdout); // redirect the output from the file to stdout
    ll n;
    cin >> n;
    vector<ll> starts;
    vector<ll> times;
    vector<pair<ll, ll> > info;
    ll curtime = 0;
    ll curcow = 0;
    ll cur1;
    ll cur2;
    for (int i = 0; i < n; i++){
        cin >> cur1;
        cin >> cur2;
        info.push_back({cur1, cur2});
    }
    sort(info.begin(), info.end());
    for (auto el : info){
        starts.push_back(el.first);
        times.push_back(el.second);
    }
    while (curcow < n){
        if (curtime > starts[curcow]){
            curtime += times[curcow];
            curcow += 1;
        } else {
            curtime = starts[curcow] + times[curcow];
            curcow += 1;
        }
    }
    cout << curtime << endl;

    return 0;
}
*/


