#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
class stack{
	node *head;
	int n;	
	public:
		stack():n(0)
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
	int find_length()
	{
		node *t=head;
		while(t!=NULL){
		t=t->next;
		n++;
	}
}
	void transfer(stack &s2){
		int count=0,temp;  //n=length of stack which is currently 8
		
		for(int i=0;i<n-1;i++)
		{
			count=0;
			temp=pop(); //take out the first element
			while(count <n-1-i)
			{
				s2.push(pop()); //push the remaining element
				count++;
			}
			push(temp);  //now reversing the current stack 
			while(s2.head!=NULL)
			push(s2.pop());
		}
		while(head!=NULL) //and copy element in 2nd stack
		s2.push(pop());
		
		
		s2.display();
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
	s1.find_length();
	s1.transfer(s2);
	
	
	
}
