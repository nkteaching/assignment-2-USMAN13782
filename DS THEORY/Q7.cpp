#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
class queue{

	
	public:
		int n;		
		node *head,*tail;
		queue():n(0){
		
		head=tail=NULL;
		}
			void enqueue(int data)
		{
			n++;
			node *t =new node;
			t->data=data;
			t->next=NULL;
			if(!head)
			head=tail=t;
			else
			{
			tail->next=t;
			tail=t;
		}
		}
			bool check(){
			if(head==NULL)
			return 0;
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
		n--;
		return a;
		}
		}
	int length()
	{
		node *t=head;
		while(t!=NULL){
		n++;
			t=t->next;
		}
		
		return n;
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
	
	void push(int data,queue &q1)
	{
		q1.enqueue(data);
	}
	
	int pop(queue &q1,queue &q2)
	{
	
		int a,count=0,size;

		if(q1.head!=NULL)
		{		
			 size=q1.n;//taking size
			
			while(count < size-1)//until the last element
			{
			q2.enqueue(q1.dequeue());
			count++;
		}

		a=q1.dequeue();
		return a;
		
		}
		else
		{
		count=0;
			int size=q2.n;//taking size
		
			while(count < size-1)//until the last element
			{
			q1.enqueue(q2.dequeue());
			count++;
		}
		a=q2.dequeue();
		return a;
			
		}
	}
	
};

main()
{
	int i=0;
	stack s1;
	queue q1,q2;
	s1.push(10,q1);
	s1.push(20,q1);
	s1.push(30,q1);
	s1.push(25,q1);
	s1.push(40,q1);
	s1.push(50,q1);
	q1.display();
	cout<<endl;
	cout<<s1.pop(q1,q2)<<" ";
	cout<<s1.pop(q1,q2)<<" ";
	cout<<s1.pop(q1,q2)<<" ";
	cout<<s1.pop(q1,q2)<<" ";
	cout<<s1.pop(q1,q2)<<" ";
	cout<<s1.pop(q1,q2)<<" ";
	

}
