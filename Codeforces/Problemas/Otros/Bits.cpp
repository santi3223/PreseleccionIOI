#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

ll f(ll l, ll r){
	if(l == r){
		return l;
	}
	ll num = log2(r);
	if((1LL << num) <= l){
		return f(l-(1LL << num), r-(1LL << num))+ (1LL<<num);
	}
	else if((1LL << (num+1))-1 <= r){
		return (1LL << (num+1))-1;
	}
	else{
		return (1LL << num)-1;
	}
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		cout << f(l, r) << ed;
	}
}
