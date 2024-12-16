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
		ll n;
		cin >> n;
		vl arr(n), b(n);
		set<ll> nums;
		ff(i, 1, n+1){
			nums.insert(i);
		}
		ff(i, 0, n){
			cin >> arr[i];
		}
		unordered_map<ll, ll> freq;
		ff(i, 0, n){
			if(freq[arr[i]] == 0){
				b[i] = arr[i];
				freq[arr[i]]++;
				nums.erase(arr[i]);
			}
			else{
				auto it = nums.begin();
				b[i] = *it;
				freq[b[i]]++;
				nums.erase(b[i]);
			}
		}
		ff(i, 0, n){
			cout << b[i] << " ";
		}
		cout << ed;
	}
	
	return 0;
}
