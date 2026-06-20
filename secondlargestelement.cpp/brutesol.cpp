#include <bits/stdc++.h> 
using namespace std;
int findSecondLargest(int n, vector<int> &arr) {
sort(arr.begin(), arr.end());
int largest = arr[n-1];
int secondlargest = INT_MIN;
for(int i = arr[n-2]; i >= 0; i--){
    if(arr[i] != largest){
        secondlargest = arr[i];
        break;
    }
}
if(secondlargest == INT_MIN){
    return -1;
}else if(n < 2){
    return -1;
}else{
    return secondlargest;
}
}