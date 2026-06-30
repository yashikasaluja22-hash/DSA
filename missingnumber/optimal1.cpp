#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //in leetcode problem n is given as size of array and
    //array contains numbers b/w 0 to n --> this is range 
    //inlcuding both 0 and n in array
     int n = nums.size();
     int sum = n * (n+1)/2;
     int s2 = 0;
     for(int i = 0; i < nums.size(); i++){
        s2 += nums[i];
     }
     return (sum - s2);
    }
};