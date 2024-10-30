#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define vs vector<string>
#define vb vector<bool>
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
	vl arr(4);
	ff(i, 0, 4){
		cin >> arr[i];
	}
	sort(all(arr));
	cout << arr[3]-arr[0] << " " << arr[3]-arr[1] << " " << arr[3]-arr[2];
	return 0;
}
