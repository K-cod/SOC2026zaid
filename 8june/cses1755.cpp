#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	string s;
	cin >> s;
	int counts[26];
	int oddcount = 0;
	string output(s.size(), ' ');
	for (int i = 0; i < 26; i++){
		counts[i] = 0;
	}
	for (int i = 0; i < s.size(); i++){
		counts[s[i] - 'A']++;
	}
	
	for (int i = 0; i < 26; i++){
		if (counts[i] % 2 == 1){
			oddcount++;
		}
	}
	if (oddcount > 1){
		cout << "NO SOLUTION";
		return 0;
	}
	int j = 0;
	for (int i = 0; i < s.size(); i++){
		if (counts[s[i] - 'A'] > 0 && (counts[s[i] - 'A'] %2 == 0) ){
			output[j] = s[i];
			output[s.size() - j-1] = s[i];
			counts[s[i] - 'A'] -= 2;
			j++;
		}
		else if(counts[s[i] - 'A'] %2 == 1){
			output[(s.size() + 1)/2 - 1] = s[i];
			counts[s[i] - 'A']--;
		}
	}
	cout << output;
	
}