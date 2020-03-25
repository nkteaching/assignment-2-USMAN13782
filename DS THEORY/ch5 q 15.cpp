 #include<iostream>
#include<string>
using namespace std;
void nontail_1(int n)
{
	
	if(n>0)
	{
	nontail_1(n-1);
	cout<<n<<" ";
	}
	
}
void tail_1(int n)
{
	
	if(n>0)
	{
	
	cout<<n<<" ";
	tail_1(n-1);
	}
	
}
void nontail_2(int n)
{
	
	if(n>0)
	{
	nontail_2(n-1);
	cout<<n<<" ";
	}
	
}
void tail_2(int n)
{
	
	if(n>0)
	{
	
	cout<<n<<" ";
	tail_2(n-1);
	}
	
}
void nontail_3(int n)
{
	
	if(n>0)
	{
	nontail_3(n-1);
	cout<<n<<" ";
	}
	
}
void tail_3(int n)
{
	
	if(n>0)
	{
	
	cout<<n<<" ";
	tail_3(n-1);
	}
	
}
main()
{
	cout<<"nontail "<<endl;
	nontail_1(1);
	cout<<endl<<"TAIL "<<endl;
	tail_1(1);
	cout<<endl<<"nontail "<<endl;
	nontail_2(2);
	cout<<endl<<"TAIL "<<endl;
	tail_2(2);
	cout<<endl<<"nontail "<<endl;
	nontail_3(4);
	cout<<endl<<"TAIL "<<endl;
	tail_3(4);
}
