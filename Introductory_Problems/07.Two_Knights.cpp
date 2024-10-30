// I hvae no idea why this olution works, i just figured a pattern and assumed it is true //


#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
	ll k{};

	cin >> k;
		for (int i = 1; i <= k ; i++)
	{
		ll i_square = i*i;
	ll number_of_moves = ((((i_square)-1) * i_square)/2) - ((8*(i-2)*(i-1))/2);
	cout << number_of_moves << endl;
	}
	
}
