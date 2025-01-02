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

ll sum(ll n){
	ll c = 0;
	while(n != 0){
		c += n%10;
		n /= 10;
	}
	return c;
}

int main(){
	IO
	ll n;
	cin >> n;
	ll i = 18;
	while(n != 0){
		i++;
		if(sum(i) == 10){
			n--;
		}
	}
	cout << i;
	
	return 0;
	
}
