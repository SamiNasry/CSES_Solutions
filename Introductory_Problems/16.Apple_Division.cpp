#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

typedef long long ll;

int main()
{
	ll x;
	int n;
	cin >> n;
	vector<ll> w;
	ll min_sum = 0;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		w.push_back(x);
		min_sum+=x;
	}

	for(ll i = 0; i < (1LL << n) ; i++)
	{
		ll sum1{0},sum2{0};
		for(ll j = 0; j < n ; j++)
		{
			if(i & (1LL << j))
					{
						sum1+=w[j];
					}
			else
			{
					sum2+=w[j];
			}
		}
		if(abs(sum1 - sum2) < min_sum) min_sum = abs(sum1 - sum2);
		
	}
	


	cout << min_sum << endl;
	

}
