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
	ll n;
	cin >> n;
	vs reels(n);
	ff(i, 0, n){
		cin >> reels[i];
	}
	ll minn = LLONG_MAX;
	
	ff(digit, 0, 10){
		vl stop(10, 0);
		ff(i, 0, n){
			ff(j, 0, 10){
				if(reels[i][j] - '0' == digit){
					stop[j]++;
					break;
				}
			}
		}
		ll maxx = 0;
		ff(j, 0, 10){
			maxx = max(maxx, (stop[j]-1)*10+j);
		}
		minn = min(minn, maxx);
	}
	cout << minn;
	
	return 0;
}
