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

vector<tuple<ll, ll, ll> > sortterms(vector<tuple<ll, ll, ll> > inputs, vector<ll> days){
    vector<tuple<ll, ll, ll> > res;
    for (int i = 0; i < days.size(); i++){
        for (auto el : inputs){
            if (get<0>(el) == days[i]){
                res.push_back(el);
                break;
            }
        }
    }
    return res;
}

bool compres(ll milknums[], ll prevmilks[]){
    if (milknums[0] > milknums[1] && milknums[0] > milknums[2]){
        if (prevmilks[0] > prevmilks[1] && prevmilks[0] > prevmilks[2]){
            return false;
        }
        return true;
    }
    if (milknums[1] > milknums[0] && milknums[1] > milknums[2]){
        if (prevmilks[1] > prevmilks[0] && prevmilks[1] > prevmilks[2]){
            return false;
        }
        return true;
    }
    if (milknums[2] > milknums[1] && milknums[2] > milknums[0]){
        if (prevmilks[2] > prevmilks[1] && prevmilks[2] > prevmilks[0]){
            return false;
        }
        return true;
    }
    if (milknums[0] == milknums[1] && milknums[0] > milknums[2]){
        if (prevmilks[0] == prevmilks[1] && prevmilks[0] > prevmilks[2]){
            return false;
        }
        return true;
    }
    if (milknums[1] == milknums[0] && milknums[1] > milknums[2]){
        if (prevmilks[1] == prevmilks[0] && prevmilks[1] > prevmilks[2]){
            return false;
        }
        return true;
    }
    if (milknums[2] == milknums[1] && milknums[2] > milknums[0]){
        if (prevmilks[2] == prevmilks[1] && prevmilks[2] > prevmilks[0]){
            return false;
        }
        return true;
    }
    if (milknums[0] == milknums[1] && milknums[0] == milknums[2]){
        if (prevmilks[0] == prevmilks[1] && prevmilks[0] == prevmilks[2]){
            return false;
        }
        return true;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("measurement.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("measurement.out", "w", stdout); // redirect the output from the file to stdout
    ll numdays;
    cin >> numdays;
    ll milknums[3];
    vector<tuple<ll, ll, ll> > inputs;
    vector<ll> days;
    milknums[0] = 7;
    milknums[1] = 7;
    milknums[2] = 7;
    ll curday;
    string curcow;
    ll curchange;
    ll curind;
    char curfirst;
    for (ll i = 0; i < numdays; i++){
        cin >> curday;
        cin >> curcow;
        cin >> curchange;
        days.push_back(curday);
        curfirst = curcow.at(0);
        curind = 2;
        if ((ll) curfirst == 66){
            curind = 0;
        } else if ((ll) curfirst == 69){
            curind = 1;
        }
        tuple<ll, ll, ll> curtup(curday, curind, curchange);
        inputs.push_back(curtup);
    }
    sort(days.begin(), days.end());
    auto sorted = sortterms(inputs, days);
    ll cur = 0;
    ll prevmilks[3];
    prevmilks[0] = 7;
    prevmilks[1] = 7;
    prevmilks[2] = 7;

    for (auto el : sorted){milknums[get<1>(el)] += get<2>(el);
        memcpy(res, curres, sizeof(res));
        if (compres(milknums, prevmilks)){
            cur += 1;
        }
        memcpy(prevmilks, milknums, sizeof(prevmilks));
    }
    cout << cur << endl;
    return 0;
}*/
