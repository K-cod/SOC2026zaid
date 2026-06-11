#include <iostream>
typedef long long ll;
using namespace std;
 
const int M = 1e9 + 7;
 
int power(int base, int exp){
  if (exp ==0){
    return 1;
  }
  else if (exp %2 == 0){
    int part = (1LL*power(base, exp/2)) % M;
    return (1LL*part*part)%M;
  }
  else{
    return (1LL*base*power(base,exp-1))%M;
  }
}
ll powernomod(ll base, ll exp){
  if (exp ==0){
    return 1;
  }
  else if (exp %2 == 0){
    ll part = (1LL*power(base, exp/2)) ;
    return (1LL*part*part);
  }
  else{
    return (1LL*base*power(base,exp-1));
  }
}
int main(){
  ll N=1;
  int n,a,b;
  ll prod =1, sum = 1, no = 1;
  cin >> n;
  int data[n][2];
  for (int i = 0; i < n; i++){
    cin >> data[i][0] >> data[i][1];
  }  
 
  for (int i = 0; i < n; i++){
    a = data[i][0];
    b = data[i][1];
	no = (1LL*no * (b+1))%M;
	sum = (1LL * sum * ((powernomod(1LL*a,1LL*(b+1)) - 1)/(a-1))) % M;
	N = (1LL * N * (power(a,b)))%M;
  }
  cout << no << ' ' << sum << ' ' << power(N, no/2); 
 
}