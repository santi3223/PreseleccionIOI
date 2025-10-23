#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define all(aaa) aaa.begin(), aaa.end()
#define ed "\n"
#define pb push_back
#define vb vector<bool>
ll MOD = 1e9+7;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, k;
	cin >> n >> k;
	ll c = 0;
	ff(i, 0, n){
		vl arr(k+1, 0);
		string str;
		cin >> str;
		for(char ch : str){
			if (ch >= '0' && ch <= '9'){
				int d = ch - '0';
				if (d <= k) arr[d]++;
			}
		}

		bool ok = true;
		ff(i, 0, k+1){
			if(arr[i] == 0){
				ok = false;
			}
		}
		if(ok) c++;
	}
	cout << c;
 
}
 
