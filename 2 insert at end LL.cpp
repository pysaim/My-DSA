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
	
//	void insert_first(int n)
//	{
//		if(head==NULL)
//		{
//			head=new node();
//			head->data=n;
//			head->next=NULL;
//		}
//		else
//		{
//			node* ptr=new node();
//			ptr->data=n;
//			ptr->next=head;
//			head=ptr;
//		}
//		
//	}
	
	void insert_last(int n)
	{
		if(head==NULL)
		{
			head=new node();
			head->data=n;
			head->next=NULL;
		}
		else
		{
			node*p;
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			
			node* ptr=new node();
			ptr->data=n;
			ptr->next=NULL;
			p->next=ptr;
		}
		
	}
	void display(){
		node*p;
		p=head;
		if(p==NULL)
		{
			cout<<"NO Data in Link List";
		}
		else
		{
			while(p!=NULL)
			{
				cout<<p->data<<"->";
				p=p->next;
			}
			cout<<"NULL"<<endl;
		}
	}
	
	
};
int main(){
	
	node n;
	int size;
	string cho;
	int q;
            	cout<<"Enter how any data do you want to enter at link list :";
	            cin>>size;
//	           for(int i=1;i<=size;i++){
//	           
//	           cout<<"Enter data "<<i<<":";
//	           cin>>q;
//               n.insert_first(q);
//                     }
//                     n.display();
	
	do {
        
                cout<<"Enter how any data do you want to enter at te end of link list :";
	            cin>>size;
	           for(int i=1;i<=size;i++){
	           
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_last(q);
                     }
        cout<<"Updated LL:-";
         n.display();

        cout << "Do you want to enter more data (Y/N)? ";
        cin >> cho;
    } while (cho == "Y" || cho == "y");
return 0;
}

