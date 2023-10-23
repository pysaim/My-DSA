#include<iostream>
using namespace std;
class LinkL{
	public:
	int data;
	LinkL* next;
	
	LinkL(int d)
	{
		data =d;
		next=NULL;
	}
};

void addfirst(LinkL* &head,int data)
{
	LinkL* newnode=new LinkL(data);
	newnode->next=head;
	head=newnode;
	
	}

void display(LinkL* head){
	LinkL* temp=head;
	
	if(temp==NULL){
		cout<<"No data in the list";
	}
	else
	{
	
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
}
}

int main()
{
//	new key word is for dynamically allocation of data
	
//	LinkL* node1=new LinkL(50);
//	cout<<node1->data<<endl;
//	cout<<node1->next<<endl;


	
	LinkL* newnode=NULL;
	addfirst(newnode,10);
	
	display(newnode);
	
	
	
	
}
