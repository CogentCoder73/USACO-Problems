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
void printvector(vector<ll> vll, ll size){
    cout << "[";
    for (ll i = 0; i < size - 1; i++){
        cout << vll[i] << ", ";
    }
    if (size > 0){
        cout << vll[size - 1];
    }
    cout << "]" << endl;
}
ll minindicesof(vector<pair<ll, ll> > used, pair<ll, ll> find, ll length){
    vector<ll> indices;
    ll numfound = 0;
    for (ll i = 0; i < length; i++){
        if (used[i].first == find.first && used[i].second == find.second){
            indices.push_back(i);
            numfound++;
        }
        //cout << "(" << used[i].first << ", " << used[i].second << "); (" << find.first << ", " << find.second << ")" << endl;
    }
    //printvector(indices, numfound);
    ll mindiff = -1;
    ll val;
    for (ll i = 0; i < numfound - 1; i++){
        val = indices[i + 1] - indices[i];
        if (val != -1 && (val < mindiff || mindiff == -1)){
            mindiff = val;
        }
    }
    return mindiff;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("mowing.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("mowing.out", "w", stdout); // redirect the output from the file to stdout
    ll n;
    ll x;
    ll size = 1;
    char cur;
    ll dist;
    vector<pair<ll, ll> > used;
    pair<ll, ll> curpos = {0, 0};
    set<pair<ll, ll> > uniqused;
    used.push_back(curpos);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> cur;
        cin >> dist;
        size += dist;
        if ((ll) cur == 78) {
            for (int i = 1; i <= dist; i++){
                curpos.second += 1;
                used.push_back(curpos);
                uniqused.insert(curpos);
            }
        } else if ((ll) cur == 69){
            for (int i = 1; i <= dist; i++){
                curpos.first += 1;
                used.push_back(curpos);
                uniqused.insert(curpos);
            }
        } else if ((ll) cur == 87){
            for (int i = 1; i <= dist; i++){
                curpos.first -= 1;
                used.push_back(curpos);
                uniqused.insert(curpos);
            }
        } else {
            for (int i = 1; i <= dist; i++){
                curpos.second -= 1;
                used.push_back(curpos);
                uniqused.insert(curpos);
            }
        }
    }
    ll min = -1;
    ll val;
    for (auto el : uniqused){
       val = minindicesof(used, el, size);
       //cout << val << endl;
       if (val != -1 && (min > val || min == -1)){
           min = val;
           //cout << "(" << el.first << ", " << el.second << ")" << endl;
       }
    }
    cout << min << endl;
    return 0;
}
*/