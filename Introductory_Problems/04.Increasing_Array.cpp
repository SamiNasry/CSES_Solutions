#include <iostream>


using namespace std;

typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	ll seq[n];
	ll x;
	ll count = 0;
	for (int i = 0; i < n ; i++)
	{
		cin >> x;
		seq[i] = x;
	}

	for (int i = 1; i < n ; i++)
	{
		while (seq[i] < seq[i-1])
		{
			seq[i]++;
			count++;

		}
	}

	cout << count;

}
