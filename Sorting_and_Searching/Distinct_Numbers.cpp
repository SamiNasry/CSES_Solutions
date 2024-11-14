#include <iostream>
#include <set>

using namespace std;

typedef long long ll;

int main()
{
	set<ll> numbers;
	ll n;
	cin >> n;
	for(ll i = 0; i < n ; i++)
	{
		ll x = 0;
		cin >> x;
		numbers.insert(x);
	}

	cout << numbers.size();
}
