#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int cost = 0;
	float fmean = 0;
	int N, mean = 0;
	cin >> N;
	int data[N];
	for (int i = 0; i < N; i++){
		cin >> data[i];
		mean+= data[i];
		fmean += data[i];
	}
	mean = mean/N ;
	fmean = fmean/N;
	if (fmean - mean > 0.5f){
		mean = mean + 1;
	}
	
	for (int i = 0; i < N; i++){
		cost += ((data[i] - mean)*(data[i] - mean));
	}	
	cout << cost;
}