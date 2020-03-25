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
	
	void sum_of_large_no(stack &s2,stack &carry,stack &result){
	int sum=0;
	while(1)
	{
		
		
		if(carry.head!=NULL) //carry stack
		sum=carry.pop();
		if(head==NULL) //check if one stack is empty 
		{
		sum=s2.pop()+sum;
		result.push(sum);
		break;	
		}
			if(s2.head==NULL)//check another stack
		{
		sum=pop()+sum;
		result.push(sum);
		break;	
		}
		else //otherwise pop both stack and add it
		{
			sum=pop()+s2.pop()+sum;
		}
		
		if(sum>9)//sum > 9 take mod and push in result stack
		{
			sum%=10;
			result.push(sum);
			carry.push(1);//and always if sum > 9 than push 1 to carry stack
		}
		else
		result.push(sum);// just push the sum in result stack
		sum=0;
		if(head==NULL && s2.head==NULL)
		break;
	}

		
}
};
main()
{
	
	stack s2,carry;
	stack s1,result;
	
	s1.push(6);
	s1.push(6);
	s1.push(0);
	s2.push(7);
	s2.push(6);
	s2.push(5);
	s2.push(0);
	
	s1.display();
	cout<<endl;
	s2.display();
	s1.sum_of_large_no(s2,carry,result);
	cout<<endl;
	cout<<"FINAL ANS IS "<<endl;
	result.display();
	
	
	
}
