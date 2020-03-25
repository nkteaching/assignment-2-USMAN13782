#include<iostream>
using namespace std;
class node{
	public:
	char data;
	node *next;
	
};
class stack{
	node *head;
	public:
	stack(){
		head=NULL;
	}
	void push(char x){
			node *t1=new node;
			t1->data=x;
			if(!head)
			t1->next=NULL;
			else
			t1->next=head;
			
			head=t1;
		}
		char pop()
		{
			node *t1=head;
			char a;
			a=head->data;
			head=head->next;
			
			delete(t1);
			
		}
		bool check_expression(string a)
		{
			char ch;
			int i=0;
			while(a[i]!=0)
			{
				if(a[i]=='(' || a[i]=='{'  || a[i] =='[' )
				push(a[i]);
				
				switch(a[i])
				{
					case ')':
						{
						//	if(head->data=='(')
							ch=pop();
						if(ch=='{' || ch ==']')
							return false;
						}
						break;
						case '}':
						{
							
							ch=pop();
							if(ch== '(' || ch== ']')
							return false;
						}	
						break;
						case ']':
							{
							
							ch=pop();
							
							if(ch== '(' || ch =='{')
							return false;
						}
					break;
				}
				i++;
			}
			
			return true;
		}
};
main()
{
	string a;
	stack s;
	cout<<"ENTER STRING  ";
	cin>>a;
	
		if(s.check_expression(a))
		cout<<"BALANCE   ";
		else
		cout<<" NOT BALANCED  ";
}
