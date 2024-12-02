// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> l1;
    vector<int> l2;
    l1.resize(1000);
    l2.resize(1000);

    for (uint i=0; i<1000; i++) {
        cin >> l1[i];
        cin >> l2[i];
    }

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    int ans = 0;

    for (uint i=0; i<1000; i++) {
        ans += abs(l1[i] - l2[i]);
    }

    cout << ans;
}
