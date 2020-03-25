#include<iostream>
using namespace std;
template<class t1>
class node{
	public:
		t1 data;
		node *next;
};
template<class t1> //use template to hold different data type
class stack{
	node<t1> *head;	
	public:
		stack()
		{
			head=NULL;
		}
	
	void push(t1 data)
	{
		node<t1> *t=new node<t1>;
		t->data=data;
		if(!head)
		{
			t->next=NULL;
		}
		else
		t->next=head;
		
		head=t;
	}
	
	t1 pop()
	{
		t1 a;
		if(head==NULL)
		cout<<"STACK IS UNDER FLOW"<<endl;
		else{
			a=head->data;
		//cout<<head->data<<" ";
		node<t1> *t=head;
		head=head->next;
		delete t;
		return a;
	
	}
	}
	void display()
	{
		node<t1> *t=head;
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->next;
		}
	}
	
}; 
	
main()
{
	stack <int>s2;
	stack <float>s1;

	s1.push(10.23);
	s1.push(20.5);
	s1.push(30.67);
	s1.push(25.80);
	s2.push(40);
	s2.push(50);
	s2.push(60);
	s2.push(70);
	s1.display();
	cout<<endl;
	s2.display();
}
