#include<iostream>

using namespace std;
#define MAX 10

class Queue
{    
	int data[MAX];
    int front, rear;
   	
	public:
		Queue()
		{
			front = rear = -1;
		}
		int isempty();
		int isfull();
		int enterQueue(int);
		int delqueue();
		void display();
};

int Queue::isempty()
{
	if(front == rear)
	{	
		return 1;
	}
	else
	{
		return 0;   
	}
}

int Queue::isfull()
{   
	if(rear == MAX-1)
    {
		return 1;
    }
    else
    {
       return 0;
    }
}

int Queue::enterQueue(int x)
{
	if(front == -1)
	{
		front++;
	}
	data[++rear] = x;
	return rear;
}

int Queue::delqueue()
{       
	int x = data[front];
	front++;
	return x;
}

void Queue::display()
{   
	int i;
    cout<<"\n";
    for(i = front; i <= rear; i++)
    {
	    cout<<data[i]<<" ";
    }
}

int main()
{      
	Queue obj;
	int ch, x;
	
	do{
		cout<<"\n 1 : Insert Job\n 2 : Delete Job\n 3 : Display\n 4 : Exit\n Enter your choice : ";
	    cin>>ch;
		switch(ch)
		{  
			case 1:
				if (obj.isfull())
			    {  
					cout<<" Queue is overflow!!\n\n";
				}
			   	else
			   	{   
				   	cout<<"\n Enter data : \n";
					cin>>x;
					obj.enterQueue(x);
					cout<<endl;
			    }
		   		break;
		   	
	   		case 2: 
		   	if(obj.isempty())
		   	{   
		   		cout<<"\n Queue is underflow!!!\n\n";  
			}
			else
		   	{	 
			   	cout<<"\n Deleted Element : "<<obj.delqueue()<<endl;
		    	cout<<"\nRemaining Jobs : ";
		    	obj.display();
		    }
		    break;
		    
	  		case 3: 
			if (obj.isempty())
		  	{		 
			 	cout<<"\n Queue is empty!!!\n\n";  
			}
			else
			{  
				cout<<"\n Queue contains : \n";
			    obj.display();
			}
			break;
			
	  		case 4: 
			  cout<<"\n Exiting Program.....";
		}
    }while(ch != 4);
	return 0;
}


/*
1. start
2.declare var such as ch, x
3.Print menu - 
	a. insert job 
	b. delete job
	c. display
	d. exit
	Enter ur choice
	
4.
case 1 :
	then call isFull() function

5.	
case 2 :
	then call isEmpty() function

6.	
case 3 :
	then call isEmpty() function
	if (not empty) 
		then call display() function
	else
		queue is empty 

7.	
case 4 :
	then print Existing the program
	
8. stop
	
*/
