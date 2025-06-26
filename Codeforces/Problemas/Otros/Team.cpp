#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

int main(){
	ll n, m;
	cin >> n >> m;
	vl arr(3000005);
	ll k = 0, t = 0;
	if(n-1 <= m && m <= 2*(n+1)){
		if(m == n-1){
			arr[0] = -1;
			arr[m+1] = -1;
			t = n-1;
		}
		else if(m == n){
			arr[m+1] = -1;
			t = n;
		}
		else{
			t = n+1;
		}
		k = m%t;
		if(k == 0 && m != t){
			k = n+1;
		}
		if(arr[0] == -1){
			cout << 0;
		}
		ff(i, 1, n+1){
			if(arr[i] != -1){
				if(k > 0){
					cout << 110;
				}
				else{
					cout << 10;
				}
				k--;
			}
		}
		if(arr[m+1] != -1){
			if(k > 0){
				cout << 11;
			}
			else{
				cout << 1;
			}
		}
	}
	else{
		cout << -1;
	}
}
