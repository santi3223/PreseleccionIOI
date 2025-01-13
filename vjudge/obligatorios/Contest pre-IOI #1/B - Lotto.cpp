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
ll MOD = 998244353;

vl arr;
void generate(vl &comb, ll st, ll prof){
	if(prof == 6){
		ff(i, 0, 6){
			if(i > 0){
				cout << " ";
			}
			cout << comb[i];
		}
		cout << ed;
		return;
	}
	
	ll n = arr.size();
	ff(i, st, n){
		comb[prof] = arr[i];
		generate(comb, i+1, prof+1);
	}
}

int main(){
	IO
	ff(tt, 0, LLONG_MAX){
		ll n;
		cin >> n;
		if(n == 0){
			break;
		}
		if(tt != 0){
			cout << ed;
		}
		arr = vl(n);
		ff(i, 0, n){
			cin >> arr[i];
		}
		vl comb(6);
		generate(comb, 0, 0);
	}
	
	return 0;
}
