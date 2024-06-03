class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Sort the Array
        sort(nums.begin(), nums.end());

        //Count the unique numbers
        int x=nums[0];
        int i1=1;
        for (int i = 1; i < nums.size(); ++i) {
            if(nums[i]!=x)
            {
                x=nums[i];
                nums[i1]=nums[i];
                i1++;
            }
        }
        return i1;
    }
};