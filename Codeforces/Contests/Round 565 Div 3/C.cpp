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
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll n;
	cin >> n;
	ll c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
	ff(i, 0, n){
		ll x;
		cin >> x;
		if(x == 4){
			c1++;
		}
		else if(x == 8 && c1 >= 1){
			c2++;
			c1--;
		}
		else if(x == 15 && c2 >= 1){
			c3++;
			c2--;
		}
		else if(x == 16 && c3 >= 1){
			c4++;
			c3--;
		}
		else if(x == 23 && c4 >= 1){
			c5++;
			c4--;
		}
		else if(x == 42 && c5 >= 1){
			c6++;
			c5--;
		}
	}
	cout << n - (c6*6); 
	
	return 0;
}
