#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define vc vector<char>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for(ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
 
int main(){
	IO
	ll n;
	cin >> n;
	n *= 2;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	sort(all(arr));
	
	ll minn = INT_MAX;
	ff(i, 0, n){
		ff(j, i+1, n){
			vl nw;
			ff(k, 0, n){
				if(k != i && k != j){
					nw.pb(arr[k]);
				}
			}
			ll cur = 0;
			for(ll k = 0; k < n-2; k += 2){
				cur += nw[k+1]-nw[k];
			}
			minn = min(minn, cur);
		}
	}
	cout << minn;
	
	
    return 0;
}
