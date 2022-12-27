#include<iostream>

using namespace std;

class pizza
{
	int front, rear, q[5];
 	
	public:
 	
		pizza()
		{
			front = rear = -1;
		}
	
		int isfull()
		{	
		 	if((front == 0 && rear == 4))
	 		{	 
			 	return 1;
	 		}
			else
			{	 
				return 0;
	 		}
		}
		
		int isempty()
		{	 
		 	if(front == -1 && rear == -1)
		 	{	 
				return 1;
		 	}
		 	else
			{	 
				return 0;
		 	}
		}
		void add()
		{	 
			if(isfull() == 0)
			{
			 	cout<<"\n Enter the Pizza ID: ";
				if(front == -1 && rear == -1)
				{	 
				 	front = rear = 0;
					cin>>q[rear];
				}
				else
				{	 
				 	rear = rear + 1;
					cin>>q[rear];
				}
				char c;
				cout<<" Do you want to add another order ? Press Y : ";
				cin>>c;
				if(c=='y'||c=='Y')
					add();
			}
			else
			{	 
			 	cout<<"\n Orders are full.";
			}
		}
		
		void serve()
		{	 
			if(isempty() == 0)
			{	 
			 	if(front == rear)
				{	 
				 	cout<<"\n Order served is : "<<q[front];
					front=-1;
					rear=-1;
				}
				else
				{	 
				 	cout<<"\n Order served is : "<<q[front];
					front = front + 1;
				}
			}
			else
			{
			 	cout<<"\n Orders are empty ";
			}
		}
		
		void display()
		{
		  	int i;
			if(isempty() == 0)
			{	 
				for(i = front; i != rear; i++)
			 	{	
				 	cout<<q[i]<<" <- "; 
				}
			 	cout<<q[rear];
		 	}
		 	else
		 	{	 
			 	cout<<"\n Orders are empty";
		 	}
		}
		
		void check()
		{	 
			int ch;
			cout<<"\n\n * * * * PIZZA PARLOUR * * * * \n\n";
			cout<<"\n 1. Add a Pizza \n 2. Display the Orders \n 3. Serve a pizza \n 4. Exit \n Enter your choice : ";
		 	cin>>ch;
			switch(ch)
			{	 
				case 1:		 
					add();		
					break;
		 		case 2:		
				 	display();	 
					break;
				case 3:		
					serve();	 
					break;
		 		case 4:		
				 	break;
			 	default:
			 	cout<<"Invalid choice ";
				check();
		 	}
		 	cout<<endl;
			display();
			char ch1;
			cout<<"\n Do you want to continue in Main ? Press Y : ";
			cin>>ch1;
			if(ch1 == 'y' || ch1 == 'Y')
				check();
		}
};

int main()
{	 
	pizza p1;	 
	p1.check();	 
	return 0;	
}
