#include <iostream>
using namespace std;

int main()
{
	int minIndex=0;
	int maxIndex=0;
	int minValue=10000;
	int maxValue=0;
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		if(arr[i] > maxValue)
		{
			maxValue = arr[i];
			maxIndex = i;
		}
		if(arr[i] <= minValue)
		{
			minValue = arr[i];
			minIndex = i;
		}
	}
	if(maxIndex > minIndex)
	{
		cout << maxIndex + abs(n-1-minIndex) - 1;
	}
	else
	{
		cout << maxIndex + abs(n-1-minIndex);
	}
	return 0;
}