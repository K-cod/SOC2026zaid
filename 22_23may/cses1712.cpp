#include <iostream>
using namespace std;


const int M = 1e9 + 7;

int power(int base, int exp, int m){
  if (exp ==0){
    return 1;
  }
  else if (exp %2 == 0){
    int part = (1LL*power(base, exp/2, m)) % m;
    return (1LL*part*part)%m;
  }
  else{
    return (1LL*base*power(base,exp-1, m))%m;
  }
}
int main(){
  int n,a,b,c;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> a >> b >> c;
    cout << power(a, power(b,c,M-1), M) << '\n';
  }
}
