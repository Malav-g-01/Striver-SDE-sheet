class Solution {
public:
    void sortColors(vector<int>& a) {
        int i=0, j=0;
        int n = a.size()-1;
        
        while(i<=n){
            switch(a[i]){
                case 0:
                    swap(a[i++], a[j++]);
                    break;
                
                case 1:
                    i++;
                    break;
                    
                case 2:
                    swap(a[i], a[n--]);
                    break;
            }
        }
    }
};