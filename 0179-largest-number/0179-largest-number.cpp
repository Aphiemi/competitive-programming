bool comp(string a ,string b){
            if(a+b>b+a) return true;
            return false;
        }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        
        vector<string> largeNum;
        
        for(int x:nums){
            largeNum.push_back(to_string(x));
        }
        
        sort(largeNum.begin(),largeNum.end(),comp);
        
        for(string x: largeNum){
            ans.append(x);
        }
        int start = 0;
        while(ans[start]=='0' && start < ans.size()-1)start++;
        return ans.substr(start);
    }
};


        // string number;
        // for(int i=0; i<nums.size(); i++){
        //     largestNum[i].push_back(nums[i]);
        // }
        // sort(largestNum);
        // for(int i=0; i<nums.size(); i++){
        //    number = number + largestNum[i];
        // }
        // number= std::to_string(largestNum);
        // return number;