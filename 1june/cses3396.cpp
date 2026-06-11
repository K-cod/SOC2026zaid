#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
bool isPrime(ll n){
	if (n == 1){
		return false;
	}
	for (ll i = 2; i * i <= n; i++ ){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int  t;
	cin >> t;
	ll data[t];
	for (int i = 0; i < t; i++){
		cin >> data[i];
	}
	
	for (int i = 0; i < t; i++){
		data[i]++;
		while (isPrime(data[i]) == false){
			data[i]++;
		}
		cout << data[i]<< '\n';
	}
}