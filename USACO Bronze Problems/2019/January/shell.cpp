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
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    FILE* fin = freopen("shell.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("shell.out", "w", stdout); // redirect the output from the file to stdout
    ll n;
    ll s1, s2, guess;
    cin >> n;
    pair<ll, ll> pt1 (1, 0);
    pair<ll, ll> pt2 (2, 0);
    pair<ll, ll> pt3 (3, 0);
    for (ll i = 0; i < n; i++){
        cin >> s1 >> s2 >> guess;
        if (pt1.first == s1){
            pt1.first = s2;
        } else if (pt1.first == s2){
            pt1.first = s1;
        }
        if (pt2.first == s1){
            pt2.first = s2;
        } else if (pt2.first == s2){
            pt2.first = s1;
        }
        if (pt3.first == s1){
            pt3.first = s2;
        } else if (pt3.first == s2){
            pt3.first = s1;
        }
        if (pt1.first == guess){
            pt1.second += 1;
        }
        if (pt2.first == guess){
            pt2.second += 1;
        }
        if (pt3.first == guess){
            pt3.second += 1;
        }
    }
    cout << max(pt1.second, max(pt2.second, pt3.second)) << endl;
    return 0;
}*/
