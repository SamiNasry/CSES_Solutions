#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;


int main()
{
 ll n{};
 ll product = 1;
 ll mod = 1e9 + 7;
 cin >> n;

 for(int  i = 0 ; i < n ; i++)
 {
	 product = (product * 2) % mod;
 }
 
 
 cout << product << endl;

}
