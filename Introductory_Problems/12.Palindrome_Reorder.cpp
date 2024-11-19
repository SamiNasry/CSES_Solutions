#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll; 

int main()
{
	string input;
	cin >> input;
	string palindrome;
	ll occurence[26] = {0};
	int odd = 0;
	int index_odd;
	for(char x : input)
	{
		int index = ((int)x - (int)'A') ;
		occurence[index]++;
	}
	for(int i = 0; i < 26 ; i++)
		{
			if(occurence[i] % 2 != 0 && occurence[i] != 0)
			{
				odd++;
				index_odd = i;
			}
			else if(occurence[i] % 2 == 0 && odd < 2 && occurence[i] != 0)
			{
				palindrome.append((occurence[i] / 2) , (char)(i + 65));
			}
			else if(odd >= 2)
			{
				cout << "NO SOLUTION"<< endl;
				break;
			}
		}
		string pali_reverse = palindrome;
		reverse(pali_reverse.begin(), pali_reverse.end());
		
		if(odd < 2 && odd > 0)
		{
			palindrome.append(occurence[index_odd] , (char)(index_odd + 65));
		}
		if(odd < 2)
		{
			cout << palindrome + pali_reverse;
		}
}
