#include <iostream>
using namespace std;


const int M = 1e9 + 7;
/*
int expwithbb(int base, int exp){
  int ans = 1;
  for (int i = 0; i < exp; i++){
    ans = (base*ans*1LL)%M;
  }
  return ans;
}
*/
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

int factorial(int n){
  if (n == 0) return 1;
  else{
    return (n*1LL * (factorial(n-1)% M))%M;
  }
}
int main(){
  int t, N,K;
  cin >> t;
  int data[t][2];
  for (int i = 0; i < t; i++){
    cin >> data[i][0] >> data[i][1];
  }

  for (int i = 0; i < t; i++){
    N = data[i][0];
    K = data[i][1];
    cout << (1LL*factorial(K) * power(factorial(K-N), M-2))%M << '\n';
  }
}
