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

ll maxx = 0, base;
vl attrac;

void izq_a_der(ll cur, ll day, ll sum){
	ll n = attrac.size();
	maxx = max(maxx, sum);
	if(cur >= n || day <= 0){
		return;
	}
	izq_a_der(cur+1, day-1, sum);
	if(cur > base){
		izq_a_der(cur+1, day-2, sum+attrac[cur]);
	}
}

void der_a_izq(ll cur, ll day, ll sum){
	maxx = max(maxx, sum);
	if(cur < 0 || day <= 0){
		return;
	}
	der_a_izq(cur-1, day-1, sum);
	if(cur < base){
		der_a_izq(cur-1, day-2, sum+attrac[cur]);
	}
}

void full_izq(ll cur, ll day, ll sum){
	maxx = max(maxx, sum);
	if(cur < 0 || day <= 0){
		return;
	}
	full_izq(cur-1, day-2, sum+attrac[cur]);
	full_izq(cur-1, day-1, sum);
	izq_a_der(cur+1, day-2, sum+attrac[cur]);
	izq_a_der(cur+1, day-1, sum);
}

void full_der(ll cur, ll day, ll sum){
	ll n = attrac.size();
	maxx = max(maxx, sum);
	if(cur >= n || day <= 0){
		return;
	}
	full_der(cur+1, day-2, sum+attrac[cur]);
	full_der(cur+1, day-1, sum);
	der_a_izq(cur-1, day-2, sum+attrac[cur]);
	der_a_izq(cur-1, day-1, sum);
}

ll findMaxAttraction(int n, int start, int d, int attraction[]){
    ff(i, 0, n){
        attrac.pb(attraction[i]);
    }
    base = start;
    full_izq(start, d, 0);
    full_der(start, d, 0);
    return maxx;
}
/*
int main(){
	IO
	ll nn , stt, dd;
	cin >> nn >> stt >> dd;
	int attracc[nn];
	ff(i, 0, nn){
		cin >> attracc[i];
	}
	cout << findMaxAttraction(nn, stt, dd, attracc);
	
	return 0;
}
*/
