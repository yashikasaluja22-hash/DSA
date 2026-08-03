#include <bits/stdc++.h> 
using namespace std;
#include <bits/stdc++.h> 
vector<int> findLeaders(vector<int> &elements, int n) {
vector<int> ans;
for(int i = 0; i < n; i++){
    bool leader = true;
    for(int j = i+1; j < n; j++){
       if(elements[j] > elements[i]){
           leader = false;
           break;
       }
    }
    if(leader){
    ans.push_back(elements[i]);
    }
}
return ans;
}//TC = O(N^2)
//SC = o(N)

//here all elements to the right side of a particular element shud be smaller