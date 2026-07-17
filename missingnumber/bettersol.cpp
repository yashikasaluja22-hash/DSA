#include <bits/stdc++.h> 
using namespace std;
int missingNumber(vector<int>&a, int N) {
vector<int> hash((N + 1), 0);
for(int i = 0; i < a.size(); i++){
    hash[a[i]] = 1;
}
for(int i = 1; i <= N; i++){
   if(hash[i] == 0) return i;
}
return -1;
}//jjajajahahahahahaha