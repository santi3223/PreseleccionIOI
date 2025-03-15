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
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n), brr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ff(i, 0, n){
			cin >> brr[i];
		}
		ll ca = 0, cb = 0, pos = 0, neg = 0;
		ff(i, 0, n){
			if(arr[i] > brr[i]){
				ca += arr[i];
			}
			else if(arr[i] < brr[i]){
				cb += brr[i];
			}
			else{
				if(arr[i] == 1){
					pos++;
				}
				else if(arr[i] == -1){
					neg++;
				}
			}
		}
		while(pos--){
			if(ca < cb){
				ca++;
			}
			else{
				cb++;
			}
		}
		while(neg--){
			if(ca > cb){
				ca--;
			}
			else{
				cb--;
			}
		}
		cout << min(ca, cb) << ed;
	}
	
	return 0;
}

