#include<iostream>
#include<string>
using namespace std;
bool palindrome(string a,int n)
{
	static int i=0;
	
	if(i==n)
	return true;
	
	if(a[i]!=a[n])
	return false;
	
	if(i<n){
	
	i++;
	return palindrome(a,n-1);
}
	return true;
}
main()
{
	string a;
	cout<<"ENTER STRING   "<<endl;
	cin>>a;
	int l;
	l=a.size();
	
	if(palindrome(a,l-1))
	cout<<"PALINDOME ";
	else
	cout<<"NOT PALINDROME  ";
}
