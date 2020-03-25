#include<iostream>
#include<string>
using namespace std;
int check(string a,int n,char b)
{	
	static int count=0;
	
	if(n<0)
	return count;
	
	if(a[n]==b)
	{
	count++;
}
	return check(a,n-1,b);
	
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
	cout<<check(a,l-1,ch);
	
}
