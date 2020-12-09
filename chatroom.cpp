#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string a = "hello";
	int j=0,count=0;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == a[j])
		{
			j++;
			count++;
		}
		if(count == 5)
			break;
	}
	if(count == 5)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}