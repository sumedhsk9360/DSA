class Solution {
public:
     bool possible(vector<int>& bloomDay, int day,int m,int k) {
            int cnt=0;
            int noB=0;

            for(int i=0;i<bloomDay.size();i++) {
                if(bloomDay[i]<=day) {
                    cnt++;
                }
                else {
                    noB+=(cnt/k);
                    cnt=0;
                }
            }
            noB+=(cnt/k);

            if(noB>=m) {
                return true;
            }
            else {
                return false;
            }

        }


    int minDays(vector<int>& bloomDay, int m, int k) {
        // for(int i=*min_element(bloomDay.begin(),bloomDay.end());i<=*max_element(bloomDay.begin(),bloomDay.end());i++) {
        //     if(possible(bloomDay,i,m,k)==true) {
        //         return i;
        //     }
        // }
        // return -1;
        if((long long)m*k > bloomDay.size()) return -1;

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;

        while(low<=high) {
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)) {
                ans=mid;

                high=mid-1;
            }
            else {
                low=mid+1;
            }

        }
        return ans;
    }
};