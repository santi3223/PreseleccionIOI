#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define pll pair<ll, ll>
#define vs vector<string>
#define vb vector<bool>
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ed "\n"
#define fi first
#define se second
ll MOD = 1e9+7;

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vl arr(n);
		ll c5 = 0;
		bool p2 = false, i2 = false;
		ff(i, 0, n){
			cin >> arr[i];
			ll dec = (arr[i]/10)%10;
			ll dig = arr[i] % 10;
			if(dig == 1 || dig == 2 || dig == 4 || dig == 8){
				if(dec % 2 == 0){
					p2 = true;
				}
				else{
					i2 = true;
				}
			}
			if(dig == 3 || dig == 6 || dig == 7 || dig == 9){
				if(dec % 2 == 0){
					i2 = true;
				}
				else{
					p2 = true;
				}
			}
			if(dig == 5 || dig == 0){
				c5++;
			}
		}
		if(c5 == n){
			set<ll> st;
			ff(i, 0, n){
				if(arr[i] % 10 == 5){
					ll q = arr[i]+5;
					st.insert(q);
				}
				else{
					st.insert(arr[i]);
				}
			}
			if(st.size() > 1){
				cout << "No" << ed;
			}
			else{
				cout << "Yes" << ed;
			}
			continue;
		}
		if(p2 != i2 && c5 == 0){
			cout << "Yes" << ed;
		}
		else{
			cout << "No" << ed;
		}
		
	}
	
	
	return 0;
}
