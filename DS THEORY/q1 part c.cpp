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
		bool check(){
			if(head==NULL)
			return 0;
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
	int peek()
	{
		return head->data;
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
	void reverse(stack &s2){
		int a;
		while(head!=NULL){
		
		a=pop();
		s2.push(a);
	}
		
	}
};
main()
{
	
	stack s2;
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
	s1.reverse(s2);
	
	s2.display();
	
}
