#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()

int LocateCentre(int N, int P[], int S[], int D[]){
	vl arr;
	ll n = N;
	arr.pb(P[0]);
	ff(i, 1, n){
		arr.pb(arr[i-1]+P[i]); //habitantes totales desde izq
	}
	ll minn = 1e11, q = 0;
	ff(i, 0, n){
		ll op = arr[n-1]-arr[i], cur = arr[i]-P[i];
		// total ultimo - total actual // total actual - solo actual
		ll maxx = max(op, cur);
		if(maxx < minn){
			minn = maxx;
			q = i;
		}
	}
	
	return q;
}
