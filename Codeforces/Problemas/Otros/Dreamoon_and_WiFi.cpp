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

ll c;
long double q = 0;
void probab(ll am, ll base, ll cur){
	if(am == 0){
		if(cur+base == c){
			q++;
		}
	}
	else{
		ff(i, 0, 2){
			if(i == 0){
				probab(am-1, base, cur+1);
			}
			else{
				probab(am-1, base, cur-1);
			}
		}
	}
}

int main(){
	IO
	string a;
	cin >> a;
	ll n = a.length();
	ff(i, 0, n){
		if(a[i] == '+'){
			c++;
		}
		else{
			c--;
		}
	}	
	ll am = 0;
	string b;
	cin >> b;
	ll base = 0;
	ff(i, 0, n){
		if(b[i] == '+'){
			base++;
		}
		else if(b[i] == '-'){
			base--;
		}
		else{
			am++;
		}
	}
	probab(am, base, 0);
	if(q == 0){
		cout << "0.000000000000";
		return 0;
	}
	long double p = q / (1 << am);
	cout << fixed << setprecision(12) << p << ed;
	
	return 0;
}
