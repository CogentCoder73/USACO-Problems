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
    FILE* fin = freopen("blocks.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("blocks.out", "w", stdout); // redirect the output from the file to stdout
    map<char, ll> boxes;
    for (int i = 97; i < 123; i++){
        boxes[(char) i] = 0;
    }
    ll n;
    cin >> n;
    string w1, w2;
    vector<char> used1;
    vector<char> used2;
    for (int i = 0; i < n; i++){
        cin >> w1 >> w2;
        for (int i = 0; i < w1.size(); i++){
            used1.push_back(w1.at(i));
        }
        for (int i = 0; i < w2.size(); i++){
            used2.push_back(w2.at(i));
        }
        for (int i = 97; i < 123; i++){
            boxes[(char) i] += max(count(used1.begin(), used1.end(), (char) i), count(used2.begin(), used2.end(), (char) i));
        }
        used1.clear();
        used2.clear();
    }
    for (int i = 97; i < 123; i++){
        cout << boxes[(char) i] << endl;
    }


    return 0;
}
*/