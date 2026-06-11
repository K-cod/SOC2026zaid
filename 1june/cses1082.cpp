#include <iostream>
#include <vector>
using namespace std;
const int M = 1e9 + 7;
 
/*
vector<int> factorization(int n){
  vector<int> f;
  for (int i = 2; i*i <= n; i++){
   while (n % i == 0){
     f.push_back(i);
     n = n/i;
   } 
  }
  if (n > 1){
    f.push_back(n);
  }
  return f;
} */
long long sumdiv(long long n){
  vector<long long> f;
  long long ans = 1;
  long long sum = 1, prod = 1;
  for (long long i = 2; i*i <= n; i++){
   while (n % i == 0){
     prod = (prod * i)%M;
     sum = (sum + prod) % M; 
     f.push_back(i);
     n = n/i;
   }
   ans = (ans * sum)%M;
   sum = 1; 
   prod = 1;
  }
  if (n > 1){
    f.push_back(n);
    ans = (ans * (1+n))%M;
  }
  return ans;
}
int main(){
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++){
    sum= (sum + sumdiv(i)) % M;
  } 
  cout << sum;
}