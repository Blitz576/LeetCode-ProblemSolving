class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // count the number of element which equals to val
        int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[cnt]=nums[i];
                cnt++;
            }
        }
        
     // return the values after removing the elements which equal to val 
    return cnt;   
    }
};