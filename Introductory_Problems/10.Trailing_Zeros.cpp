#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	ll trailng_zeros_num = 0;

	cin >> n;
	while (n >= 5)
	{

		trailng_zeros_num += (int)(n / 5);
		n = (int)(n / 5);
	}

	cout << trailng_zeros_num;
}
