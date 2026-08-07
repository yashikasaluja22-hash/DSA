#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(), arr.end());

    int lastSmaller = INT_MIN;
    int count = 0;
    int longest = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] == lastSmaller + 1){
            count++;
            lastSmaller = arr[i];
        }
        else if(arr[i] != lastSmaller){
            count = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, count);
    }
    return longest;
}