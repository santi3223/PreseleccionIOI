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
		ll pos = 0, minn = INT_MAX;
		ff(i, 0, n){
			ll x;
			cin >> x;
			if(x < minn){
				minn = x;
				pos = i;
			}
		}
		bool a = true;
		ll x = minn+pos;
		cout << n-1 << ed;
		ff(i, 0, n){
			if(i == pos){
				x++;
				a = false;
				continue;
			}
			cout << i+1 << " " << pos+1 << " " << x << " " << minn << ed;
			if(a){
				x--;
			}
			else{
				x++;
			}
		}
	}
	
    return 0;
}
