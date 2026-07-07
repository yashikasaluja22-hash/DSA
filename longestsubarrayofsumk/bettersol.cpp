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
    if(presummap.find(sum) == presummap.end()){
    presummap[sum] = i;
    }
}
return maxlen;
}
/*so 17 code line means if there is an array --> 2 0 0 3
then in above array till i = 2, sum will be same
so to update hashmap and store it with 2->0, 2->1, 2->2 key-vales
otherwise it will be like 2->0 then it will updated with different index no. : 2->1
and then like this 2->2
so otherwise value of key will changed not new key will not be added/made if sum is same, if u dont write line 17*/