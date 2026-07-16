//hashing
#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n){
unordered_map<long long, int> mpp;
for(int i = 0; i < n; i++){
	mpp[arr[i]]++;
	if(mpp[arr[i]] > (n/2)) return arr[i];
}
return -1;
}
//TC = O(N) + O(N)
//SC = O(N)

/*OR 
for(auto it : mpp){
if(it.second > (n/2)) return it.first;
}
return -1;
*/