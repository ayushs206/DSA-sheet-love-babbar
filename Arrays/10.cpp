#include <bits/stdc++.h>
using namespace std;

/* Approach 2
    
Calculate maxReach, when reach at last compute further

        int n = arr.size();

        if (arr[0] == 0)
            return -1;

        int maxReach = 0;
        int currReach = 0;
        int jump = 0;

        for (int i = 0; i < n; i++){
            maxReach = max(maxReach, i + arr[i]);
            if (maxReach >= n - 1){
                return jump + 1;
            }

            if (i == currReach){

                if (maxReach == i){
                    return -1;
                }

                else{
                    jump++;
                    currReach = maxReach;
                }
            }
        }

        return -1;
*/

int main()
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int result = minJumps(arr);

    cout << result;
}

/* Approach 1 - Recursion

int anssteps = INT_MAX;

void recr(vector<int> &arr, int indx, int steps) {
    if (indx>=arr.size()) return;

    steps++;

    for (int i=1; i<=arr[indx]; i++) {
        recr(arr, indx+i, steps);
        if (indx+i==arr.size()-1) {
            anssteps=min(steps, anssteps);
        }
    }
}

int minJumps(vector<int> &arr)
{
    recr(arr, 0, 0);
    if (anssteps==INT_MAX) anssteps=-1;
    return anssteps;
}

*/