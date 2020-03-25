#include<iostream>
#include<string>
using namespace std;
int find_length_int(int n)
{
	 int size;
	
	while(n!=0)
	{
		n/=10;
		size++;
	}
	return size;
}
int give_string_length(int s)//extra space which we need for commas as well 
{
	int rem;
	rem=s/3;
	rem+=s;
	
	return rem;
}
string commas(int n,int l,string sol)//l=total length n= number
{
	static int i=1;
	int temp;
	if (l<0)
	{
		string ans;
		ans=sol;
	cout<<"as"<<endl;
	cout<<ans<<endl;
	
	return ans;
}
	if(i%4==0 && l!=0)
	{
		cout<<"sol in if"<<endl;
		sol[l]=',';
		cout<<sol[l]<<endl;
		
	
	}
	else
	{
		
		temp=n%10;
		cout<<temp<<endl;
		sol[l]=temp+'0';
		cout<<"sol"<<sol[l]<<endl;
		n/=10;
		cout<<n<<endl;
		cout<<"Abc"<<endl;
		cout<<"l = "<<l<<endl;
		cout<<"i = "<<i<<endl;
	}
	i++;
	return commas(n,l-1,sol);
	
}

main()
{

	int l,s,no;
	string a,b;
	cout<<"ENTER NO  ";
	cin>>no;
	l=find_length_int(no);
	s=give_string_length(l-1);
	//cout<<bc;
	//cout<<
//	char a[l];
	commas(no,s-1,a);
	
	//cout<<b<<endl;
}
