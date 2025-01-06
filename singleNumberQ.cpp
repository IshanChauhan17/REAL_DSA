#include <iostream>
#include <vector>

using namespace std;
 // leet code question 136 : given a non empty array of interger nums, every element appear twice except for one. Find that sngle one.
 // check VECTOR lecture last segment for better understanding
 // here we use xor operator
  
 int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int value : nums){
        ans ^= value;
    }
    return ans;
 }
int main(){
    
    vector<int> nums = {4,1,2,1,2};
    cout<<singleNumber(nums);

    return 0;
}