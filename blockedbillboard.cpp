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

struct Rect {
    int x1,y1,x2,y2;
    int area() { return (y2-y1)*(x2-x1); }
};

int intersect(Rect p, Rect q){
    int xOverlap = max(0,min(p.x2,q.x2)-max(p.x1,q.x1));
    int yOverlap = max(0,min(p.y2,q.y2)-max(p.y1,q.y1));
    return xOverlap*yOverlap;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    FILE* fin = freopen("billboard.in", "r", stdin);// redirect the input from the file to stdin
    FILE* fout = freopen("billboard.out", "w", stdout); // redirect the output from the file to stdout
    Rect a, b, t;  // billboards a, b, and the truck
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
    cout << a.area()+b.area()-intersect(a,t)-intersect(b,t) << endl;
}*/
