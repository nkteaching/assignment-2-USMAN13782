#include<iostream>
#include<string>
using namespace std;
int sum_of_n_number(int a[],int n,int ans)
{

	if(n<0)
	return ans;
	ans+=a[n];
	
	sum_of_n_number(a,n-1,ans);
}
main()
{

	int a[4];
	cout<<"ENTER  NO  "<<endl;
	for(int i=0;i<4;i++)
	cin>>a[i];
	cout<<sum_of_n_number(a,3,0);
}
