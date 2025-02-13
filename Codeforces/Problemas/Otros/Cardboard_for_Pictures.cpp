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

vl arr;
ll c;

ll f(ll w){
	ll s = 0;
	ff(i, 0, arr.size()){
		s += ((arr[i]+(2*w))*(arr[i]+(2*w)));
		if(s > c) break;
	}
	return s;
}

int main(){
    IO
    ll t;
    cin >> t;
    while(t--){
		ll n;
		cin >> n >> c;
		arr = vl(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		ll l = 0, r = 1e9;
		ll mid, x;
		while(l <= r){
			mid = l + (r-l)/2;
			x = f(mid);
			if(x == c){
				break;
			}
			else if(x < c){
				l = mid+1;
			}
			else{
				r = mid-1;
			}
		}
		cout << mid << ed;
    }
    
    return 0;
}

