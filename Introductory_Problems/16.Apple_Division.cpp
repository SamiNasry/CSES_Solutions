#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	vector<int> weights(n);
	ll p;
	ll biggest = 0;
	ll biggest_index = 0;
	
	for (int i = 0 ; i < n ; i++)
	{
		cin >> p;
		weights[i] = p;
		if(p > biggest)
		{
			biggest = p;
			biggest_index = i;
		}
		else continue;
	}

	ll set1 = 0;
	ll set2 = 0;

	set1+=biggest;
	weights[biggest_index] = 0;	
	for(int i = 0; i < n ; i++)
	{
		if (set1 > set2) set2+=weights[i];
		else set1+=weights[i];
	}

	if(set1 > set2) cout << set1 - set2;
	else cout << set2 - set1;


	

}
