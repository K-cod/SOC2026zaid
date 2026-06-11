

#include <iostream>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
	ll	sum = 0;
	ll n;
	cin >> n;
	
	for (ll d = 1; d*d <= n; d++){
		if (d != n/d){
			sum = sum + (d * (n/d)) + ((n/d) * d);
			
		}
		else{
			sum = sum + (d * (n/d));
		}
	}
	
	cout << sum;
}