#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	ll x = 0;
	ll somme0;
	ll somme1 = 0;
	cin >> n;
	somme0 = (n*(n+1))/2;
	for (int i = 0; i < n-1 ; i++)
	{
		cin >> x;
		somme1 += x;
	}
	cout << somme0 - somme1;
}




