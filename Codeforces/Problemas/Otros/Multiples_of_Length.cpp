#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int main(){
	ll n;
	cin >> n;
	vl arr(n);
	ff(i, 0, n){
		cin >> arr[i];
	}
	if(n == 1){
		cout << "1 1" << ed << 0 << ed << "1 1" << ed << 0 << ed << "1 1" << ed << -arr[0];
	}
	else{
		cout << "1 1" << ed << -arr[0] << ed << "1 " << n << ed;
		cout << "0 ";
		ff(i, 1, n){
			cout << -(n*arr[i]) << " ";
		}
		cout << ed;
		cout << 2 << " " << n << ed;
		ff(i, 1, n){
			cout << (n-1)*arr[i] << " ";
		}
	}
	return 0;
}
