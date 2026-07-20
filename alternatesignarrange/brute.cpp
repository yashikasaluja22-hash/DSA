#include <bits/stdc++.h> 
using namespace std;
void rearrange(vector<int> &arr)
{
int n = arr.size();
vector<int> pos;
vector<int> neg;
for(int x : arr){
    if(x < 0) neg.push_back(x);
    if(x > 0) pos.push_back(x);
}//SC = O(N)
int i = 0;
int index = 0;
while(i < pos.size() && i < neg.size()){
    arr[index++] = neg[i];
    arr[index++] = pos[i];
    i++;//TC (ENTIRE ANS) = O(N) + O(max(pos.size(), neg.size()))
}
while(i < pos.size()){
    arr[index++] = pos[i];
    i++;
}
while(i < neg.size()){
    arr[index++] = neg[i];
    i++;
}
}
//in this problem u need place extra elements in the end as +ve and -ve elements may not be equal in array
//and in this problem at even indices, -ve element be placed;

//if +ve and -ve elements wud have been equal as per ques then code wud be

/*void rearrange(vector<int> &arr)
{
int n = arr.size();
vector<int> pos;
vector<int> neg;
for(int x : arr){
    if(x < 0) neg.push_back(x);
    if(x > 0) pos.push_back(x);
}
int i = 0;
while(i < pos.size() && i < neg.size()){
    arr[i] = neg[i];
    arr[i] = pos[i];
    i++;
}
*/