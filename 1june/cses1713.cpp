#include <iostream>
#include <vector>
using namespace std;

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
int countingdiv(int n){
  vector<int> f;
  int count = 0;
  int ans = 1;
  for (int i = 2; i*i <= n; i++){
   while (n % i == 0){
     f.push_back(i);
     count++;
     n = n/i;
   }
   ans *= count +1;
   count = 0;
  }
  if (n > 1){
    f.push_back(n);
    count++;
    ans *= count +1;
  }
  return ans;
}
int main(){
  int n, count;
  cin >> n;
  int data[n];
  for (int i = 0; i < n; i++){
    cin >> data[i];
  } 
  for (int i = 0; i < n; i++){
    cout << countingdiv(data[i]) << '\n';
  }
}
