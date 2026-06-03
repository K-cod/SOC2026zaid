#include <iostream>
using namespace std;
const int M = 1e9 + 7;
int power(int base, int exp){
  if (exp ==0){
    return 1;
  }
  else if (exp %2 == 0){
    int part = (power(base, exp/2)) ;
    return (part*part);
  }
  else{
    return (base*power(base,exp-1));
  }
}
int main(){
  int n,pow5 = 0;
  int i = 1;
  cin >> n;
  while (n/power(5, i) != 0){
    pow5 += n/power(5,i);
    i++;
  }
  cout << pow5;
}

