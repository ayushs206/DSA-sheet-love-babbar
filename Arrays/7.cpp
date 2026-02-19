#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1 

/* Approach-1
	Just swap every element 1 by 1
*/

int main () {
	vector<int> arr = {1, 2, 3, 4, 5};

	int temp = arr[arr.size()-1];
	for (int i=0; i<arr.size(); i++) {
		swap(arr[i], temp);
	}	

	for (int &x: arr) cout << x << " ";
}