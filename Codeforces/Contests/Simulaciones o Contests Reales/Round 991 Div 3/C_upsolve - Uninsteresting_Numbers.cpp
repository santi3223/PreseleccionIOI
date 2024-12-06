#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
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
		string str;
		cin >> str;
		ll n = str.size();
		ll am2 = 0, am3 = 0;
		ll sum = 0;
		ff(i, 0, n){
			if(str[i] == '2'){
				am2++;
			}
			if(str[i] == '3'){
				am3++;
			}
			sum += (str[i] - '0');
		}
		if(sum%9 == 0){
			cout << "YES" << ed;
			continue;
		}
		bool ok = false;
		ll original = sum;
		ff(i, 0, am2+1){
			sum = original;
			sum += i*2;
			ll csum = sum;
			ff(j, 0, am3+1){
				csum = sum+j*6;
				if(csum%9 == 0){
					ok = true;
					break;
				}
			}
			if(ok){
				break;
			}
		}
		if(ok){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
		cout << ed;
		
	}
	return 0;
}
