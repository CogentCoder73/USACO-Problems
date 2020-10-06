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
    FILE* fin = freopen("lostcow.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("lostcow.out", "w", stdout); // redirect the output from the file to stdout
    ll spos, curpos, target;
    cin >> spos >> target;
    curpos = spos;
    ll cnt = 1;
    ll dist = 0;
    if (target > curpos){
        while (curpos < target){
            dist += abs(curpos - spos - cnt);
            curpos = spos + cnt;
            cnt *= -2;
        }
        dist -= curpos - target;
    } else {
        while (target < curpos){
            dist += abs(curpos - spos - cnt);
            curpos = spos + cnt;
            cnt *= -2;
        }
        dist -= target - curpos;
    }
    cout << dist << endl;

    return 0;
}
