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
		ll n;
		cin >> n;
		string str;
		cin >> str;
		ll q = 0;
		ff(i, 0, n){
			if(str[i] == '*'){
				q++;
			}
		}
		ll p = -1, c = -1;
		ff(i, 0, n){
			if(str[i] == '*'){
				c++;
				if(c == q/2){
					p = i;
				}
			}
		}
		ll cc = 0;
		c = p - q/2;
		ff(i, 0, n){
			if(str[i] == '*'){
				cc += abs(c-i);
				c++;
			}
		}
		cout << cc << ed;
	}
	
    return 0;
}
