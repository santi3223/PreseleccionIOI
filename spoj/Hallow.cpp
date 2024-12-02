#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
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
ll MOD = 998244353;
ll N = 1e6+5;

int main(){
	IO
	while(true){
		ll c, n;
		cin >> c >> n;
		if(c == 0 && n == 0){
			return 0;
		}
		vl arr(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		unordered_map<ll, ll> id;
		id[0] = 0;
		ll psum = 0;
		bool ok = false;
		ff(i, 0, n){
			psum += arr[i];
			ll x = psum % c;
			if(x < 0){
				x += c;
			}
			if(id.count(x)){
				ll st = id[x];
				ff(j, st, i+1){
					cout << j+1 << " ";
				}
				cout << ed;
				ok = true;
				break;
			}
			if(ok){
				break;
			}
			id[x] = i+1;
		}
	}
	
	return 0;
}
