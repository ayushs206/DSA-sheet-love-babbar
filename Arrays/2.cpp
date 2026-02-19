#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

int main () {
	vector<int> arr = {1, 4, 3, 5, 8, 6};

	vector<int> answ = {INT_MAX, 0};

	for (int &x: arr) {
		answ[1] = max(answ[1], x);
		answ[0] = min(answ[0], x);
	}	

	return answ;
	// cout << answ[0] << " " << answ[1];
}