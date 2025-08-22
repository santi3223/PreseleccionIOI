#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define ff(aa, bb, cc) for(ll aa = bb; aa < cc; aa++)
#define ed "\n" 
#define pb push_back
#define all(aaa) aaa.begin(), aaa.end()
#define rall(aaa) aaa.rbegin(), aaa.rend()

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

string fromDeci(int base, int inputNum)
{
	string res;
    int index = 0;

    while (inputNum > 0) {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }

    reverse(all(res));

    return res;
}

int main(){
	ll t;
	cin >> t;
	vl res(25);
	res[0] = 3;
	ll a = 9, b = 1;
	ff(i, 1, 21){
		//cout << i << " " << a << " " << i << " " << b << "  ";
		res[i] = a+i*b;
		//cout << a+i*b << ed;
		a *= 3;
		b *= 3;
	}
	while(t--){
		ll n, k;
		cin >> n >> k;
		string strr = fromDeci(3, n);
		//cout << str << ed;
		ll c = 0;
		reverse(all(strr));
		ll quant = 0;
		vl str(strr.size());
		ff(i, 0, strr.size()){
			str[i] = strr[i]-48;
			quant += str[i];
		}
		if(quant > k){
			cout << -1 << ed;
			continue;
		}
		k -= quant;
		//cout << "K " << k << " " << quant << ed;
		for(ll i = str.size()-1; i > 0; i--){
			ll minn = min(str[i], k/2);
			str[i] -= minn;
			str[i-1] += 3*minn;
			k -= 2*minn;
			if(k <= 1){
				break;
			}
		}
		ff(i, 0, str.size()){
			//cout << str[i] << " ";
			ll id = str[i];
			//cout << "( " << id << " " << res[i] << " )" << ed; 
			c += id*res[i];
		}
		//cout << ed;
		cout << c << ed;
	}
}
