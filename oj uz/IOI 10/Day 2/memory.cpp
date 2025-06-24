#include <bits/stdc++.h>
#include "memory.h"
#include "grader.h"
using namespace std;
#define ll long long
#define vl vector<ll>
#define vb vector<bool>
#define pb push_back
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define pll pair<ll, ll>
#define fi first
#define se second
#define ed "\n"
#define all(aaa) aaa.begin(), aaa.end()	
ll MOD = 1e9+7;
/*
string letters;

char faceup(ll id){
	return letters[id-1];
}

void c(char a, char b){
	if(faceup(a) == faceup(b)){
		cout << "OK " << faceup(a);
	}
	else{
		cout << "GG " << faceup(a);
	}
	cout << ed;
}
*/
void play(){
	vector<vl> arr(25);
	ff(i, 1, 51){
		char c = faceup(i);
		//cout << c;
		arr[c-'A'].pb(i);
	}
	//cout << ed;
	ff(i, 0, 25){
		faceup(arr[i][0]);
		faceup(arr[i][1]);
		//cout << arr[i][0] << " " << arr[i][1] << ed;
		//c(arr[i][0], arr[i][1]);
	}
}
