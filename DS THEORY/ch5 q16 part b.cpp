#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
bool palindrome(string a,int n)
{
	static int i=0;
	
	if(i==n)
	return true;
	if(a[i]==',' || a[i]=='`' || a[i]=='-' || a[i]=='"' || a[i]==' ')
	{
		i++;
		return palindrome(a,n);
	}
		if(a[n]==',' || a[n]=='`' || a[n]=='-' || a[n]=='"' || a[n]==' ')
	{
		
		return palindrome(a,n-1);
	}
	if(a[i]!=a[n])
	{
	cout<<"i "<<a[i]<<"\t n=  "<<a[n]<<endl;	
	return false;
}
	if(i<n){
	
	i++;
	return palindrome(a,n-1);
}
	return true;
}
main()
{
	char a[100];
	cout<<"ENTER STRING   "<<endl;
	cin.getline(a,100);
	int l;
	for(int i=0;a[i]!='\0';i++){
	
	a[i]=toupper(a[i]);
	l++;
}



	if(palindrome(a,l-1))
	cout<<"PALINDOME ";
	else
	cout<<"NOT PALINDROME  ";
}
