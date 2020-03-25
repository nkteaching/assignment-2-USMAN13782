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
	void ascending(stack &s2){
		int temp;
		while(head!=NULL){
		temp=pop();
		while(s2.head!=NULL && s2.peek()>temp){  //check if variable in 2nd stack is greater or not if not greater than we push in 2nd
			push(s2.pop());
		}
		s2.push(temp);
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
	s1.ascending(s2);
	
	s2.display();
	
}
