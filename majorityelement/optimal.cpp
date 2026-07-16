#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count = 0;
    int element = 0;
    for(int i = 0; i < nums.size(); i++){
        if(count == 0){
            element = nums[i];
            count = 1;
        }
        else if(nums[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    return element;    
    }
};
/*WE HAVE USED MOORVE'S VOTING ALGO
if in the ques says that majority may or may not be there in array
then u need to verify moorve voting algo as second step
use below code to verify

int count1 = 0;
for(int i = 0; i < nums.size(); i++){
if(nums[i] == element) count1++;
}
if(count1 > (n/2)) return element;
return -1;

1.apply moorve's voting algorithm
2. verify it

array playlist video 7

TC = O(N)
SC = O(1)
*/