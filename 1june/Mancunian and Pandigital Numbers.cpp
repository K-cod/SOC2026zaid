#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

bool func(int n){
	vector<int> v;
	for (int i = n; i/10 >= 0;){
		if (i/10 == 0){
			v.push_back(i % 10);
			break;
		}
		else{
			v.push_back(i%10);
			i = i - (i%10);
			i = i/10;
		}
		
	}
	reverse(v.begin(), v.end());
	int d = v.size();
	
	for (int i = 1; i <= d && i <= 9; i++){
		int count  = 0;
		for (int j = 0; j < d; j++){
			if (v[j] > d || v[j] == 0){
				return false;
			}
			if (v[j] == i){
				count++;
				if (count > 1){
					return false;
				}
			}
		}
	}
	return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int Q;
	cin >> Q;
	int LR[Q][2];
	
	for (int i = 0; i < Q; i++){
		cin >> LR[i][0] >> LR[i][1];
	}
	
	for (int i = 0; i < Q; i++){
		int count = 0;
		for (int j= LR[i][0]; j <= LR[i][1];j++){
			if (func(j) == true){
				count++;
			}
		}
		cout << count << '\n';
	}	
}