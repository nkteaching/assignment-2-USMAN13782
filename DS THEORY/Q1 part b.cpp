#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
class queue{
	
	public:
		node *head,*tail;
		queue(){
		
		head=tail=NULL;
		}
			void enqueue(int data)
		{
			node *t =new node;
			t->data=data;
			t->next=NULL;
			if(!head)
			head=tail=t;
			else
			tail->next=t;
			tail=t;
			
		}
		int dequeue()
		{
		int a;
		if(head==NULL)
		cout<<"STACK IS UNDER FLOW"<<endl;
		else{
		a=head->data;
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
};
class stack:public queue{
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
	void reverse(queue &q1){
		while(head!=NULL)
		q1.enqueue(pop());
		
		while(q1.head!=NULL)
		push(q1.dequeue());
		
	}
};

main()
{
	
	stack s2,s3;
	stack s1;
	queue q1;
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
	s1.reverse(q1);
	
	s1.display();
	
}
