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
#include <iterator>
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
void printcows(set<pair<ll, ll> > cows){
    for (auto el : cows){
        cout << "(" << el.first << ", " << el.second << ") ";
    }
    cout << endl;
}
set<pair<ll, ll> > insert(set<pair<ll, ll> > cows, ll v1, ll v2){
    if (v1 > v2){
        cows.insert({v2, v1});
    } else {
        cows.insert({v1, v2});
    }
    return cows;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("tttt.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("tttt.out", "w", stdout); // redirect the output from the file to stdout
    set<ll> cows1;
    string r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    ll s1, s2, s3, s4, s5, s6, s7, s8, s9;
    s1 = (ll) r1.at(0);
    s2 = (ll) r1.at(1);
    s3 = (ll) r1.at(2);
    s4 = (ll) r2.at(0);
    s5 = (ll) r2.at(1);
    s6 = (ll) r2.at(2);
    s7 = (ll) r3.at(0);
    s8 = (ll) r3.at(1);
    s9 = (ll) r3.at(2);
    if (s1 == s2 && s2 == s3){
        cows1.insert(s1);
    }
    if (s4 == s5 && s4 == s6){
        cows1.insert(s4);
    }
    if (s7 == s8 && s7 == s9){
        cows1.insert(s7);
    }
    if (s1 == s4 && s1 == s7){
        cows1.insert(s1);
    }
    if (s2 == s5 && s2 == s8){
        cows1.insert(s2);
    }
    if (s3 == s6 && s3 == s9){
        cows1.insert(s3);
    }
    if (s1 == s5 && s1 == s9){
        cows1.insert(s1);
    }
    if (s3 == s5 && s3 == s7){
        cows1.insert(s3);
    }
    set<pair<ll, ll> > cows;
    if (s1 == s2 && s1 != s3){
        if (s1 > s3){
            cows.insert({s3, s1});
        } else {
            cows.insert({s1, s3});
        }
    }
    if (s1 == s3 && s1 != s2){
        if (s1 > s2){
            cows.insert({s2, s1});
        } else {
            cows.insert({s1, s2});
        }
    }
    if (s2 == s3 && s2 != s1){
        if (s1 > s2){
            cows.insert({s2, s1});
        } else {
            cows.insert({s1, s2});
        }
    }
    if (s4 == s5 && s4 != s6){
        if (s4 > s6){
            cows.insert({s6, s4});
        } else {
            cows.insert({s4, s6});
        }
    }
    if (s4 == s6 && s4 != s5){
        if (s4 > s5){
            cows.insert({s5, s4});
        } else {
            cows.insert({s4, s5});
        }
    }
    if (s5 == s6 && s5 != s4){
        if (s4 > s5){
            cows.insert({s5, s4});
        } else {
            cows.insert({s4, s5});
        }
    }
    if (s7 == s8 && s7 != s9){
        if (s7 > s9){
            cows.insert({s9, s7});
        } else {
            cows.insert({s7, s9});
        }
    }
    if (s7 == s9 && s7 != s8){
        if (s7 > s8){
            cows.insert({s8, s7});
        } else {
            cows.insert({s7, s8});
        }
    }
    if (s8 == s9 && s8 != s7){
        if (s7 > s8){
            cows.insert({s8, s7});
        } else {
            cows.insert({s7, s8});
        }
    }
    if (s1 == s4 && s1 != s7){
        if (s1 > s7){
            cows.insert({s7, s1});
        } else {
            cows.insert({s1, s7});
        }
    }
    if (s1 == s7 && s1 != s4){
        if (s1 > s4){
            cows.insert({s4, s1});
        } else {
            cows.insert({s1, s4});
        }
    }
    if (s4 == s7 && s4 != s1){
        if (s1 > s4){
            cows.insert({s4, s1});
        } else {
            cows.insert({s1, s4});
        }
    }
    if (s2 == s5 && s2 != s8){
        if (s2 > s8){
            cows.insert({s8, s2});
        } else {
            cows.insert({s2, s8});
        }
    }
    if (s2 == s8 && s2 != s5){
        if (s2 > s5){
            cows.insert({s5, s2});
        } else {
            cows.insert({s2, s5});
        }
    }
    if (s5 == s8 && s5 != s2){
        if (s2 > s5){
            cows.insert({s5, s2});
        } else {
            cows.insert({s2, s5});
        }
    }
    if (s3 == s6 && s3 != s9){
        if (s9 > s3){
            cows.insert({s3, s9});
        } else {
            cows.insert({s9, s3});
        }
    }
    if (s3 == s9 && s3 != s6){
        if (s6 > s3){
            cows.insert({s3, s6});
        } else {
            cows.insert({s6, s3});
        }
    }
    if (s6 == s9 && s6 != s3){
        if (s6 > s3){
            cows.insert({s3, s6});
        } else {
            cows.insert({s6, s3});
        }
    }
    if (s1 == s5 && s1 != s9){
        if (s1 > s9){
            cows.insert({s9, s1});
        } else {
            cows.insert({s1, s9});
        }
    }
    if (s1 == s9 && s1 != s5){
        if (s1 > s5){
            cows.insert({s5, s1});
        } else {
            cows.insert({s1, s5});
        }
    }
    if (s5 == s9 && s5 != s1){
        if (s1 > s5){
            cows.insert({s5, s1});
        } else {
            cows.insert({s1, s5});
        }
    }
    if (s3 == s5 && s3 != s7){
        if (s7 > s3){
            cows.insert({s3, s7});
        } else {
            cows.insert({s7, s3});
        }    }
    if (s3 == s7 && s3 != s5){
        if (s5 > s3){
            cows.insert({s3, s5});
        } else {
            cows.insert({s5, s3});
        }    }
    if (s5 == s7 && s5 != s3){
        if (s5 > s3){
            cows.insert({s3, s5});
        } else {
            cows.insert({s5, s3});
        }    }
    cout << cows1.size() << endl;
    cout << cows.size() << endl;
    return 0;
}
*/

