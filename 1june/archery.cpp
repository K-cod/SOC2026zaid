#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;
int gcd(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return gcd(b, a%b);
	}
}
int lcm(int a, int b){
	return (a * b)/(gcd(a,b));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int N;
		cin >> N;
		int data[N];
		for (int j = 0; j < N; j++){
			cin >> data[j];
		}
		int maxlcm = 1;
		for (int j = 0; j < N; j++){
			for (int k = j+1; k < N; k++){
				if (lcm(data[j], data[k]) > maxlcm){
					maxlcm = lcm(data[j], data[k]); 
				}
			}
		}
		cout << maxlcm << '\n';
	}
	
}