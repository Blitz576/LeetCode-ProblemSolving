class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>res;
        map<int,int>place;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            place[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[target-nums[i]]>=1)
            {
                if(target-nums[i]==nums[i]&&mp[target-nums[i]]==1)
                {
                    continue;
                }
                res.push_back(i);
                res.push_back(place[target-nums[i]]);
                mp[nums[i]]=0;
                break;
            }
        }
        return res;
    }
};