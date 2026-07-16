#include <bits/stdc++.h> 
using namespace std;
//KADANE'S ALGORITHM, playlist vid --> 8
long long maxSubarraySum(vector<int> arr, int n)
{
//int anstart = -1, ansend = -1;
//int start = -1;
long long maxi = 0;
long long sum = 0;
for(int i = 0; i < n; i++){
//if(sum == 0) start = i;
 sum += arr[i];
if(sum > maxi){
    maxi = sum;
//anstart = start, ansend = i;
}
 if(sum < 0){
     sum = 0;
 }
}
/*vector<long long> temp;
int index = 0;
for(int k = anstart; k <= ansend; k++){
   temp[index] = arr[k];
   index++;
}
*/
return maxi;
}

/*here in this problem fromc coding ninjas they told us to 
Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.

The sum of an empty subarray is 0.
Sample Input 3 :
3
-3 -5 -6

Sample Output 3 :
0

means ki agar maxi sum less than 0 hai toh return 0 hoga isliye
here we intialised maxi = 0;

warna in leetcode and other problems read it and prolly
intialise like this --> maxi = lLONG_MIN;
*/

//if they ask to return the subarray or its length --> jiska max sum liye tumne
//so ans is above in code in comments for that