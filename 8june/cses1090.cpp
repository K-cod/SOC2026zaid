#include<bits/stdc++.h>
using namespace std;
#define long long ll;

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);
 int n, x;
 int cnt = 0;
 cin >> n >> x;
 int w[n];
 for (int i = 0; i < n; i++)
 {
 	cin >> w[i];
 }
 sort(w, w + n);
 int i = 0;
 for (int j = n-1; j >= i; j--)
 {
 	if (w[i] + w[j] <= x && (j != i)){
 		cnt++;
 		i++;
 	}
 	else if (w[i] + w[j] > x && (j!= i)){
 		cnt++;
 	}
 	else{
 		if (w[i] <= x){
 			cnt++;
 			cout << cnt;
 			return 0;
 		}
 	}
 }
 cout << cnt;
 return 0;
}
  