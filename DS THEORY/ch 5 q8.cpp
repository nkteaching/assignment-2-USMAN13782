#include<iostream>
#include<string>
using namespace std;
int mult(int a,int b,int ans)
{
	static int i=0;
	static int c=0,flag=0;
	if(a<0)
	{
	flag=a;
	a=-a;
}
	if(b<0){
	
	c=b;	
	b=-b;
	
}


	
	if(i==b)
	{
	
		if(flag<0 && c<0)
		return ans;
		
		if(flag <0 || c<0 )
		{
		ans=-ans;
		return ans;	
		}
		else
		{
			
		return ans;
	}
	}
	ans+=a;
	i++;
	mult(a,b,ans);
}
main()
{

	int a,b;
	cout<<"ENTER TWO NO  "<<endl;
	cin>>a;
	cin>>b;
	
	cout<<mult(a,b,0);
}
