#include<iostream>
using namespace std;
void reverse()
{
	char ch;
	cin.get(ch);
	if(ch!='\n')
	reverse();
	
	cout.put(ch);
}
main()
{
	reverse();
}
