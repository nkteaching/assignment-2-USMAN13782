#include<iostream>
using namespace std;
int find_odd(int n,int i)
{
	if(i==n)
	return 1;
	
	if(i%2!=0)
	cout<<i<<"  ";
	
	find_odd(n,i+1);
}
int _odd(int n)
{
	if(n==1)
	return 1;
	
	if(n%2!=0)
	cout<<n<<"  ";
	
	_odd(n-1);
}
main()
{
	cout<<"FROM 1 TO N  "<<endl;
	find_odd(10,1);
	cout<<endl<<"FRoM N TO 1"<<endl;
	_odd(10);
}
