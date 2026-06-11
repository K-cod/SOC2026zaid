#include <iostream>
using namespace std;
int main(){
	
	string data;
	cin >> data;
	long long n = data.size();
	long long max = 1, count = 1;
	
	for(int i = 0; i < n-1; i++){
		if (data[i] == data[i+1]){
			count++;
			
		}
		else{
			count = 1;
			}
		if (count > max){
			max = count;
		}
	}
	cout << max;
	
}