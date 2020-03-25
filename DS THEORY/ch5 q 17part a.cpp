#include<iostream>
#include<string>
using namespace std;
bool check(string a,int n,char b)
{
	static int i=0;
	
	if(n<0)
	return false;
	
	if(a[n]==b)
	return true;
	
	check(a,n-1,b);
	
}
main()
{
	string a;
	char ch;
	cout<<"ENTER STRING   "<<endl;
	cin>>a;
	int l;
	l=a.size();
	cout<<"ENTER CHARACTER TO CHECK  ";
	cin>>ch;
	if(check(a,l-1,ch))
	cout<<"found CHARACTER  ";
	else
	cout<<"NOt FOUND  ";
}
