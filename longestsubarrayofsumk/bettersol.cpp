#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
long long sum = 0;
int maxlen = 0;
map<long long, int> presummap;
for(int i = 0; i < a.size(); i++){
    sum += a[i];
    if(sum == k){
      maxlen = max(maxlen, i+1);
    }
    int rem = sum - k;
    if(presummap.find(rem) != presummap.end()){
        int len = i - presummap[rem];
        maxlen = max(maxlen, len);
    } 
    presummap[sum] = i;
}
return maxlen;
}//what a problem solution dude