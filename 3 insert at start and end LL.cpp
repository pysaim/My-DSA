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
	
	do {
        int q;
        

        cout << "Insert at the beginning (B) or end (E)? ";
        cin >> cho;

        if (cho == "B" || cho == "b") {
        	
            	cout<<"Enter size";
	            cin>>size;
	           for(int i=0;i<size;i++){
	           
	           cout<<"enter data at linl list"<<i<<":";
	           cin>>q;
               n.insert_first(q);
                     }
        }
        
        else if (cho == "E" || cho == "e") {
                cout<<"Enter size";
	            cin>>size;
	           for(int i=0;i<size;i++){
	           
	           cout<<"enter data at linl list"<<i<<":";
	           cin>>q;
               n.insert_last(q);
                     }
        }
        else {
            cout << "Invalid choice. Please choose B or E." << endl;
        }

        n.display();

        cout << "Do you want to enter more data (Y/N)? ";
        cin >> cho;
    } while (cho == "Y" || cho == "y");
return 0;
}
