class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int mn=INT_MAX;
       //find min. element
       for (auto x:nums1) {
        mn=min(mn,x);
       }
       //if min. is odd, always possible
       if(mn%2==1) {
        return true;
       }
       //if min. is even, no odd element can exist
       for(auto x:nums1) {
       if(x%2==1) {
        return false;
       } 
       }
       return true;
    }
};