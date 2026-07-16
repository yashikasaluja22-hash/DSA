#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(vector<int> arr, int n)
{
int maxi = INT_MIN;
for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        int sum = 0;
        for(int k = i; k < j; k++){
        sum += arr[k];
        maxi = max(sum, maxi);
        }
    }
}
return maxi;
}
//TC = O(N^3)
//SC = O(1)