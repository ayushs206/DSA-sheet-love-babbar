#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

/* Approach-1
	Calculate pre-appearence if not appeared then push back to array
*/

int main () {
	vector<int> a = {1, 2, 3, 2, 1};
	vector<int> b = {3, 2, 2, 3, 3, 2};

	unordered_map<int, bool> appear;

	vector<int> arr;
	
	for (int &x: a) {
		if (!appear[x]) arr.push_back(x);
		appear[x]=true;
	}
	for (int &x: b) {
		if (!appear[x]) arr.push_back(x);
		appear[x]=true; 	
	}

	return arr;
}