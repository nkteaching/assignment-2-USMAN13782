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
		stack()
		{
			head=NULL;
		}
	
	void push(char data)
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

	char pop()
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

	bool palindrome(stack &s2){
	 node *temp=head;
	 
	 while(temp!=NULL)
	 {
	 
	 s2.push(temp->data);		
	 temp=temp->next;
}
	while(head!=NULL && s2.head!=NULL)
	{
		if(pop()!= s2.pop())
		return false;
	}
	return true;
}
};
main()
{
	
	stack s2;
	stack s1;
	
	s1.push('m');
	s1.push('a');
	s1.push('d');
	s1.push('a');
	s1.push('m');
	

	cout<<endl;
	if(s1.palindrome(s2))
	cout<<"palindrome  ";
	else
	cout<<"not palindrome ";
	
	
	//s2.display();
	
}
