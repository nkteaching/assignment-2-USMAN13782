#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
class stack{
	node *head;	
	public:
		stack()
		{
			head=NULL;
		}
	
	void push(int data)
	{
		node *t=new node;
		t->data=data;
		if(!head)
		{
			t->next=NULL;
		}
		else
		t->next=head;
		
		head=t;
	}

	int pop()
	{
		int a;
		if(head==NULL)
		cout<<"STACK IS UNDER FLOW"<<endl;
		else{
			a=head->data;
		//cout<<head->data<<" ";
		node *t=head;
		head=head->next;
		delete t;
		return a;
	
	}
	}
	void display()
	{
		node *t=head;
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->next;
		}
	}
	void transfer(stack &s2,stack &temp){
		
		while(head!=NULL){
		temp.push(pop());
		}
		while(temp.head!=NULL)
		s2.push(temp.pop());
	}
	
};
main()
{
	
	stack s2,temp;
	stack s1;
	
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(25);
	s1.push(40);
	s1.push(50);
	s1.push(60);
	s1.push(70);
	s1.display();
	cout<<endl;
	s1.transfer(s2,temp);
	
	s2.display();
	
}
