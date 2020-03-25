#include<iostream>
#include<string>
using namespace std;
void cube(int n)
{
	static int i=1;
	int ans;
	if(i>n)
	return ;
	ans=i*i*i;
	cout<<ans<<" ";
	i++;
	
	cube(n);
}
main()
{

	cube(4);
}
