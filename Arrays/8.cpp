#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

/* Approach-1
	For every size element, iterate and calculate sum;
*/

/* Approach-2
	pre calculate sums and then for every size of sub-array calculate sums
*/

int main () {
	vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

	vector<int> presum(arr.size()+1, 0);
	presum[0]=0;

	for (int i=0; i<arr.size(); i++) {
		presum[i+1]=presum[i]+arr[i];
	}

	vector<int> poss_sums;

	for (int i=1; i<=arr.size(); i++) {
		int maxSum = 0;

		poss_sums.push_back(maxSum);
	}

	cout << *max_element(poss_sums.begin(), poss_sums.end());
}