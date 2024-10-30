#include <iostream>

using namespace std;

typedef long long ll;


int main()
{
	ll n, x , y;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> y >> x;
		ll layer = max(y,x);
		ll sup = (layer*layer);
		if (layer % 2 == 0)
		{
			if (x >= y)
			{
				cout << sup - (layer - 1) - (layer - y) << endl;
			}
			else
			{
				cout << sup - (x - 1) << endl;
			}
		}
		else if (layer % 2 != 0)
		{
			if (x >= y)
			{
				cout << sup - (y-1) << endl;
			}
			else
			{
				cout << sup - (layer - 1) - (layer - x) << endl;
			}
		}
	}
}
