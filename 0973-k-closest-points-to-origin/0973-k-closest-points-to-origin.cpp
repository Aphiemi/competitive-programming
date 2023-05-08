class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<array<int,3>> output;
        vector<vector<int>> result;
        int distance;
        for(int i=0; i<points.size(); i++){
             distance =(points[i][0]*points[i][0]) + (points[i][1]*points[i][1]);
             output.push_back({distance, points[i][0],points[i][1]});
        }
        sort(output.begin(),output.end());   
        for(int i=0; i<k; i++){
            result.push_back({output[i][1],output[i][2]});
        }
        return result;
    }
};

