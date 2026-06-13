#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	cin >> n;
	ll sum = 0, sum1 = 0;
	ll data[n];
	for (int i = 0; i < n; i++){
		cin >> data[i];
	}
	sort(data, data+n);
	
	for (int i = 0; i < n; i++){
		sum += data[i];
	}
	sum1 = sum - data[n-1];
	if (sum1 >= data[n-1]){
		cout << sum;
	}
	else{
		cout << 2 * data[n-1];
	}
}