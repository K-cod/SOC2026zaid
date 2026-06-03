#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,k;
  int i = 1, removed = 0;
  cin >> n >> k;
  vector<int> nums(n);
  for (int i = 0; i < nums.size(); i++){
    nums[i] = i+1;
  }
  int steps = 0;
  while (nums.size() != 0){

    if (nums.size() == 1){
      cout << 1;
      return 1;
    }
    else{
      if (i - removed < nums.size()){
        if (steps + 1 == k){
          cout << nums[  i - removed];
          return 1;
        }
        nums.erase(nums.begin() + i - removed);
        steps++;
        i = i +2;
        removed++;
      }
      else{
        i = 1;
        removed = 0;
        continue;
      }
    }

  }
}

