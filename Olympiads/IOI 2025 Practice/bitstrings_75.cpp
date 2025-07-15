#include <bits/stdc++.h>
#include "bitstrings.h"
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(aaa) aaa.begin(), aaa.end()
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define vb vector<bool>
#define ed "\n"
#define pb push_back

int count_duplicated(std::string str){
	//cout << "N" << " " << str.size() << ed << ed;
	ll n = str.size();
	set<string> st;
	string x = str.substr(0, n/2), y = str.substr(0+n/2, n/2);
	for(ll sz = 2; sz <= n; sz+= 2){
		ff(j, 0, n-sz+1){
			string a = str.substr(j, sz/2), b = str.substr(j+sz/2, sz/2);
			ll szz = st.size();
			if(a == b) st.insert(a+b);
			/*if(szz < st.size()){
				cout << a << " " << b << ed;
			}*/
		}
	}
	//cout << str.size() << " ";
	//cout << ed;
  return st.size();
}

std::string find_weakest() {
	string x = "0001011000111001011000101110001100101100010111001011000111001011100010110001110010110001011100011001";

  return x;
}

std::string find_strongest() {
	string x = "1101001000100001000001000000100000001000000001000000000100000000001000000000001000000000000100000000";
  return x;
}
/*
namespace {

void run_part1() {
  char tmp[101];
  assert(1 == scanf("%100s", tmp));
  std::string S = tmp;
  fclose(stdin);

  int K = count_duplicated(S);

  printf("%d\n", K);
  fclose(stdout);
}

void run_part2() {
  char tmp[101];
  assert(1 == scanf("%100s", tmp));
  std::string T = tmp;
  fclose(stdin);

  std::string S;
  if (T == "weakest")
    S = find_weakest();
  else if (T == "strongest")
    S = find_strongest();

  printf("%s\n", S.c_str());

  fclose(stdout);
}

} // namespace

void other(string str){
	string x = str, re = "";
	ll maxx = 0;
	ll n = str.size();
	unordered_set<string> todos;	
	ff(i, 0, str.size()){
		if(x[i] == '0'){
			x[i] = '1';
		}
		else{
			x[i] = '0';
		}
		ll val = count_duplicated(x);
		if(val > maxx){
			maxx = val;
			re = x;
			todos.clear();
		}
		if(val == maxx){
			todos.insert(x);
		}
		x = str;
	}
	ff(i, 0, n){
		ff(j, i+1, n){
			if(x[i] == '0'){
				x[i] = '1';
			}
			else{
				x[i] = '0';
			}
			if(x[j] == '0'){
				x[j] = '1';
			}
			else{
				x[j] = '0';
			}
			ll val = count_duplicated(x);
			if(val > maxx){
				maxx = val;
				re = x;
				todos.clear();
			}
			if(val == maxx){
				todos.insert(x);
			}
			x = str;
		}
	}
	for(auto &p : todos){
		cout << p << ed;
	}
	cout << maxx <<  "  -  " << todos.size();
}

void mi(string str){
	string x = str, re = "";
	ll minn = 100;
	ll n = str.size();
	unordered_set<string> todos;
	ff(i, 0, str.size()){
		if(x[i] == '0'){
			x[i] = '1';
		}
		else{
			x[i] = '0';
		}
		ll val = count_duplicated(x);
		if(val < minn){
			minn = val;
			re = x;
			todos.clear();
		}
		if(val == minn){
			todos.insert(x);
		}
		x = str;
	}
	ff(i, 0, n){
		ff(j, i+1, n){
			if(x[i] == '0'){
				x[i] = '1';
			}
			else{
				x[i] = '0';
			}
			if(x[j] == '0'){
				x[j] = '1';
			}
			else{
				x[j] = '0';
			}
			ll val = count_duplicated(x);
			if(val < minn){
				minn = val;
				re = x;
				todos.clear();
			}
			if(val == minn){
				todos.insert(x);
			}
			x = str;
		}
	}
	for(auto &p : todos){
		cout << p << ed;
	}
	cout << minn <<  "  -  " << todos.size();
}

string xxx;
ll maxx = 0;
unordered_set<string> base;
void brute(string &str, ll ac){
	if(ac > maxx){
		xxx = str;
		maxx = ac;
	}
	if(ac >= 80){
		xxx = str;
		return;
	}
	ff(i, 0, str.size()){
		string y = str;
		if(str[i] == '0'){
			y[i] = '1';
		}
		else{
			y[i] = '0';
		}
		ll sz = base.size();
		base.insert(y);
		if(sz != base.size()){
			ll cou = count_duplicated(y);
			if(cou+10 >= ac){
				brute(y, cou);
			}
		}
	}
	
}

int main() {
  int part;
  assert(1 == scanf("%d", &part));
  if (part == 1)
    run_part1();
  else if (part == 2)
    run_part2();
   else if(part == 3){
	   string s;
	   cin >> s;
	other(s);
	  }
	  else if(part == 4){
		string s;
		cin >> s;
		mi(s);
	}
	else{
		string cur;
		cin >> cur;
		ll pe = count_duplicated(cur);
		brute(cur, pe);
		cout << ed << ed << ed;
		cout << maxx << "  |  " << count_duplicated(xxx);
		cout << ed;
		cout << xxx;
	}

  return 0;
}

*/
