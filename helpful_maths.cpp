#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int  main()
{
    string s;
    cin >> s;
    char array[100];
    int j=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] != '+'){
            array[j]=s[i];
            j++;
        }
    }
    sort(array,array+j);
    for(int i=0; i<j; i++)
    {
        if(i == j-1)
        {
            cout << array[i] << endl;
        }
        else
        {
            cout << array[i] << "+";    
        }
    }
    return 0;
}