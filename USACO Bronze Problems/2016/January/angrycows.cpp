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
    FILE* fin = freopen("angry.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("angry.out", "w", stdout); // redirect the output from the file to stdout
    ll N;
    cin >> N;
    vector<ll> bales;
    vector<ll> nums;
    ll cur;
    for (ll i = 0; i < N; i++){
        cin >> cur;
        bales.push_back(cur);
    }
    sort(bales.begin(), bales.end());
    for (ll i = 0; i < N; i++){
        set<ll> broken;
        broken.insert(i);
        ll br = 1;
        ll idl = i;
        ll idr = i;
        ll numbroke = 1;
        while (true){
            if (idl <= 0){
                if (idr >= N - 1){
                    break;
                } else {
                    if (bales[idr + 1] <= bales[idr] + br){
                        ll c = idr;
                        while (idr < N-1 && bales[idr + 1] <= bales[c] + br){
                            broken.insert(idr + 1);
                            idr += 1;
                            numbroke += 1;
                        }
                    } else {
                        break;
                    }
                }
            } else {
                if (idr >= N - 1){
                    if (bales[idl - 1] >= bales[idl] - br){
                        ll c = idl;
                        while (idl > 0 && bales[idl - 1] >= bales[c] - br){
                            broken.insert(idl - 1);
                            idl -= 1;
                            numbroke += 1;
                        }
                    } else {
                        break;
                    }
                } else {
                    if (bales[idl - 1] >= bales[idl] - br){
                        ll c = idl;
                        while (idl > 0 && bales[idl - 1] >= bales[c] - br){
                            broken.insert(idl - 1);
                            idl -= 1;
                            numbroke += 1;
                        }
                    } else {
                        idl = 0;
                    }
                    if (idr < N - 1 && bales[idr + 1] <= bales[idr] + br){
                        ll c = idr;
                        while (idr < N - 1 && bales[idr + 1] <= bales[c] + br){
                            broken.insert(idr + 1);
                            idr += 1;
                            numbroke += 1;
                        }
                    } else {
                        idr = N-1;
                    }
                }
            }
            br += 1;
        }
        nums.push_back(numbroke);
        //cout << bales[i] << " " << idl << " " << idr << " " << numbroke << " " << br << endl;
    }
    //for (auto el : nums){
        //cout << el << endl;
    //}
    cout << *max_element(nums.begin(), nums.end()) << endl;
    return 0;
}
