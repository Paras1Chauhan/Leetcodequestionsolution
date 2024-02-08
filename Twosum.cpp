class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
 unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(mp.find(ans)!=mp.end()){
                v.push_back(mp[ans]);
                v.push_back(i);
            }
            mp.insert({nums[i],i});
        }
        return v;
    }
};