#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
long long sum;
int maxlen = 0;
int right = 0, left = 0;
int n = a.size();
sum = a[0];
while(right < n){
while(left <= right && sum > k){
  sum -= a[left];
  left++;
}
if(sum == k){
  maxlen = max(maxlen, right - left + 1);
}
right++;
if(right < n) sum += a[right];
}
return maxlen;
}//here the order of code is also very important
//means while pehle aayega ya if aur konsa if statment