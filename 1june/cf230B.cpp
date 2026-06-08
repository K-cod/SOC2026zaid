#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n) { 
  if (n < 2) return false;

  for (int x = 2; x*x <= n; x++) { if (n%x == 0) return false;
  }
  return true;
}

bool isTprime(long long n){
  double rootd = sqrt(n);
  int rooti = rootd;
  if ((rootd - rooti == 0) && prime(rooti)== true){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  int n;
  cin >> n;
  long long nums[n];
  for (int i = 0; i < n; i++){
    cin >> nums[i];
  }

  for (int i = 0; i < n; i++){
    if (isTprime(nums[i]) == true) {
      cout << "YES" << '\n';
    }
    else{
      cout << "NO" << '\n';
    }
  }
}
