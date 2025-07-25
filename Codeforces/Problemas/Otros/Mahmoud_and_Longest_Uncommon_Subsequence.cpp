#include <bits/stdc++.h>
//#include "doll.h"
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(int aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()
ll MOD = 1e9+7;

int main(){
	string a, b;
	cin >> a >> b;
	if(a == b){
		cout << -1;
	}
	else{
		cout << max(a.size(), b.size());
	}
}
