#include <bits/stdc++.h> 
int maximumProfit(vector<int> &a){
    // Write your code here.
	int n = a.size();
	int ans = 0;
	int tmp = a[n-1];

	for(int i=n-2; i>=0; i--){
		tmp = max(tmp, a[i]);
		ans = max(ans, tmp-a[i]);
	}

	return ans;
}