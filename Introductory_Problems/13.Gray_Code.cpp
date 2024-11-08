#include <iostream>
#include <vector>
#include <string>

using namespace std;



vector<string> solve(int n)
{
	vector<string> code;
	if (n == 1)
	{
		code = {"0", "1"};
		return code;
	}
	
	vector<string> old_code = solve(n-1);
	for(int i = (int)old_code.size() - 1; i >= 0; i--)
	{
		code.push_back("1" + old_code[i]);
	}
	for (int i = 0; i < (int)old_code.size(); i++)
	{
		code.push_back("0" + old_code[i]);
	}

	return code;
	
}


int main()
{
	int n;
	cin >> n;
	vector<string> answer = solve(n);
	for (int i = answer.size()-1; i >= 0 ; i--)
	{
		cout << answer[i] << endl;
	}

}
