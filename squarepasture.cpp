/*
ID: mathboy6
TASK: test
LANG: C++
*/

/*
//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

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
    FILE* fin = freopen("square.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("square.out", "w", stdout); // redirect the output from the file to stdout

    ll x1_1, x1_2, x2_1, x2_2, y1_1, y1_2, y2_1, y2_2;

    cin >> x1_1 >> y1_1 >> x2_1 >> y2_1;
    cin >> x1_2 >> y1_2 >> x2_2 >> y2_2;

    ll val = max(abs(max(x2_1, x2_2) - min(x1_1, x1_2)), abs(max(y2_1, y2_2) - min(y1_1, y1_2)));

    cout << val * val << endl;
    return 0;
}*/
