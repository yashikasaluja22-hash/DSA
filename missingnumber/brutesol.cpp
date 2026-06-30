#include <bits/stdc++.h> 
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    for(int i = 1; i <= n; i++){
        int flag = 0;
        for(int j = 0; j < (n-1); j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
    }
};