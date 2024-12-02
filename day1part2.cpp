// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	vector<int> l1;
	vector<int> l2;
	l1.resize(1000);
	l2.resize(1000);

	unordered_map<int, int> freq;

	for (uint i=0; i<1000; i++) {
		cin >> l1[i];
		cin >> l2[i];

		freq[l2[i]] += 1;
	}

	int sim = 0;

	for (uint i=0; i<1000; i++) {
		sim += freq[l1[i]] * l1[i];
	}

	cout << sim;
}
