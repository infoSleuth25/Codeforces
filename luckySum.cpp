#include<bits/stdc++.h>
using namespace std;
long long helper(long long l){
	string curr = to_string(l);
    string ans = "";
	if(curr[0] < 4){
        for(int i=0;i<curr.size();i++){
            ans += '4';
        }
    }
    else if(curr[0] == 4){
        
    }
    else if(curr[0] < 7){
        ans += '7';
        for(int i=1;i<curr.size();i++){
            ans += '4';
        }
    }
}
int main (){
	long long l,r;
	cin >> l >> r;
	long long sum = 0;
	long long curr = 0;
	for(long long i=l;i<=r;i++){
		if(curr >= i){
			sum += curr;
		}
		else{
			curr = helper(i);
			cout << curr << endl;
			sum += curr;
		}
	}
	cout << sum << endl;
}