#include <iostream>
using namespace std;

int main(){
	int n,m,a;
	long long rc, cc;
	cin >> n >> m >> a;
	double v1 = (n*(1.0))/a;
	double v2 = (m*(1.0))/a;
	if (v1 - n/a == (double) 0)
	{
		rc = n/a;
		
	}
	else{
		rc = (long long)n/a + 1;
	}
	if (v2 - m/a == (double) 0)
	{
		cc = m/a;
	}
	else{
		cc = (long long)m/a + 1;
	}
	cout << rc * cc;
	
}
