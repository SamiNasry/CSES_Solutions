#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
	ll n{};
	ll somme{};
	vector<ll> set1;
	vector<ll> set2;
	cin >> n;
	
	somme = (n*(n+1))/2;
	if (somme % 2 == 0)
	{
		cout << "YES" << endl;
		ll target = 0;
		ll num1=0;
		ll num2=0;
		for(int i = n; i > 0; i--)
		{
			if ((i + target) <= (somme/2))
			{
				target+=i;
				set1.push_back(i);
				num1++;
			}
			else {
				set2.push_back(i);
				num2++;
			}
			

		}
		cout << num1 << endl;
		for (int i = 0; i < num1 ; i++)
		{
			cout << set1[i] << " ";
		}
		cout << endl << num2 << endl;
		for (int i = 0; i < num2 ; i++)
		{
			cout << set2[i] << " ";
		}
	}
	else
		cout << "NO" << endl;


}


