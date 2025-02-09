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

bool ok = false;
ll n;
vl arr;

void recur(ll pos, ll val){
	if(pos == n){
		if(val == 0){
			ok = true;
		}
	}
	else{
		recur(pos+1, (val+arr[pos]+360)%360);
		recur(pos+1, (val-arr[pos]+360)%360);
	}
}

int main(){
	IO
	cin >> n;
	arr = vl(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	recur(0, 0);
	if(ok){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	
	return 0;
}
