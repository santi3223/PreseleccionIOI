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
		string a, b;
		cin >> a >> b;
		ll n = a.size(), m = b.size();
		vector<pair<char, ll>> arr, brr;
		ll cur = 0;
		char prev;
		ff(i, 0, n){
			if(i == 0){
				prev = a[i];
				cur++;
				continue;
			}
			
			if(prev == a[i]){
				cur++;
			}
			else{
				arr.pb({prev, cur});
				prev = a[i];
				cur = 1;
			}
		}
		arr.pb({prev, cur});
		cur = 0;
		ff(i, 0, m){
			if(i == 0){
				prev = b[i];
				cur++;
				continue;
			}
			
			if(prev == b[i]){
				cur++;
			}
			else{
				brr.pb({prev, cur});
				prev = b[i];
				cur = 1;
			}
		}
		brr.pb({prev, cur});
		if(arr.size() != brr.size()){
			cout << "NO" << ed;
			continue;
		}
		bool ok = true;
		ff(i, 0, arr.size()){
			if(arr[i].fi != brr[i].fi){
				ok = false;
				break;
			}
			ll low = arr[i].se, hi = arr[i].se*2;
			if(low <= brr[i].se && brr[i].se <= hi){
				continue;
			}
			else{
				ok = false;
				break;
			}
		}
		if(!ok){
			cout << "NO" << ed;
		}
		else{
			cout << "YES" << ed;
		}
	}
	
	return 0;
}
