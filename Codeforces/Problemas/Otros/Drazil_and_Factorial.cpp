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
	ll n;
	string str;
	cin >> n >> str;
	ll c2 = 0, c3 = 0, c5 = 0, c7 = 0;
	ff(i, 0, n){
		if(str[i] == '2'){
			c2++;
		}
		if(str[i] == '3'){
			c3++;
		}
		if(str[i] == '5'){
			c5++;
		}
		if(str[i] == '7'){
			c7++;
		}
		if(str[i] == '4'){
			c3++;
			c2 += 2;
		}
		if(str[i] == '6'){
			c3++;
			c5++;
		}
		if(str[i] == '8'){
			c7++;
			c2 += 3;
		}
		if(str[i] == '9'){
			c7++;
			c3 += 2;
			c2++;
		}
	}
	while(c7--){
		cout << 7;
	}
	while(c5--){
		cout << 5;
	}
	while(c3--){
		cout << 3;
	}
	while(c2--){
		cout << 2;
	}
	
	return 0;
}

