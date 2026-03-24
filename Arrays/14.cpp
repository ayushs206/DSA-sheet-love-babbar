#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/dsa/dsa-sheet-by-love-babbar/

/* Approach 1
	moving in each cell, marking every number from min to max as available
	then last iterating through marked indexes existence and calculate min, max limit
	And push to array
*/

/* Approach 2

vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        if (arr.empty()) return {};

        sort(arr.begin(), arr.end());

        vector<vector<int>> result;
        result.push_back(arr[0]);

        for (int i = 1; i < arr.size(); i++) {
            auto &last = result.back();

            if (arr[i][0] <= last[1]) {
                last[1] = max(last[1], arr[i][1]);
            } 
            else {
                result.push_back(arr[i]);
            }
        }

        return result;
    }

*/    


int main () {
	
}