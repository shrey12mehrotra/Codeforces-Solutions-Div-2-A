#include<iostream>
using namespace std;

int main()
{
	int n,x,y,z,x_sum=0,y_sum=0,z_sum=0;
	cin >> n;
	while(n--)
	{
		cin >> x >> y >> z;
		x_sum += x;
		y_sum += y;
		z_sum += z;
	}
	
	if(x_sum == 0 && y_sum == 0 && z_sum == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}