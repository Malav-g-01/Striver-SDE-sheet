class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int j=a[0], k=a[0];
        
        for(int i=1; i<a.size(); i++){
            j = max(a[i]+j, a[i]);
            k = max(j, k);
        }
        
        return k;
    }
};