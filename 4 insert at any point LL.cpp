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
	void insert_spc_pnt(int posi,int n){
		
		if(head==NULL)
		{
	
		 head=new node();
		 head->data=n;
		 head->next=NULL;	
			
		}
		
		else
		
		{
		  node *temp;
		  temp=head;
		  while(temp->data!=posi)
		  { 
		  temp=temp->next;
		
		  	}
		  node *p;
		  p=new node();
		  p->data=n;
		  p->next= temp->next;
		  temp->next=p;
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
	int pos;
            	cout<<"Enter how many data do you want to enter at link list :";
	            cin>>size;
	           for(int i=1;i<=size;i++){
	           
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_first(q);
                     }
                     n.display();
	
	do {
        
                cout<<"Enter how many data do you want to enter any point of link list :";
	            cin>>size;
	            cout<<"Enter Position";
	            cin>>pos;
	           for(int i=1;i<=size;i++){
	           
	           cout<<"Enter data "<<i<<":";
	           cin>>q;
               n.insert_spc_pnt(pos,q);
                     }
        cout<<"Updated LL:-"; 
         n.display();

        cout << "Do you want to enter more data (Y/N)? ";
        cin >> cho;
    } while (cho == "Y" || cho == "y");
return 0;
}	
