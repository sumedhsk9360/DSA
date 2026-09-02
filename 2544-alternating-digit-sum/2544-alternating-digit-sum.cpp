class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> nums;
        while(n!=0) {
            int digit=n%10;
            nums.push_back(digit);
            n=n/10;
        }
        int sum=0;
        int sign=1;
        for(int i=nums.size()-1;i>=0;i--) {
           sum+=nums[i]*sign;
           sign*=-1;
        }
        return sum;

        
    }
};