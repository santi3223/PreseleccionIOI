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
		ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
		string a = "";
		ff(i, 0, n){
			if(str[i] == 'N'){
				if(y1 < y2 || i == 0){
					y1++;
					a.pb('R');
				}
				else{
					y2++;
					a.pb('H');
				}
			}
			else if(str[i] == 'S'){
				if(y1 > y2 || i == 0){
					y1--;
					a.pb('R');
				}
				else{
					y2--;
					a.pb('H');
				}
			}
			else if(str[i] == 'W'){
				if(x1 > x2 || i == 0){
					x1--;
					a.pb('R');
				}
				else{
					x2--;
					a.pb('H');
				}
			}
			else if(str[i] == 'E'){
				if(x1 < x2 || i == 0){
					x1++;
					a.pb('R');
				}
				else{
					x2++;
					a.pb('H');
				}
			}
		}
		bool ok = false;
		ff(i, 0, n){
			if(a[i] == 'H'){
				ok = true;
			}
		}
		if(x1 != x2 || y1 != y2 || !ok){
			cout << "NO" << ed;
		}
		else{
			cout << a << ed;
		}
	}
	
    return 0;
}
