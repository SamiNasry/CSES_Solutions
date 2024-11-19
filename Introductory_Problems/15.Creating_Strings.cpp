#include <iostream>
#include <string>



using namespace std;

typedef long long ll;



int main()
{
		string x;
		ll n{0};
		getline(cin, x);
		for(char i : x)
		{
			n++;
		}
		cout << n*(n-1);
}
