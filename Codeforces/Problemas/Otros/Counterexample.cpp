#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < (ll)cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define vb vector<bool>
#define ed "\n"
#define pb push_back
ll MOD = 1e9+7;

int main(){
	ll l, r;
	cin >> l >> r;
	if(l % 2 != 0){
		l++;
	}
	if(l+2 > r){
		cout << -1;
	}
	else{
		cout << l << " " << l+1 << " " << l+2;
	}

}
