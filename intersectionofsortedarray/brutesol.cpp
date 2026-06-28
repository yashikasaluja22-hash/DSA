#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n,
                                  vector<int> &B, int m) {
    vector<int> visited(m, 0);
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(A[i] == B[j] && visited[j] == 0) {
                ans.push_back(A[i]);
                visited[j] = 1;
                break;
            }
            else if(B[j] > A[i]) {//this line is here to avoid unecessary scan of array B as array is sorted too
                break;
            }
        }
    }

    return ans;
}