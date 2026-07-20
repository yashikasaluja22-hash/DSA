#include <bits/stdc++.h> 
using namespace std;
//in this leetcode problem +ve & -ve integers in array are equal. no extra elements
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int posIndex = 0;
    int negIndex = 1;
    int n = nums.size();
    vector<int> ans(n, 0);
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
         ans[negIndex] = nums[i];
         negIndex += 2;  
        }
        else{
        ans[posIndex] = nums[i];
        posIndex += 2;
        }
    } 
    return ans;  
    }
};
//and u need to put +ve elements at +ve indices
//playlist vid - 9