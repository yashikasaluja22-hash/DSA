#include<vector>
#include <bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
map<long long, int> mpp;
for(int i = 0; i < arr.size(); i++){
	mpp[arr[i]]++;
}
for(auto it : mpp){
	if(it.second == 1) return it.first;
}
}