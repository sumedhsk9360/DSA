// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         int root=sqrt(c);
//         vector<int> arr;
//         for(int i=0;i<=root;i++) {
//             arr.push_back(i*i);
//         }
//         map<int, int> mpp;
//         for(int i=0;i<arr.size();i++) {
//             int num=arr[i];
//             int more=c-num;
//              mpp[num]=i;
//             if(mpp.find(more)!=mpp.end()) {
//                 return true;
//             }
           
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  l=0;
        long long  r=sqrt(c);
        while(l<=r) {
            if(l*l+r*r == c) {
                return true;
            }
            else if(l*l+r*r < c) {
                l++;
            }
            else {
                r--;
            }
        }
        return false;
    }
    };