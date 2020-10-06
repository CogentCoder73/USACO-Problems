/*
ID: mathboy6
TASK: mixmilk
LANG: C++
*/

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#define _CRT_SECURE_NO_WARNINGS
/*
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
    FILE* fin = freopen("mixmilk.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("mixmilk.out", "w", stdout); // redirect the output from the file to stdout
    pair<ll, ll> cow1 (0, 0);
    pair<ll, ll> cow2 (0, 0);
    pair<ll, ll> cow3 (0, 0);
    ll curdiff;
    cin >> cow1.first >> cow1.second >> cow2.first >> cow2.second >> cow3.first >> cow3.second;
    for (int i = 1; i <= 33; i++){
        curdiff = min(cow1.second, cow2.first - cow2.second);
        cow1.second -= curdiff;
        cow2.second += curdiff;
        curdiff = min(cow2.second, cow3.first - cow3.second);
        cow2.second -= curdiff;
        cow3.second += curdiff;
        curdiff = min(cow3.second, cow1.first - cow1.second);
        cow3.second -= curdiff;
        cow1.second += curdiff;
    }
    curdiff = min(cow1.second, cow2.first - cow2.second);
    cow1.second -= curdiff;
    cow2.second += curdiff;
    cout << cow1.second << endl;
    cout << cow2.second << endl;
    cout << cow3.second << endl;
    return 0;
}

*/
