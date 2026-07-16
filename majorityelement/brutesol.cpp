#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n){
for(int i = 0; i < n; i++){
	int count = 0;
	for(int j = 0; j < n; j++){
		if(arr[j] == arr[i]) count++;
	}
	if(count > (n/2)) return arr[i];
}
return -1;
}
//TC = O(N^2)
//SC = O(1)