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
ll N = 1e6+5;

int main(){
	IO
	ll n;
	string str;
	cin >> n >> str;
	vector<pll> arr(n);
	ff(i, 0, n){
		cin >> arr[i].fi;
		arr[i].se = str[i]- '0';
	}
	sort(all(arr));
	ll c = 0;
	ff(i, 0, n){
		if(arr[i].se == 1){
			c++;
		}
	}
	ll maxx = c;
	ff(i, 0, n){
		if(arr[i].se == 0){
			c++;
		}
		else{
			c--;
		}
		if(i == n-1 || arr[i].fi != arr[i+1].fi){
			maxx = max(maxx, c);
		}
	}
	cout << maxx;
	
}
