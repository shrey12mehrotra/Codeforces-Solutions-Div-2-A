#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,sum=0;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sum = sum/2;
	sort(arr,arr+n);
	int count = 0;
	int result = 0;
	for(int i=n-1; i>=0; i--)
	{
		result += arr[i];
		count++;
		if(result > sum)
			break;
	}
	cout << count;
}