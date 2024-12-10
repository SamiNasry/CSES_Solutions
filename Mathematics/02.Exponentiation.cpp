#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



ll expo_funct(ll a, ll b)
{
	ll res = 1;
	while(b > 0)
	{
		if(b&1)
		{
			res = (res * a) % (ll)(1e9 +7);
		}
		a = (a * a) % (ll)(1e9 +7);
		b >>= 1;

	}

	return res;
}
int main()
{
	ll k,a,b;

	cin >> k;
	for(ll i = 0; i < k; i++)
	{
		cin >> a;
		cin >> b;
		cout << expo_funct(a,b) << endl;
	}

}
