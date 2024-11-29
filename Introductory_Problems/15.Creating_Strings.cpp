#include <iostream>
#include <set>
#include <string>

using namespace std;

void Permutation(string &s, int index, set<string> &resultat)
{
	if (index == s.size())
	{
		resultat.insert(s);
		return;
	}

	for(int i = index; i < s.size(); i++)
	{
		swap(s[index], s[i]);
		Permutation(s, index + 1, resultat);
		swap(s[index], s[i]);
	}

}

int main()
{
	string input;
	cin >> input;

	set<string> final;

	Permutation(input, 0, final);

	cout << final.size() << endl;

	for (const string s : final) {
		cout << s << endl;
	}

}
