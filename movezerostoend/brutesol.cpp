#include <bits/stdc++.h> 
using namespace std;
void pushZerosAtEnd(vector<int> &arr) 
{
vector<int> temp;
for(int i = 0; i < arr.size(); i++){
	if(arr[i] != 0){
		temp.push_back(arr[i]);
	}
}
//next step
int z = temp.size();
for(int i = 0; i < z; i++){
	arr[i] = temp[i];
}
//next
for(int i = z; i < arr.size(); i++){
	arr[i] = 0;
}
}
