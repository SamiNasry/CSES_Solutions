#include <iostream>
#include <string>

using namespace std;


int is_out_of_bound(int x, int y)
{
	if(x > 6 || x < 0 || y > 6 || y < 0 ) return 1;
	else return 0;
}

int explore(char path[48],int x, int y, int index, int track[7][7])
{
	cout << "test" << endl;
	if(index == 47){
		if(x == 6 && y == 0) return 1;
		else return 0;
	}
	else if(is_out_of_bound(x,y))
	{
		return 0;
	}
	else if(track[x][y] == 1)
	{
		return 0;
	}
	track[x][y] = 1;
	int count = 0;

	if(path[index] == '?')
	{
		count += explore(path, x + 1 , y + 0, index + 1, track);
		track[x][y] = 0;// U 
		count += explore(path, x - 1 , y + 0, index + 1,track);
		track[x][y] = 0;// D 
		count += explore(path, x + 0 , y - 1,index + 1, track);
		track[x][y] = 0;// L 
		count += explore(path, x + 0 , y + 1, index + 1, track);
		track[x][y] = 0;// R 
	}
	else if(path[index] == 'U')
	{
		count = explore(path, x - 1, y + 0, index + 1, track);
	}

	else if(path[index] == 'D')
	{
		count = explore(path, x + 1, y + 0, index + 1 , track);
	}

	else if(path[index] == 'L')
	{
		count = explore(path, x + 0, y - 1 , index + 1 , track);
	}
	else if(path[index] == 'R')
	{
		count = explore(path, x + 0, y + 1 , index + 1 , track);
	}

	

	return count;
}

int main()
{
	int x{0},y{0},i{0};
	string road;
	cin >> road;
	char path_arr[48];
	for(char n : road)
	{
		path_arr[i] = n;
		i++;
	}
	int track[7][7] = {0};
	cout << explore(path_arr, x, y, 0, track);


	
	
}
