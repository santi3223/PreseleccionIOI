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
		string str;
		cin >> str;
		ll n = str.length();
		vector<pll> nums;
		ll ncur = -1, count = 0;
		ff(i, 0, n){
			if(ncur == -1){
				ncur = str[i];
				count++;
			}
			else{
				if(str[i] != ncur){
					nums.pb({ncur, count});
					ncur = str[i];
					count = 1;
				}
				else{
					count++;
				}
			}
		}
		nums.pb({ncur, count});
		
		ll sz = nums.size(), minn = LLONG_MAX;
		ff(i, 1, sz-1){
			if(nums[i-1].fi != nums[i+1].fi){
				minn = min(minn, nums[i].se+2);
				if(minn == 3){
					break;
				}
			}
		}
		if(minn == LLONG_MAX){
			minn = 0;
		}
		cout << minn << ed;
	}
}
