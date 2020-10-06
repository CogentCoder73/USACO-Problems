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

struct Rect{
    ll x1, x2, y1, y2;
    ll area(){
        return (x2 - x1)*(y2 - y1);
    }
    ll intersect(Rect b){
        return (min(x2, b.x2) - max(x1, b.x1)) * (min(y2, b.y2) - max(y1, b.y1));
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(0);
    FILE* fin = freopen("billboard.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("billboard.out", "w", stdout); // redirect the output from the file to stdout
    Rect feed;
    Rect mower;
    cin >> mower.x1 >> mower.y1 >> mower.x2 >> mower.y2;
    cin >> feed.x1 >> feed.y1 >> feed.x2 >> feed.y2;
    if (feed.x1 <= mower.x1 && feed.x2 >= mower.x2){
        if (feed.y1 <= mower.y1 && feed.y2 >= mower.y2){
            cout << 0 << endl;
        } else {
            if (feed.y1 <= mower.y1 || feed.y2 >= mower.y2){
                cout << mower.area() - mower.intersect(feed) << endl;
            } else {
                cout << mower.area();
            }
        }
    } else {
        if (feed.y1 <= mower.y1 && feed.y2 >= mower.y2){
            if (feed.x1 <= mower.x1 || feed.x2 >= mower.x2){
                cout << mower.area() - mower.intersect(feed) << endl;
            } else {
                cout << mower.area();
            }
        } else {
            cout << mower.area() << endl;
        }
    }


    return 0;
}
