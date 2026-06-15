#include<bits/stdc++.h>
using namespace std;


signed main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n;
 cin >> n;
 int data[n];
 int cnt = 1;
 int ind[n];
 for (int i = 0; i < n; i++)
 {
 	cin >> data[i];
 	ind[data[i] - 1] = i;
 }
 for (int i = 2; i <= n; i++)
 {
 	if (ind[i-1] < ind[i-2]){
 		cnt++;
 	}
 }
 cout << cnt;
 return 0;
}
  