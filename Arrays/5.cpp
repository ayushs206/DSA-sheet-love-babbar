#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

/* Approach 1 :
	Let two arrays seperate into positive and negative then combine to main

	vector<int> arr = {1, -1, 3, 2, -7, -5, 11, 6};

	vector<int> pos;
	vector<int> neg;

	for (int i=0; i<arr.size(); i++) {
		if (arr[i]>=0) pos.push_back(arr[i]);
		else neg.push_back(arr[i]);
	}

	int i=0;

	for (int &x: pos) arr[i++]=x;
	for (int &x: neg) arr[i++]=x;
*/

int main () {
}