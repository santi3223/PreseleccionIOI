#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vl vector<ll>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

string a, b;
vl aa, ac, at, ba, bc, bt;
vl AA, AC, AT, CA, CC, CT, TA, TC, TT;

void init(string x, string y){
	a = x;
	b = y;
	ll n = a.size();
	aa = vl(n, 0);
	ac = vl(n, 0);
	at = vl(n, 0);
	ba = vl(n, 0);
	bc = vl(n, 0);
	bt = vl(n, 0);
	AA = vl(n, 0);
	AC = vl(n, 0);
	AT = vl(n, 0);
	CA = vl(n, 0);
	CC = vl(n, 0);
	CT = vl(n, 0);
	TA = vl(n, 0);
	TC = vl(n, 0);
	TT = vl(n, 0);
	ff(i, 0, n){
		if(i != 0){
			aa[i] = aa[i-1];
			ac[i] = ac[i-1];
			at[i] = at[i-1];
			ba[i] = ba[i-1];
			bc[i] = bc[i-1];
			bt[i] = bt[i-1];
			
			AA[i] = AA[i-1];
			AC[i] = AC[i-1];
			AT[i] = AT[i-1];
			CA[i] = CA[i-1];
			CC[i] = CC[i-1];
			CT[i] = CT[i-1];
			TA[i] = TA[i-1];
			TC[i] = TC[i-1];
			TT[i] = TT[i-1];
		}
		if(a[i] == 'A'){
			aa[i]++;
		}
		else if(a[i] == 'C'){
			ac[i]++;
		}
		else{
			at[i]++;
		}
		if(b[i] == 'A'){
			ba[i]++;
		}
		else if(b[i] == 'C'){
			bc[i]++;
		}
		else{
			bt[i]++;
		}
		
		
		if(a[i] == 'A' && b[i] == 'A'){
			AA[i]++;
		}
		if(a[i] == 'A' && b[i] == 'C'){
			AC[i]++;
		}
		if(a[i] == 'A' && b[i] == 'T'){
			AT[i]++;
		}
		if(a[i] == 'C' && b[i] == 'A'){
			CA[i]++;
		}
		if(a[i] == 'C' && b[i] == 'C'){
			CC[i]++;
		}
		if(a[i] == 'C' && b[i] == 'T'){
			CT[i]++;
		}
		if(a[i] == 'T' && b[i] == 'A'){
			TA[i]++;
		}
		if(a[i] == 'T' && b[i] == 'C'){
			TC[i]++;
		}
		if(a[i] == 'T' && b[i] == 'T'){
			TT[i]++;
		}
	}
}

int get_distance(int x, int y){
	ll qaa = aa[y], qac = ac[y], qat = at[y];
	ll qba = ba[y], qbc = bc[y], qbt = bt[y];
	ll qAA = AA[y], qAC = AC[y], qAT = AT[y];
	ll qCA = CA[y], qCC = CC[y], qCT = CT[y];
	ll qTA = TA[y], qTC = TC[y], qTT = TT[y];
	if(x != 0){
		qaa = aa[y]-aa[x-1];
		qac = ac[y]-ac[x-1];
		qat = at[y]-at[x-1];
		qba = ba[y]-ba[x-1];
		qbc = bc[y]-bc[x-1];
		qbt = bt[y]-bt[x-1];
		
		qAA = AA[y]-AA[x-1];
		qAC = AC[y]-AC[x-1];
		qAT = AT[y]-AT[x-1];
		qCA = CA[y]-CA[x-1];
		qCC = CC[y]-CC[x-1];
		qCT = CT[y]-CT[x-1];
		qTA = TA[y]-TA[x-1];
		qTC = TC[y]-TC[x-1];
		qTT = TT[y]-TT[x-1];
	}
	if(qaa != qba || qac != qbc || qat != qbt){
		//cout << qaa << " " << qba << ed;
		//cout << qac << " " << qbc << ed;
		//cout << qat << " " << qbt << ed;
		return -1;
	}
	int ans = 0;
	int aux = min(qAC, qCA);
	ans += aux;
	qAC -= aux;
	qCA	-= aux;
	//cout << "CA" << aux << ed;
	aux = min(qAT, qTA);
	ans += aux;
	qAT -= aux;
	qTA	-= aux;
	//cout << "AT" << aux << ed;
	aux = min(qCT, qTC);
	ans += aux;
	qTC -= aux;
	qCT	-= aux;
	//cout << "CT" << aux << ed;
	//cout << "TOT " << res << " " << aux << ed;
	//cout << wrong[y] << " " << wrong[x-1] << ed;
	int ex = qAT+qTA+qCA+qAC+qCT+qTC;
	ans += (ex/3)*2;
	return ans;
	
}
/*
int main(){
	ll n, q;
	cin >> n >> q;
	string A, B;
	cin >> A >> B;
	init(A, B);
	while(q--){
		int na, nb;
		cin >> na >> nb;
		cout << get_distance(na, nb) << ed;
	}
	
}

*/
