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
#define rall(a) (a).rbegin(), (a).rend()
#define ed "\n"
#define IO std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll MOD = 1e9+7;

string a, b;

void init(string A, string B){
	a = A;
	b = B;
}

int get_distance(int x, int y){
	ll aa = 0, at = 0, ac = 0;
	ll ba = 0, bt = 0, bc = 0;
	bool eq = false, othereq = false;
	ff(i, x, y+1){
		if(a[i] == 'A'){
			aa++;
		}
		if(a[i] == 'T'){
			at++;
		}
		if(a[i] == 'C'){
			ac++;
		}
		if(eq && a[i] == b[i]){
			othereq = true;
		}
		if(a[i] == b[i]){
			eq = true;
		}
	}
	ff(i, x, y+1){
		if(b[i] == 'A'){
			ba++;
		}
		if(b[i] == 'T'){
			bt++;
		}
		if(b[i] == 'C'){
			bc++;
		}
	}
	if(y-x == 0){
		if(a[x] == b[x]){
			return 0;
		}
		else{
			return -1;
		}
	}
	else if(y-x == 1){
		if(aa != ba || at != bt || ac != bc){
			return -1;
		}
		else{
			if(a[x] == b[x]){
				return 0;
			}
			else{
				return 1;
			}
		}
		
	}
	else if(y-x == 2){
		if(aa != ba || at != bt || ac != bc){
			return -1;
		}
		else{
			if(othereq){
				return 0;
			}
			else if(eq){
				return 1;
			}
			else{
				return 2;
			}
		}
		
	}
	return 40;
}
