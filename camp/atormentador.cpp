#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(xxx, yyy, zzz) for(ll xxx = yyy; xxx < zzz; xxx++)
#define IO ios::sync_with_stdio(false); cin.tie(0);
#define pb push_back
#define fi first
#define se second
#define pll pair<ll, ll>
#define ed "\n"
#define vb vector<bool>
#define all(a) a.begin(), a.end()
vl nums;

void constr(){
	ll c = 3;
	//nums.pb(0);
	while(c*3 < 1e6){
		nums.pb(c);
		c *= 3;
	}
}

int main(){
	IO
	constr();
	/*cout << nums.size() << ed;
	ff(i, 0, nums.size()){
		cout << nums[i] << " ";
	}*/
	ll n;
	cin >> n;
	if(n < 2){
		cout << n;
	}
	else if(n == 3){
		cout << 2;
	}
	else if(n == 4){
		cout << 3;
	}
	else if(n == 5){
		// (5+1)/3 -> 2-1-1
		cout << 4;
	}
	else if(n == 6){
		cout << 3;
	}
	else if(n == 7){
		//7-1 /3 -> 2-1-1
		// 7+1+1 /9 -> 1-1
		cout << 4;
	}
	else if(n == 8){
		//8+1 /9 -> 1-1
		cout << 3;
	}
	else if(n == 9){
		cout << 2;
	}
	else if(n == 10){
		// 10-1 /9 -> 1-1
		cout << 3;
	}
	else{
		// x/3 -> 1-1
		cout << 2;
	}
	
	
	
}

