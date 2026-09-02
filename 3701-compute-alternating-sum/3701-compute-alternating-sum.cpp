class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int sign=1;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i]*sign;
            sign*=-1;
        }
        return sum;
    }
};