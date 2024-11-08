#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
#define ull unsigned long long
#define pll pair<ll, ll>
#define pb push_back
#define fi first
#define se second
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;
 
int main(){
	IO
	ll n, k;
	cin >> n >> k;
	vl dis(n-1);
	ll prev = 0;
	ff(i, 0, n){
		ll p;
		cin >> p;
		if(i != 0){
			dis[i-1] = p-prev;
		}
		prev = p;
	}
	
	if(n <= k){
		cout << n;
		return 0;
	}
	
	ll c = n;
	sort(rall(dis));
	ff(i, k-1, n-1){ //se saltan los primeros k, ya q hay q minimizar c
		c += dis[i]-1;
	}
	
	cout << c;
	return 0;
}
