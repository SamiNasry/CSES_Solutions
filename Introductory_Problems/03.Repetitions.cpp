#include <iostream>
#include <string>

using namespace std;


typedef long long ll;


int main()
{
	string DNA;
	ll count = 1;
	ll max_sequence = 1;
	cin >> DNA;

	for (ll i = 1; i < DNA.length() ; i++)
	{
		
		if (DNA[i] == DNA[i-1])
		{
			count++;
		}
		else
		{
			max_sequence = max(max_sequence, count);
			count = 1;
		}
	}

	max_sequence = max(max_sequence, count);

	cout << max_sequence;
}
