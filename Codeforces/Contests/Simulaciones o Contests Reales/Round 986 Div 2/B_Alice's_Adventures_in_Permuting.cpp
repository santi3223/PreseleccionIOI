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
		ll n, b, c;
		cin >> n >> b >> c;
		if(c >= n){
			cout << n << ed;
			continue;
		}
		
		if(n == 1){
			if(c == 0){
				cout << 0 << ed;
				continue;
			}
			else{
				cout << 1 << ed;
				continue;
			}
		}
		
		if(b == 0 && c == 0){
			if(n == 2){
				cout << 1 << ed;
				continue;
			}
			cout << -1 << ed;
			continue;
		}
		
		ll q = 0;
		if(b == 1 && c == 0){
			cout << 0 << ed;
			continue;
		}
		
		if(b == 1 && c == 1){
			cout << 1 << ed;
			continue;
		}
		
		if(b > n){
			if(c < n){	
				cout << n-1 << ed;
				continue;
			}
			else{
				cout << n << ed;
				continue;
			}
		}
		
		if(b > 0 && c == 0){
			q = n/b;
			if(n % b != 0){
				q++;
			}
			cout << n-q << ed;
			continue;
		}
		
		if(b == 1){
			if(c < n){
				q = (n-c)/b;
				if((n-c)%b != 0){
					q++;
				}
				cout << n-q<< ed;
				continue;
			}
			else{
				cout << n << ed;
				continue;
			}
		}
		
		if(b >= n && c >= n){
			cout << n << ed;
			continue;
		}
		
		bool ok = false;
		if(b == 0 && c != 0){
			if(n <= 3){
				if(c < n){
					cout <<n-1 << ed;
					continue;
				}
				else{
					cout << n << ed;
					continue;
				}
			}
			q = 3+(c-1);
			if(n <= q){
				cout <<n-1 << ed;
				continue;
			}
			cout << -1 << ed;
			continue;
		}
		else{
			q = (n-c)/b;
			if((n-c)%b != 0){
				q++;
			}
			ok = true;
		}
		
		if(b < n && c >= n){
			cout << n << ed;
			continue;
		}
		else if(b < n && c < n && !ok){
			cout << n-1 << ed;
			continue;
		}
		cout << n-q << ed;
	}
	
}
