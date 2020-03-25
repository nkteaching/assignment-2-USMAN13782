#include<iostream>
using namespace std;
class node{
	public:
	 int data;
	 node *next;
};
class list{
	
	public:
		node *head,*tail;
		list(){
			head=tail=NULL;
			
		}
		void add(int data)
		{
			node *t=new node;
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
		int find_length(node *t){
			static int count=0;
			if(t==NULL)
			return count;
			
			count++;
			find_length(t->next);
		}
		
};
main()
{
	//node *head=NULL;
	list l;
	int length;
	l.add(10);
	l.add(20);
	l.add(26);
	l.add(36);
	l.add(45);
	length=l.find_length(l.head);
	cout<<"LENGTH IS  "<<length;
}
