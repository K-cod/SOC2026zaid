#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
const int MAX = 1e5;
int sieve[MAX + 1];
/*
bool prime(int n) { 
	if (n < 2) return false; 
	for (int x = 2; x*x <= n; x++) 
	{ 
		if (n%x == 0) return false;
	} 
	return true; 
} */
void func(){
	sieve[0] = -1;
	sieve[1] = 1;
for (int x = 2; x <= MAX; x++) {
	sieve[x] = 0;
}
for (int x = 2; x <= MAX; x++) 
{ 
	if (sieve[x]) continue;
	for (int u = 2*x; u <= MAX; u += x) {
		sieve[u] = x;
} 
}
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	func();
	int t;
	cin >> t;
	ll output[t];
	for (int i = 0; i < t; i++){
		int N, n1 = 0, np = 0;
		cin >> N;
		int data[N];
		for (int j = 0; j < N; j++){
			cin >> data[j];
		}
		
		for (int j = 0; j < N; j++){
			if (data[j] == 1){
				n1++;
			}
			if (sieve[data[j]] == 0){
				np++;
			}
		}
		if (n1 < 2 || np < 1){
			output[i] = 0;
		}
		else{
			output[i] = ((1LL *n1 * (n1 - 1) * np))/2;
		}
		
	}
	
	for (int i = 0; i < t; i++){
		cout << output[i] << '\n';
	}
}