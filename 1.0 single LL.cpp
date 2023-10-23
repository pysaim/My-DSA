#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	
	node* head;
	node(){
		head=NULL;
	}
	
	void insert_first(int n)
	{
		if(head==NULL)
		{
			head=new node();
			head->data=n;
			head->next=NULL;
		}
		else
		{
			node* ptr=new node();
			ptr->data=n;
			ptr->next=head;
			head=ptr;
		}
		
	}
	void display(){
		node* temp;
		temp=head;
		if(temp==NULL)
		{
			cout<<"NO Data in Link List";
		}
		else
		{
			while(temp->next!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL";
		}
	}
	
	
};
int main(){
	
	node n;
	int size;
	string cho;
	do{
	cout<<"Enter size";
	cin>>size;


	for(int i=0;i<size;i++){
		
	int q;
	cout<<"enter data"<<i<<":";
	cin>>q;
    n.insert_first(q);
}

n.display();
cout<<"Do you want to enter more data(Y/N)";
cin>>cho;
}while(cho=="y"||cho=="Y");
	

return 0;
}
