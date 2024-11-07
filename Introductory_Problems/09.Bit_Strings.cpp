#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;


int main()
{
 ll n{};
 ll product = 1;
 cin >> n;

 product = (ll)powl(2, n);
 
 cout << product << endl;
 cout << (product) % (ll)(pow(10, 9)+7) << endl;
}
