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
	ll n, m;
	cin >> n >> m;
	if(n == 1 && m == 0){
		cout << "0 0";
		return 0;
	}
	if(m == 0 || n*9 < m){
		cout << "-1 -1";
		return 0;
	}
	ll basen = n, basem = m;
	string numeros(n, '0');
	numeros[0] = '1';
	ll pos = n-1;
	m--;
	while(m > 0 && pos >= 0){
		ll num = min(9LL, m);
		m -= num;
		char c = num+'0';
		if(pos == 0){
			if(m > 0){
				cout << "-1 -1";
				return 0;
			}
			num++;
			c = num+'0';
		}
		numeros[pos] = c;
		pos--;
	}
	cout << numeros << " ";
	n = basen;
	m = basem;
	pos = 0;
	numeros = string(n, '0');
	while(pos < n && m > 0){
		ll x = min(9LL, m);
		m -= x;
		numeros[pos] = (x + '0');
		pos++;
	}
	cout << numeros;
	
	return 0;
}
