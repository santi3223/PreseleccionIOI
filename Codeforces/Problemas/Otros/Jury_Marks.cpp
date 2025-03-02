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
	ll n, k;
	cin >> n >> k;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
		if(i != 0){
			arr[i] += arr[i-1];
		}
	}
	vl brr(n);
	ff(i, 0, k){
		cin >> brr[i];
	}
	set<ll> poss;
	ff(i, 0, n){
		poss.insert(brr[0]-arr[i]);
	}
	ll c = 0;
	for(ll p : poss){
		unordered_map<ll, bool> marked;
		ff(i, 0, n){
			marked[p+arr[i]] = true;
		}
		bool ok = true;
		ff(i, 0, k){
			if(!marked[brr[i]]){
				ok = false;
				break;
			}
		}
		if(ok){
			//cout << p << " ";
			c++;
		}
	}
	cout << c;

    return 0;
}
