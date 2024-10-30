#include <iostream>

using namespace std;



typedef long long ll;

int main()
{
	ll n;
	cin >> n;
	ll numbers[n];
	

	for (ll i = 1 ; i <= n ; i++)
	{
		numbers[i-1] = i;
	}

	if (n == 2 || n == 3)
	{
		cout << "NO SOLUTION" << endl;
	}
	else if(n == 1)
	{
		cout << n;
	}
	else if (((n%2) == 0) && n != 2 )
	{
		for (ll i = 0; i < n/2 ; i++)
		{
		cout << numbers[n/2 + i] << " " << numbers[i] << " ";
		}
	}

	else if (((n%2) != 0) && n != 2)
	{
		for (ll i = 0; i < (int)(n/2) ; i++)
		{
			cout << numbers[i] << " " << numbers[(int)(n/2)+1+i] << " " ;
		}
		cout << numbers[(int)(n/2)];
	}


}
