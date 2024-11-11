#include <vector>
#include <iostream>
#include <string>

using namespace std;


typedef long long ll;

int main()
{
	string input;
	ll n = 0;
	ll twin{0};
	ll twin_inside{0};
	ll unique_elements{0};
	vector<char> la_phrase;
	vector<char> palindrome;
	getline(cin , input);
	for(char c : input)
	{
		la_phrase.push_back(c);
		n++;
	}

	
	for(ll i = 0; i < n; i++)
	{
		palindrome.push_back(0);
	}

	
	for (ll i = 0; i < n ; i++)
	{
		for(ll j = i+1; j <= n-1; j++)
		{
			twin_inside = 0;
			if(la_phrase[i] == la_phrase[j] && la_phrase[i] != '*')
			{
				twin++;
				palindrome[twin - 1] = la_phrase[i];
				palindrome[n - twin] = la_phrase[i];
				la_phrase[j] ='*';
				la_phrase[i] = '*';
				twin_inside++;
				break;
			}
		}
		if (!twin_inside && la_phrase[i] != '*')
		{
			unique_elements++;
			ll m;
			if ( n % 2 ) m = n / 2;
			else m = ((int) n / 2) + 1;
			palindrome[m] = la_phrase[i];
			
		}
		if(unique_elements == 2)
		{
			cout << "NO SOLUTION" << endl;
			break;
			return 0;
		}
	}
	if(unique_elements < 2)
	{
		for(ll i = 0 ; i < n; i++)
		{
			cout << palindrome[i];
		}
	}

}
