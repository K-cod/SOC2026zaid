#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	string s, output;
	cin >> s;
	for (int i = 0; i < s.size(); i++){
		if (s[i] == '0'){
			output.push_back('0');
			
		}
		
		else if (s[i] == '1'){
			output.push_back('1');
			
		}
		else{
			if (output.size() != 0){
				output.pop_back();
			}
		}
		
		}
	cout << output;
}