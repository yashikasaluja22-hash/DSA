#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
int maxi = INT_MIN;
for(int i = 0; i < n; i++){
    int sum = 0;
    for(int j = i; j < n; j++){
        sum += arr[j];
        maxi = max(sum, maxi);
    }
}
return maxi;
}
//array playlist video = 8
//array may also contain negatives
//always check constraints

//TC = O(N^2)
//SC = O(1)