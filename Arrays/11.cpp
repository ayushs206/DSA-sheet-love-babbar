#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

/* Approach 1
	Use 2 Loops to iterate.
	O(n*n)
	O(1)
*/

/* Approach 2
	Declare hashMap and set appearence 1, if alr 1 then add to vector
	O(n)
	O(n)
*/

/* Approach 3
	ek element lo uskae index pae jaake negative krdo ab agr voah pehle sae negative h index toah voh element dusri baar dikha tumhe so uska abosulte value joh bhi h voah answ mae aajyega
	O(n)
	O(1)
*/

int main () {
	vector<int> arr = {10, 2, 8, 9, 8, 5, 5, 3, 7, 3};

	vector<int> elems;
		
	int n=arr.size();

	for (int i=0; i<n; i++) {
		int index = abs(arr[i]) - 1;

        if (arr[index] < 0) {
            elems.push_back(abs(arr[i]));
        } else {
            arr[index] = -arr[index];
        }
	}

	for (int elem: elems) {
		cout << elem << " ";
	}
}