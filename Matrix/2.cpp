#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

/* Approach-1
	Optimised binary search 
*/

int main () {
	vector<vector<int>> mat = {{1, 5, 9}, {14, 20, 21}, {30, 34, 43}};	
	int x = 14;

	bool found = false;

	int n = mat.size();
	int m = mat[0].size();

	int outlow = 0;
	int outhigh = n-1;
	int middle;

	while (outlow<=outhigh) {
		if (found) break;

		int middle = outlow + (outhigh-outlow)/2;
		
		if (mat[middle][m-1]<x) {
			outlow=middle+1;
			continue;
		}
		if (mat[middle][0]>x) {
			outhigh=middle-1;
			continue;
		}

		int lower = 0;
		int higher = m-1;
		int mid;

		while(lower<=higher) {
			if (found) break;

			int mid = lower + (higher-lower)/2;

			if (mat[middle][mid]>x) {
				higher=mid-1;
			}
			if (mat[middle][mid]<x) {
				lower=mid+1;
			}
			if (mat[middle][mid]==x) {
				return true;
			}
		}

		return false;
	}

	return false;
}