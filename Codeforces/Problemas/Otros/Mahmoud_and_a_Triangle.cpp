#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define ed "\n"
#define fi first
#define se second
#define pll pair<ll, ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()

int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	sort(all(arr));
	ff(i, 1, n-1){
		if(arr[i-1]+arr[i] > arr[i+1]){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	
	return 0;
}


