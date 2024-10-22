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
	ll h, w;
	cin >> h >> w;
	ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	bool firs = false;
	ff(i, 0, h){
		string s;
		cin >> s;
		ff(j, 0, w){
			if(s[j] == 'o'){
				if(!firs){
					y1 = i;
					x1 = j;
					firs = true;
				}
				else{
					y2 = i;
					x2 = j;
				}
			}
		}
	}
	ll c = 0;
	ll a1 = min(abs(y1-y2), abs(y2-y1));
	ll b1 = min(abs(x1-x2), abs(x2-x1));
	c += a1+b1;
	cout << c;
	
	return 0;
}
