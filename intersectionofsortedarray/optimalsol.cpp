#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n,
                                  vector<int> &B, int m) {
   int i = 0, j = 0;
   vector<int> ans;
   while(i < n && j < m){
       if(A[i] > B[j]){
         j++;  
       }
       else if(B[j] > A[i]){
           i++;
       }
       else{
           ans.push_back(A[i]);
           i++;
           j++;
       }
   }
    return ans;
}