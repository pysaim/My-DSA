#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	
	node* head;
	node()
	{
		head=NULL;
	}
	void insert_first(int n)
	{
		if(head==NULL){
			head=new node();
			head->data=n;
			head->next=NULL;
		}
		else
		{
			node* ptr=new node;
			ptr->data=n;
			ptr->next=head;
			head=ptr;
		}
	}
	void del_first()
	{
		if(head==NULL)
		{
			cout<<"List is already empty";
		}
		else
		{
			node* ptr=head;
			head=ptr->next;
			delete ptr;
			ptr=NULL;
		}
	}
	void display()
	{
		node* temp;
		temp=head;
		if(temp==NULL)
		{
			cout<<"No data in Link List"<<endl;
		}
		else
		{
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
		}
	}
};

int main()
{
		node n;
	int size;
	string cho;
	int q;
	
            	cout<<"Enter how many data do you want to enter at link list :";
	            cin>>size;
	           for(int i=1;i<=size;i++){
	           
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_first(q);
                     }
                     n.display();
	
	do {
        
            
	            
	           
	           
	           
        n.del_first();
                     
        cout<<"Updated LL:-"; 
         n.display();

        cout << "Do you want to delete one more node at first(Y/N)? ";
        cin >> cho;
    } while (cho == "Y" || cho == "y");
return 0;
}
