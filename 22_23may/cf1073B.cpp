#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int bookdata[n];
  int bookpick[n];
  int output[n];
  // -1 meaning book is picked
  for (int i = 0; i < n; i++){
    cin >> bookdata[i];
  }
  for (int i = 0; i < n; i++){
    cin >> bookpick[i];
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (bookpick[i] == bookdata[j]){
        output[i] = j+1;
        for (int k = 0; k < j+1; k++){
          bookdata[k] = -1;
        }
        break;
      }
      else {
        output[i] = 0;
      }
    }
  }
  for (int i = 0; i < n; i++){
    if (i != n-1) cout << output[i] << ' '; 
    else{
      cout << output[i];
    }
  }
}


