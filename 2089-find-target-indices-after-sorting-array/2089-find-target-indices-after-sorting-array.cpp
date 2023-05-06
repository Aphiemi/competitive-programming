class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> found;
        for(int i=0; i<nums.size(); i++){
            for(int j=(nums.size()-1); j>i; j--){
                if(nums[j]<nums[j-1]){
                    int swapp=nums[j-1];
                    nums[j-1]=nums[j];
                    nums[j]=swapp;
                }   
            }
            if(target==nums[i]){
                found.push_back(i);
            }
        }
        return found;
    }
};