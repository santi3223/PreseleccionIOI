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
	vl dp(200005, 2);
	dp[9] = 3;
	ff(i, 10, dp.size()){
		dp[i] = dp[i-10]+dp[i-9];
		if(dp[i] > MOD){
			dp[i] %= MOD;
		}
	}
	ll t;
	cin >> t;
	while(t--){
		string str;
		ll m;
		cin >> str >> m;
		ll c = 0;
		//cout << str << ed;
		ff(i, 0, str.size()){
			if(m+(str[i]-'0') < 10){
				//cout << "A" << ed;
				c++;
			}
			else{
				//cout << "B ";
				c += dp[m-10+(str[i]-'0')];
				if(c > MOD){
					c %= MOD;
				}
				//cout << c << ed;
			}
		}
		cout << c << ed;
	}
	
	return 0;
}
