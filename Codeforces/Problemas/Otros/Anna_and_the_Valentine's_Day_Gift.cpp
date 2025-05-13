#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()	
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		vs arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		vl brr(n, 0), sz(n);
		ff(i, 0, n){
			sz[i] = arr[i].size();
			for(ll j = arr[i].size()-1; j >= 0 && arr[i][j] == '0'; j--){
				brr[i]++;
			}
		}
		ll c = 0;
		ff(i, 0, n){
			c += sz[i]-brr[i];
		}
		sort(rall(brr));
		ff(i, 0, n){
			if(i % 2 != 0){
				c += brr[i];
			}
		}
		if(c - 1 >= m){
			cout << "Sasha" << ed;
		}
		else{
			cout << "Anna" << ed;
		}
	}
	
	return 0;
}

