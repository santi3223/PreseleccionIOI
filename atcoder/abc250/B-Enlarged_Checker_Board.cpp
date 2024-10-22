#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
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
	ll n, a, b;
	cin >> n >> a >> b;
	bool hash = true;
	ff(i, 1, n+1){
		if(i % 2 == 1){
			hash = true;
		}
		else{
			hash = false;
		}
		bool base = hash;
		ff(j, 0, a){
			// hacia abajo
			hash = base;
			ff(k, 0, n){
				ff(l, 0, b){
					if(hash){
						cout << '.';
					}
					else{
						cout << '#';
					}
				}
				if(hash){
					hash = false;
				}
				else{
					hash = true;
				}
			}
			cout << ed;
		}
	}
	
	return 0;
}
