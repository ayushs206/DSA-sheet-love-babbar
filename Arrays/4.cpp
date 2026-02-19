#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

/* Approach 1

	Count the freq and then just put them in array one by one

		vector<int> freq(3, 0);
	    for (int &x: arr) freq[x]++;

	    int prevcount = 0;
	    for (int j=0; j<3; j++) {
		    for (int i=0; i<freq[j]; i++) {
			    arr[prevcount+i]=j;
		    }
		    prevcount+=freq[j];
	    }

*/

int main () {
	
}