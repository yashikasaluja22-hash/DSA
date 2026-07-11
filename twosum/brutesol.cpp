#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
vector<pair<int, int>> blah;
for(int i = 0; i < arr.size()-1; i++){
  for(int j = i+1; j < arr.size(); j++){
	  if(arr[i] + arr[j] == target){
		  blah.push_back({arr[i], arr[j]});
	  }
  }
}
return blah;
}
//in this ques we had to return all pair of integers whose sum wud be target integer
