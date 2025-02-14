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
ll N = 5005;
ll n, m;
vector<vector<vl>> dp;
string a, b;

string formato(string a){
	string cur;
	for(char &c : a){
		if(c == '1'){
			continue;
		}
		if(c == '0'){
			cur.clear();
		}
		if(c != '+'){
			c = '2';
		}
		cur += c;
	}
	return cur;
}

void summ(ll &a, ll b){
	a += b;
	if(a >= MOD) a -= MOD;
}

int main(){
    IO
    ll t;
    cin >> t;
    while(t--){
		cin >> n >> a >> b;
		a = formato(a);
		b = formato(b);
		n = a.size(), m = b.size();
		dp = vector<vector<vl>>(n+5, vector<vl>(m+5, vl(2, 0)));
		dp[0][0][0] = 1;
		ff(i, 0, n+1){
			ff(j, 0, m+1){
				ff(k, 0, 2){
					if(dp[i][j][k] > 0){
						ll cur = dp[i][j][k];
						if(j < m){
							summ(dp[i][j+1][1], cur);
						}
						if(k == 0 && i < n){
							summ(dp[i+1][j][0], cur);
						}
						else if(k == 1 && b[j-1] != a[i]){
							summ(dp[i+1][j][0], cur);
						}
					}
				}
			}
		}
		cout << (dp[n][m][0] + dp[n][m][1]) % MOD << ed;
    }
    
    return 0;
}

