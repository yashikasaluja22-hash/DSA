#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
    int len = 0;
     for(int i = 0; i < arr.size(); i++){
         int sum = 0;
         for(int j = i; j < arr.size(); j++){
             sum += arr[j];
             if(sum == k) len = max(len, j-i+1);
         }
     }
     return len;
    }
};