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
		ll n, m, k;
		cin >> n >> m >> k;
		ll c = 0;
		bool shi = false;
		if(m % k == 0){
			shi = true;
			//cout << "SHI" << ed;
		}
		ff(i, 0, n){
			ff(j, 0, m){
				if(i % 2 != 0 && j == 0 && shi){
					c = 1;
				}
				if(i % 2 == 0 && j == 0 && shi){
					c = 0;
				}
				if(c >= k){
					c -= k;
				}
				cout << c+1 << " ";
				c++;
			}
			cout << ed;
		}
	}
	
	return 0;
}
