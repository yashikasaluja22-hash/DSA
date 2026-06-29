//Given two integer arrays nums1 and nums2, return an array of their intersection.
//Each element in the result must be unique and you may return the result in any order.
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> ansSet;

        for (int num : nums2) {
            if (s.find(num) != s.end()) {
                ansSet.insert(num);
            }
        }

        vector<int> ans(ansSet.begin(), ansSet.end());
        return ans;
    }
};