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
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main(){
	IO
	ll n;
	cin >> n;
	vl arr(n), l(n, -1), r(n, n), res(n+1, 0);
	stack<ll> st;
	ff(i, 0, n){
		cin >> arr[i];
		while(!st.empty() && arr[st.top()] >= arr[i]){
			st.pop();
		}
		if(!st.empty()){
			l[i] = st.top();
		}
		st.push(i);
	}
	stack<ll> stc;
	for(ll i = n-1; i >= 0; i--){
		while(!stc.empty() && arr[stc.top()] >= arr[i]){
			stc.pop();
		}
		if(!stc.empty()){
			r[i] = stc.top();
		}
		stc.push(i);
	}
	ff(i, 0, n){
		ll sz = r[i]-l[i]-1;
		res[sz] = max(res[sz], arr[i]);
	}
	for(ll i = n-1; i >= 0; i--){
		res[i] = max(res[i], res[i+1]);
	}
	ff(i, 1, n+1){
		cout << res[i] << " ";
	}
	
	return 0;
}
