#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

bool isUnb(string s){
	if (s.size() == 3){
		if (s[0]==s[2] || s[0] == s[1] || s[1] == s[2]){
			return true;
		}
	}
	return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	string s;
	cin >> s;
	if (s.size() >= 3){
	for (int i =0; i < s.size()-2; i++){
		string sub;
		sub.push_back(s[i]);		
		sub.push_back(s[i+1]);		
		sub.push_back(s[i+2]);
		if (isUnb(sub) == true){
			cout << i+1 << ' ' << i+3 << '\n';
			return 0;
		}
	}
	}
	if (s.size() == 2){
		if (s[0] == s[1]){
			cout << 1 << ' ' << 2 << '\n';
			return 0;
		}
	}
	cout << -1 << ' ' << -1 << '\n';
}