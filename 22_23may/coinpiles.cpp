#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int data[t][2];
  int a,b;
  for (int i = 0; i < t; i++){
    cin >> data[i][0] >> data[i][1];
  }

  for (int i = 0; i < t; i++){
    a = data[i][0];
    b = data[i][1];
    if ((2*b - a)%3 == 0 && (2*a - b ) % 3 == 0){
      cout << "YES" << '\n';
    }
    else{
      cout << "NO" << '\n';
    }
  }
}
