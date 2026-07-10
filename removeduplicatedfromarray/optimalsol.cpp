#include <bits/stdc++.h> 
using namespace std;
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
    int j = 0;
    for(int i = 1; i < arr.size(); i++){
        if(arr[j] != arr[i]){
        arr[j+1] = arr[i];
        j++;
        }
    }
    arr.resize(j+1);
    return arr;
    }
};