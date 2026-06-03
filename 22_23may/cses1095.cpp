#include <iostream>
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
int main(){
  cout << power(2,3);
}
