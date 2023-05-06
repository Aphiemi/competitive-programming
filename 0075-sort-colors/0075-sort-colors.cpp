#include <bits/stdc++.h>
class Solution {
public:
    void sortColors(vector<int>& nums) {
    vector<int> zeros,ones,twos;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0)zeros.push_back(0);
            else if(nums[i]==1)ones.push_back(1);
            else if(nums[i]==2)twos.push_back(2);
        }
        nums.clear();
        for(int i=0; i<zeros.size();i++){
            nums.push_back(zeros[i]);
        }
        for(int i=0; i<ones.size();i++){
            nums.push_back(ones[i]);
        }
        for(int i=0; i<twos.size();i++){
            nums.push_back(twos[i]);
        }
    }
};