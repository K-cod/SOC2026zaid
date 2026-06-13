#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	cin >> n;
	ll data[n];
	ll mincost = 0;
	for (int i  = 0; i < n; i++){
		cin >> data[i];
	}
	sort(data, data + n);
	ll fvalue;
	if (n % 2 == 1){
		fvalue = data[(n+1)/2 - 1];
	}
	else{
		fvalue  = data[n/2];
	}
	for (int i  = 0; i < n; i++){
		mincost += abs(fvalue - data[i]); 
	}
	cout << mincost;
}