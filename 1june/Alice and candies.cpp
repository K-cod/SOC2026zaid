#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

bool istrue(int a, int n){
	if (a >= 1 && a%2 == 1 && n>= 1){
		return true;
	}
	else{
		return false;
	}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int n;
	cin>> n;
	int cnt = 0;
	for (int i = 1; i * i <= n; i++){
		if (n % i  == 0){
			if (n/i != i){
				int d1 = i;
				int d2 = n/i;
				if (istrue((d2 -d1 + 1),d1) == true) cnt++;				
				if (istrue((d1 -d2 + 1),d2) == true) cnt++;
			}
			else{
				int d = i;				
				if (istrue(1,d) == true) cnt++;
			}
		}
	}
	cout << cnt;
	
	
}