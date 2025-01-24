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
#define ff(i, p, x) for (ll i = p; i < x; i++) 
#define all(a) (a).begin(), (a).end() 
#define rall(a) (a).rbegin(), (a).rend() 
#define ed "\n" 
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
ll MOD = 1e9+7; 
 
int main(){ 
	 IO 
	 ll t; 
	 cin >> t; 
	 while(t--){
		ll n, k;
		cin >> n >> k;
		string str;
		cin >> str;
		ll c = 0;
		ff(i, 0, (k+1)/2){
			vl freq(26, 0);
			ll sz = 0, maxx = 0;
			for(ll j = i; j < n; j += k){
				freq[str[j]-'a']++;
				maxx = max(maxx, freq[str[j]-'a']);
				sz++;
				if(i != k-1-i){
					freq[str[n-1-j]-'a']++;
					maxx = max(maxx, freq[str[n-1-j]-'a']);
					sz++;
				}
			}
			c += sz-maxx;
		}
		cout << c << ed;
	 } 
  
 return 0; 
}
