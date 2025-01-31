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
	ll n;
	cin >> n;
	vl arr(n+5);
	ff(i, 0, n){
		cin >> arr[i];
	}
	vector<vl> sec(n+5, vl(n+5));
	ff(l, 1, n+1){
		ll inic = 0, fin = l-1;
		while(fin < n){
			if(l == 1){
				sec[inic][fin] = 1;
			}
			else{
				sec[inic][fin] = sec[inic+1][fin]+1;
				if(arr[inic] == arr[inic+1]){
					sec[inic][fin] = min(sec[inic+2][fin]+1, sec[inic][fin]);
				}
				ff(i, inic+2, fin+1){
					if(arr[inic] == arr[i]){
						sec[inic][fin] = min(sec[inic+1][i-1] + sec[i+1][fin], sec[inic][fin]);
					}
				}
			}
			
			
			inic++;
			fin++;
		}
	}
	cout << sec[0][n-1];
	
	return 0;
}
