#include<iostream>
using namespace std;
#include<string>

int main()
{
	string s,result;
	cin >> s;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||s[i]=='Y')
		{
			continue;
		}
		else
		{
			result += '.';
			result += tolower(s[i]);
		}
	}
	cout << result;
	return 0;
}