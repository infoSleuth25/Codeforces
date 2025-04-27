#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& gain, int idx, int& maxgain){
	if(gain.size() == idx){
		return 0;
	}
	int curr = gain[idx] + max(0,helper(gain,idx+1,maxgain));
	maxgain = max(maxgain,curr);
	return curr;
}
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vector<int> gain(n,0);
	int count1 = 0;	
	for(int i=0;i<n;i++){
		count1 += a[i];
		if(a[i] == 1){
			gain[i] = -1;
		}
		else{
			gain[i] = 1;
		}
	}
	int maxgain = INT_MIN;
	helper(gain,0,maxgain);
	if(count1 == n){
		cout << n -1 << endl;
	}
	else{
		cout << count1 + maxgain << endl;
	}
	return 0;
}
