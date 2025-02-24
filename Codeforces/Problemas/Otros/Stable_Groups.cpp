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
	ll n, k, x;
	cin >> n >> k >> x;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	sort(all(arr));
	vl groups;
	ff(i, 1, n){
		ll diff = arr[i] - arr[i-1];
		if(diff > x){
			groups.pb((diff-1)/x);
		}
	}
	sort(all(groups));
	ll p = -1;
	ff(i, 0, groups.size()){
		if(groups[i] <= k){
			k -= groups[i];
			p++;
		}
		else{
			break;
		}
	}
	cout << groups.size()-p;
	
    return 0;
}
