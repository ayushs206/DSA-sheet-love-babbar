#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1

/* Approach 1
    make 2 arrays increase all elems of 1, decrease of other,
    now calculate min of every pair
*/

/* Approach 2
    Split the array into 2 parts, increase smaller half and decrease larger half, now calculate min of every pair
*/

int getMinDiff(vector<int> &arr, int k)
{

    int n = arr.size();
    sort(arr.begin(), arr.end());
    int res = arr[n - 1] - arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] - k < 0)
            continue;

        int minH = min(arr[0] + k, arr[i] - k);
        int maxH = max(arr[i - 1] + k, arr[n - 1] - k);
        res = min(res, maxH - minH);
    }

    return res;
}

int main()
{
}