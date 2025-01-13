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
ll MOD = 998244353;

string calc(string cur, string dob){
	if(dob == "No"){
		return cur;
	}
	if(cur == "+x") return dob;
	if(cur == "-x"){
		if(dob == "+y") return "-y";
		if(dob == "-y") return "+y";
		if(dob == "+z") return "-z";
		if(dob == "-z") return "+z";
	}
	if(cur == "+y"){
		if(dob == "+y") return "-x";
		if(dob == "-y") return "+x";
		return cur;
	}
	if(cur == "-y"){
		if(dob == "+y") return "+x";
		if(dob == "-y") return "-x";
		return cur;
	}
	if(cur == "+z"){
		if(dob == "+z") return "-x";
		if(dob == "-z") return "+x";
		return cur;
	}
	if(cur == "-z"){
		if(dob == "+z") return "+x";
		if(dob == "-z") return "-x";
		return cur;
	}
}

int main(){
	IO
	ff(tt, 0, LLONG_MAX){
		ll n;
		cin >> n;
		if(n == 0){
			break;
		}
		vs dobs(n-1);
		ff(i, 0, n-1){
			cin >> dobs[i];
		}
		string dir = "+x";
		for(string &dob : dobs){
			dir = calc(dir, dob);
		}
		cout << dir << ed;
	}
	
	return 0;
}
//q monton de casooos, con los simples sale, pero lo veo muy especifico, espero q no haya un caso raro
