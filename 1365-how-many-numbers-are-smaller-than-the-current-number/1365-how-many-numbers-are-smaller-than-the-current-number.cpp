class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller;
        int count; 
        for(int i=0; i<nums.size(); i++){
            count=0;
            for(int j=0; j<nums.size(); j++){
                if(j!=i && nums[j]<nums[i]){
                    count++;
                }
            }
            smaller.push_back(count);
        }
        return smaller;
    }
};