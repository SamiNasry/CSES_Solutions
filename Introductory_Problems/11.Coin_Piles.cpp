#include <iostream>
 
using namespace std;
 
typedef long long ll;
 
int main()
{
	ll n,a,b;
 
	cin >> n;
	for(ll i = 0 ; i < n; i++)
	{
		cin >> a;
		cin >> b;
		if ((a+b) % 3 != 0 || ((a == 0) && (b!= 0)) || ((b == 0) && (a != 0 )) || a < (b/2) || b < (a/2))
		{
			cout << "NO" << endl;
		}
		else
		{
			
			cout << "YES" << endl;
		}
		
	}
}
