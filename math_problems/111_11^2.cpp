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

string cur = "";
void conteo(ll x, ll y, ll z, ll n){ //lin god
    if(y == 0){
        return;
    }
    if(z != 0){
        conteo(x / 10 + y - 1, y - 1, z, n);
        cur += ((x%10) + '0');
    }
    else{
        if(y == n){
            conteo(x / 10 + y - 1, y - 1, z + 1, n);
            cur += ((x%10) + '0');
        }
        else{
            conteo(x / 10 + y + 1, y+1, z, n);
            cur += ((x%10) + '0');
        }
    }
}

ll S(ll n){
	if(n < 10){
		return n*n-1;
	}
	else{
		return S(n-9)+81;
	}
}

ll f(ll n){
	if(n < 10){
		return n*n-1;
	}
	else{
		return S(n-9)+82;
	}
}

ll A(ll n){
	if(n < 10){
		return n*n;
	}
	else{
		return f(n);
	}
}

int main(){
	IO
	ff(i, 1, 100){
		conteo(1, 1, 0, i);
		ll c = 0;
		ff(p, 0, cur.size()){
			c += (cur[p]-'0');
		}
		//cout << i << " " << cur << " " << c << " " << A(i) << ed;
		if(c != A(i)){
			cout << "NO " << i << ed;
		}
		cur = "";
	}
	cout << "GG";
	
	return 0;
}
